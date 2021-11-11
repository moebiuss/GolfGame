#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Action`3<System.Single,System.Single,System.Int32>
struct Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF;
// System.Func`3<System.Int32,System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>
struct Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct IEnumerable_1_t4A074CE702A80976FC91ACCFF79117357E681653;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// BallController
struct BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CrossHairController
struct CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// EndBall
struct EndBall_tEF961DC05482F573CC63B66399B8DD23BFF8A501;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GroundPiece
struct GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MouseLook
struct MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OpponentController
struct OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// Put
struct Put_tB2125925BBE8215613D03F4C6677EE201083BF0F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreTxtAssigner
struct ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB;
// ScrollingUVs_Layers
struct ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// ShootController
struct ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// SteamPusher
struct SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C;
// SteamedBehaviour
struct SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB;
// Stick
struct Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Turn_Move
struct Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// UIElementsController
struct UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Waypoint
struct Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// VarContainer/<>c
struct U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809;
// Waypoint/<Slow>d__19
struct U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral37F2926A8DFD8BC6AA471D3C64911B7836D9DBB1;
IL2CPP_EXTERN_C String_t* _stringLiteral4A5C4AE238E60F01BA4055F3B225BDE738B07CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD0E13BBD9CE119AD6794A93E6EFF3C8E74522F;
IL2CPP_EXTERN_C String_t* _stringLiteralC1ACE21E475674D1DADF43477E52E826884CF2D9;
IL2CPP_EXTERN_C String_t* _stringLiteralC615F615E8D6A573E66889655B9336B624BF310B;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m77737714A4BCE62011E611A8A1AEB5B4555C8D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB_m35F6FA0DCE45DAC243878D95DA27B32725CB3618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0_m0370213B65830A957F5E0DC39EBCEDD9DB76DE5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79_m8FBC99DE03E94CBDC263CD99184DB66FFB808D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreTxtAssigner_U3CScoreChangedU3Eb__3_0_mCD60AA0D639CE6C79FE3144B0823B0DF4FC2CAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSlowU3Ed__19_System_Collections_IEnumerator_Reset_m65B10AF0055BD32AECFA53174618E29A21016107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetScoreU3Eb__3_0_m0F76CAAD832245B58B40123C74CD847549A040D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIElementsController_U3CStartU3Eb__14_0_mB217E2534EA8212CDC9CBFC2F12944CBC5F10BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIElementsController_U3CStartU3Eb__14_1_m49A5BA2F4F54058DA2C168F99B2947A9F6D9C139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Extension
struct  Extension_tF32F11A2B147AE928D1580A0783A25D51D0E34B3  : public RuntimeObject
{
public:

public:
};


// Globals
struct  Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72  : public RuntimeObject
{
public:

public:
};

struct Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields
{
public:
	// System.Int32[] Globals::ShotAmount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ShotAmount_0;

public:
	inline static int32_t get_offset_of_ShotAmount_0() { return static_cast<int32_t>(offsetof(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields, ___ShotAmount_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ShotAmount_0() const { return ___ShotAmount_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ShotAmount_0() { return &___ShotAmount_0; }
	inline void set_ShotAmount_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ShotAmount_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShotAmount_0), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// VarContainer
struct  VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0  : public RuntimeObject
{
public:

public:
};

struct VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields
{
public:
	// System.Int32[] VarContainer::Scores
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Scores_0;
	// System.Action`1<System.Int32> VarContainer::GameEnded
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___GameEnded_1;
	// System.Action`1<System.Int32> VarContainer::ScoreChanged
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___ScoreChanged_2;

public:
	inline static int32_t get_offset_of_Scores_0() { return static_cast<int32_t>(offsetof(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields, ___Scores_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Scores_0() const { return ___Scores_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Scores_0() { return &___Scores_0; }
	inline void set_Scores_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Scores_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scores_0), (void*)value);
	}

	inline static int32_t get_offset_of_GameEnded_1() { return static_cast<int32_t>(offsetof(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields, ___GameEnded_1)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_GameEnded_1() const { return ___GameEnded_1; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_GameEnded_1() { return &___GameEnded_1; }
	inline void set_GameEnded_1(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___GameEnded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameEnded_1), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreChanged_2() { return static_cast<int32_t>(offsetof(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields, ___ScoreChanged_2)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_ScoreChanged_2() const { return ___ScoreChanged_2; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_ScoreChanged_2() { return &___ScoreChanged_2; }
	inline void set_ScoreChanged_2(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___ScoreChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreChanged_2), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// VarContainer/<>c
struct  U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields
{
public:
	// VarContainer/<>c VarContainer/<>c::<>9
	U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * ___U3CU3E9_0;
	// System.Func`3<System.Int32,System.Int32,System.ValueTuple`2<System.Int32,System.Int32>> VarContainer/<>c::<>9__3_0
	Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Waypoint/<Slow>d__19
struct  U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C  : public RuntimeObject
{
public:
	// System.Int32 Waypoint/<Slow>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Waypoint/<Slow>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Waypoint Waypoint/<Slow>d__19::<>4__this
	Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C, ___U3CU3E4__this_2)); }
	inline Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// DG.Tweening.Plugins.Options.ColorOptions
struct  ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// BallStates
struct  BallStates_t73B7A0C3F516F99E148B9D091D0A2BD9C28C945D 
{
public:
	// System.Int32 BallStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BallStates_t73B7A0C3F516F99E148B9D091D0A2BD9C28C945D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// DG.Tweening.Ease
struct  Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
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

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct  LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct  SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct  TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct  UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct  ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Single>
struct  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Single,System.Single>
struct  Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Single,System.Single,System.Int32>
struct  Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Int32,System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>
struct  Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct  Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// DG.Tweening.TweenCallback
struct  TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.BoxCollider
struct  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DG.Tweening.Tweener
struct  Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___startValue_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startValue_57() const { return ___startValue_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___endValue_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValue_58() const { return ___endValue_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___changeValue_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___getter_61)); }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___setter_62)); }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// BallController
struct  BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody BallController::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_4;
	// System.Single BallController::CrossX
	float ___CrossX_5;
	// System.Single BallController::ShootPower
	float ___ShootPower_6;
	// System.Boolean BallController::OnShot
	bool ___OnShot_7;
	// System.Single BallController::timer
	float ___timer_8;
	// UnityEngine.GameObject BallController::ContactedObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ContactedObj_9;
	// System.Boolean BallController::InfoSent
	bool ___InfoSent_10;
	// System.Int32 BallController::LastScore
	int32_t ___LastScore_12;
	// System.Int32 BallController::index
	int32_t ___index_13;
	// UnityEngine.Vector3 BallController::originPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originPos_14;
	// BallStates BallController::State
	int32_t ___State_15;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___rb_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_CrossX_5() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___CrossX_5)); }
	inline float get_CrossX_5() const { return ___CrossX_5; }
	inline float* get_address_of_CrossX_5() { return &___CrossX_5; }
	inline void set_CrossX_5(float value)
	{
		___CrossX_5 = value;
	}

	inline static int32_t get_offset_of_ShootPower_6() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___ShootPower_6)); }
	inline float get_ShootPower_6() const { return ___ShootPower_6; }
	inline float* get_address_of_ShootPower_6() { return &___ShootPower_6; }
	inline void set_ShootPower_6(float value)
	{
		___ShootPower_6 = value;
	}

	inline static int32_t get_offset_of_OnShot_7() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___OnShot_7)); }
	inline bool get_OnShot_7() const { return ___OnShot_7; }
	inline bool* get_address_of_OnShot_7() { return &___OnShot_7; }
	inline void set_OnShot_7(bool value)
	{
		___OnShot_7 = value;
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}

	inline static int32_t get_offset_of_ContactedObj_9() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___ContactedObj_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ContactedObj_9() const { return ___ContactedObj_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ContactedObj_9() { return &___ContactedObj_9; }
	inline void set_ContactedObj_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ContactedObj_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContactedObj_9), (void*)value);
	}

	inline static int32_t get_offset_of_InfoSent_10() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___InfoSent_10)); }
	inline bool get_InfoSent_10() const { return ___InfoSent_10; }
	inline bool* get_address_of_InfoSent_10() { return &___InfoSent_10; }
	inline void set_InfoSent_10(bool value)
	{
		___InfoSent_10 = value;
	}

	inline static int32_t get_offset_of_LastScore_12() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___LastScore_12)); }
	inline int32_t get_LastScore_12() const { return ___LastScore_12; }
	inline int32_t* get_address_of_LastScore_12() { return &___LastScore_12; }
	inline void set_LastScore_12(int32_t value)
	{
		___LastScore_12 = value;
	}

	inline static int32_t get_offset_of_index_13() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___index_13)); }
	inline int32_t get_index_13() const { return ___index_13; }
	inline int32_t* get_address_of_index_13() { return &___index_13; }
	inline void set_index_13(int32_t value)
	{
		___index_13 = value;
	}

	inline static int32_t get_offset_of_originPos_14() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___originPos_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originPos_14() const { return ___originPos_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originPos_14() { return &___originPos_14; }
	inline void set_originPos_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originPos_14 = value;
	}

	inline static int32_t get_offset_of_State_15() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___State_15)); }
	inline int32_t get_State_15() const { return ___State_15; }
	inline int32_t* get_address_of_State_15() { return &___State_15; }
	inline void set_State_15(int32_t value)
	{
		___State_15 = value;
	}
};

struct BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields
{
public:
	// System.Action BallController::InfoSend
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InfoSend_11;

public:
	inline static int32_t get_offset_of_InfoSend_11() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields, ___InfoSend_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InfoSend_11() const { return ___InfoSend_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InfoSend_11() { return &___InfoSend_11; }
	inline void set_InfoSend_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InfoSend_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InfoSend_11), (void*)value);
	}
};


// CameraFollow
struct  CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraFollow::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_4;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_5;
	// UnityEngine.Vector3 CameraFollow::oldoffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldoffset_6;
	// System.Boolean CameraFollow::shot
	bool ___shot_7;

public:
	inline static int32_t get_offset_of_Ball_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___Ball_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_4() const { return ___Ball_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_4() { return &___Ball_4; }
	inline void set_Ball_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___offset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_5() const { return ___offset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_oldoffset_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___oldoffset_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldoffset_6() const { return ___oldoffset_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldoffset_6() { return &___oldoffset_6; }
	inline void set_oldoffset_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldoffset_6 = value;
	}

	inline static int32_t get_offset_of_shot_7() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___shot_7)); }
	inline bool get_shot_7() const { return ___shot_7; }
	inline bool* get_address_of_shot_7() { return &___shot_7; }
	inline void set_shot_7(bool value)
	{
		___shot_7 = value;
	}
};


// CrossHairController
struct  CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CrossHairController::CrossHairMove
	bool ___CrossHairMove_5;
	// System.Boolean CrossHairController::OnMax
	bool ___OnMax_6;
	// UnityEngine.UI.Slider CrossHairController::CrossBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___CrossBar_7;

public:
	inline static int32_t get_offset_of_CrossHairMove_5() { return static_cast<int32_t>(offsetof(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E, ___CrossHairMove_5)); }
	inline bool get_CrossHairMove_5() const { return ___CrossHairMove_5; }
	inline bool* get_address_of_CrossHairMove_5() { return &___CrossHairMove_5; }
	inline void set_CrossHairMove_5(bool value)
	{
		___CrossHairMove_5 = value;
	}

	inline static int32_t get_offset_of_OnMax_6() { return static_cast<int32_t>(offsetof(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E, ___OnMax_6)); }
	inline bool get_OnMax_6() const { return ___OnMax_6; }
	inline bool* get_address_of_OnMax_6() { return &___OnMax_6; }
	inline void set_OnMax_6(bool value)
	{
		___OnMax_6 = value;
	}

	inline static int32_t get_offset_of_CrossBar_7() { return static_cast<int32_t>(offsetof(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E, ___CrossBar_7)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_CrossBar_7() const { return ___CrossBar_7; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_CrossBar_7() { return &___CrossBar_7; }
	inline void set_CrossBar_7(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___CrossBar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CrossBar_7), (void*)value);
	}
};

struct CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields
{
public:
	// System.Action`1<System.Single> CrossHairController::CrossHairClicked
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___CrossHairClicked_4;

public:
	inline static int32_t get_offset_of_CrossHairClicked_4() { return static_cast<int32_t>(offsetof(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields, ___CrossHairClicked_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_CrossHairClicked_4() const { return ___CrossHairClicked_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_CrossHairClicked_4() { return &___CrossHairClicked_4; }
	inline void set_CrossHairClicked_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___CrossHairClicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CrossHairClicked_4), (void*)value);
	}
};


// EndBall
struct  EndBall_tEF961DC05482F573CC63B66399B8DD23BFF8A501  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GroundPiece
struct  GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GroundPiece::Score
	int32_t ___Score_4;
	// UnityEngine.Material GroundPiece::m
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_5;
	// UnityEngine.Color[] GroundPiece::colorList
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colorList_6;

public:
	inline static int32_t get_offset_of_Score_4() { return static_cast<int32_t>(offsetof(GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0, ___Score_4)); }
	inline int32_t get_Score_4() const { return ___Score_4; }
	inline int32_t* get_address_of_Score_4() { return &___Score_4; }
	inline void set_Score_4(int32_t value)
	{
		___Score_4 = value;
	}

	inline static int32_t get_offset_of_m_5() { return static_cast<int32_t>(offsetof(GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0, ___m_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_5() const { return ___m_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_5() { return &___m_5; }
	inline void set_m_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_5), (void*)value);
	}

	inline static int32_t get_offset_of_colorList_6() { return static_cast<int32_t>(offsetof(GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0, ___colorList_6)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_colorList_6() const { return ___colorList_6; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_colorList_6() { return &___colorList_6; }
	inline void set_colorList_6(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___colorList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorList_6), (void*)value);
	}
};


// MouseLook
struct  MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 MouseLook::_mouseAbsolute
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____mouseAbsolute_4;
	// UnityEngine.Vector2 MouseLook::_smoothMouse
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____smoothMouse_5;
	// UnityEngine.Vector2 MouseLook::clampInDegrees
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___clampInDegrees_6;
	// UnityEngine.CursorLockMode MouseLook::lockCursor
	int32_t ___lockCursor_7;
	// UnityEngine.Vector2 MouseLook::sensitivity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sensitivity_8;
	// UnityEngine.Vector2 MouseLook::smoothing
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___smoothing_9;
	// UnityEngine.Vector2 MouseLook::targetDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetDirection_10;
	// UnityEngine.Vector2 MouseLook::targetCharacterDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetCharacterDirection_11;
	// UnityEngine.GameObject MouseLook::characterBody
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___characterBody_12;
	// System.Single MouseLook::acceleration
	float ___acceleration_13;
	// System.Single MouseLook::maxSpeed
	float ___maxSpeed_14;
	// System.Single MouseLook::dampingSpeed
	float ___dampingSpeed_15;
	// UnityEngine.KeyCode MouseLook::fwdKey
	int32_t ___fwdKey_16;
	// UnityEngine.KeyCode MouseLook::leftKey
	int32_t ___leftKey_17;
	// UnityEngine.KeyCode MouseLook::backKey
	int32_t ___backKey_18;
	// UnityEngine.KeyCode MouseLook::rightKey
	int32_t ___rightKey_19;
	// System.Single MouseLook::speedX
	float ___speedX_20;
	// System.Single MouseLook::speedZ
	float ___speedZ_21;

public:
	inline static int32_t get_offset_of__mouseAbsolute_4() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ____mouseAbsolute_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__mouseAbsolute_4() const { return ____mouseAbsolute_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__mouseAbsolute_4() { return &____mouseAbsolute_4; }
	inline void set__mouseAbsolute_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____mouseAbsolute_4 = value;
	}

	inline static int32_t get_offset_of__smoothMouse_5() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ____smoothMouse_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__smoothMouse_5() const { return ____smoothMouse_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__smoothMouse_5() { return &____smoothMouse_5; }
	inline void set__smoothMouse_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____smoothMouse_5 = value;
	}

	inline static int32_t get_offset_of_clampInDegrees_6() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___clampInDegrees_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_clampInDegrees_6() const { return ___clampInDegrees_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_clampInDegrees_6() { return &___clampInDegrees_6; }
	inline void set_clampInDegrees_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___clampInDegrees_6 = value;
	}

	inline static int32_t get_offset_of_lockCursor_7() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___lockCursor_7)); }
	inline int32_t get_lockCursor_7() const { return ___lockCursor_7; }
	inline int32_t* get_address_of_lockCursor_7() { return &___lockCursor_7; }
	inline void set_lockCursor_7(int32_t value)
	{
		___lockCursor_7 = value;
	}

	inline static int32_t get_offset_of_sensitivity_8() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___sensitivity_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_sensitivity_8() const { return ___sensitivity_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_sensitivity_8() { return &___sensitivity_8; }
	inline void set_sensitivity_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___sensitivity_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___smoothing_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_smoothing_9() const { return ___smoothing_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_targetDirection_10() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___targetDirection_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_targetDirection_10() const { return ___targetDirection_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_targetDirection_10() { return &___targetDirection_10; }
	inline void set_targetDirection_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___targetDirection_10 = value;
	}

	inline static int32_t get_offset_of_targetCharacterDirection_11() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___targetCharacterDirection_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_targetCharacterDirection_11() const { return ___targetCharacterDirection_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_targetCharacterDirection_11() { return &___targetCharacterDirection_11; }
	inline void set_targetCharacterDirection_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___targetCharacterDirection_11 = value;
	}

	inline static int32_t get_offset_of_characterBody_12() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___characterBody_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_characterBody_12() const { return ___characterBody_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_characterBody_12() { return &___characterBody_12; }
	inline void set_characterBody_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___characterBody_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterBody_12), (void*)value);
	}

	inline static int32_t get_offset_of_acceleration_13() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___acceleration_13)); }
	inline float get_acceleration_13() const { return ___acceleration_13; }
	inline float* get_address_of_acceleration_13() { return &___acceleration_13; }
	inline void set_acceleration_13(float value)
	{
		___acceleration_13 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_14() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___maxSpeed_14)); }
	inline float get_maxSpeed_14() const { return ___maxSpeed_14; }
	inline float* get_address_of_maxSpeed_14() { return &___maxSpeed_14; }
	inline void set_maxSpeed_14(float value)
	{
		___maxSpeed_14 = value;
	}

	inline static int32_t get_offset_of_dampingSpeed_15() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___dampingSpeed_15)); }
	inline float get_dampingSpeed_15() const { return ___dampingSpeed_15; }
	inline float* get_address_of_dampingSpeed_15() { return &___dampingSpeed_15; }
	inline void set_dampingSpeed_15(float value)
	{
		___dampingSpeed_15 = value;
	}

	inline static int32_t get_offset_of_fwdKey_16() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___fwdKey_16)); }
	inline int32_t get_fwdKey_16() const { return ___fwdKey_16; }
	inline int32_t* get_address_of_fwdKey_16() { return &___fwdKey_16; }
	inline void set_fwdKey_16(int32_t value)
	{
		___fwdKey_16 = value;
	}

	inline static int32_t get_offset_of_leftKey_17() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___leftKey_17)); }
	inline int32_t get_leftKey_17() const { return ___leftKey_17; }
	inline int32_t* get_address_of_leftKey_17() { return &___leftKey_17; }
	inline void set_leftKey_17(int32_t value)
	{
		___leftKey_17 = value;
	}

	inline static int32_t get_offset_of_backKey_18() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___backKey_18)); }
	inline int32_t get_backKey_18() const { return ___backKey_18; }
	inline int32_t* get_address_of_backKey_18() { return &___backKey_18; }
	inline void set_backKey_18(int32_t value)
	{
		___backKey_18 = value;
	}

	inline static int32_t get_offset_of_rightKey_19() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___rightKey_19)); }
	inline int32_t get_rightKey_19() const { return ___rightKey_19; }
	inline int32_t* get_address_of_rightKey_19() { return &___rightKey_19; }
	inline void set_rightKey_19(int32_t value)
	{
		___rightKey_19 = value;
	}

	inline static int32_t get_offset_of_speedX_20() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___speedX_20)); }
	inline float get_speedX_20() const { return ___speedX_20; }
	inline float* get_address_of_speedX_20() { return &___speedX_20; }
	inline void set_speedX_20(float value)
	{
		___speedX_20 = value;
	}

	inline static int32_t get_offset_of_speedZ_21() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___speedZ_21)); }
	inline float get_speedZ_21() const { return ___speedZ_21; }
	inline float* get_address_of_speedZ_21() { return &___speedZ_21; }
	inline void set_speedZ_21(float value)
	{
		___speedZ_21 = value;
	}
};


// OpponentController
struct  OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single OpponentController::timer
	float ___timer_4;
	// System.Single[] OpponentController::timerval
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___timerval_5;
	// System.Int32 OpponentController::index
	int32_t ___index_6;
	// UnityEngine.Animator OpponentController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_8;
	// System.Boolean OpponentController::Thrown
	bool ___Thrown_9;
	// System.Single[] OpponentController::Cross
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Cross_10;
	// System.Single[] OpponentController::ShootPower
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___ShootPower_11;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_timerval_5() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___timerval_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_timerval_5() const { return ___timerval_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_timerval_5() { return &___timerval_5; }
	inline void set_timerval_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___timerval_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerval_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___anim_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_8() const { return ___anim_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_8), (void*)value);
	}

	inline static int32_t get_offset_of_Thrown_9() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___Thrown_9)); }
	inline bool get_Thrown_9() const { return ___Thrown_9; }
	inline bool* get_address_of_Thrown_9() { return &___Thrown_9; }
	inline void set_Thrown_9(bool value)
	{
		___Thrown_9 = value;
	}

	inline static int32_t get_offset_of_Cross_10() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___Cross_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Cross_10() const { return ___Cross_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Cross_10() { return &___Cross_10; }
	inline void set_Cross_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Cross_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cross_10), (void*)value);
	}

	inline static int32_t get_offset_of_ShootPower_11() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762, ___ShootPower_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_ShootPower_11() const { return ___ShootPower_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_ShootPower_11() { return &___ShootPower_11; }
	inline void set_ShootPower_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___ShootPower_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShootPower_11), (void*)value);
	}
};

struct OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields
{
public:
	// System.Action`3<System.Single,System.Single,System.Int32> OpponentController::BallThrown
	Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * ___BallThrown_7;

public:
	inline static int32_t get_offset_of_BallThrown_7() { return static_cast<int32_t>(offsetof(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields, ___BallThrown_7)); }
	inline Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * get_BallThrown_7() const { return ___BallThrown_7; }
	inline Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 ** get_address_of_BallThrown_7() { return &___BallThrown_7; }
	inline void set_BallThrown_7(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * value)
	{
		___BallThrown_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallThrown_7), (void*)value);
	}
};


// PlayerController
struct  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PlayerController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// System.Single PlayerController::a
	float ___a_6;
	// System.Single PlayerController::b
	float ___b_7;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_a_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___a_6)); }
	inline float get_a_6() const { return ___a_6; }
	inline float* get_address_of_a_6() { return &___a_6; }
	inline void set_a_6(float value)
	{
		___a_6 = value;
	}

	inline static int32_t get_offset_of_b_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___b_7)); }
	inline float get_b_7() const { return ___b_7; }
	inline float* get_address_of_b_7() { return &___b_7; }
	inline void set_b_7(float value)
	{
		___b_7 = value;
	}
};

struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields
{
public:
	// System.Action`3<System.Single,System.Single,System.Int32> PlayerController::ThrowBall
	Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * ___ThrowBall_5;

public:
	inline static int32_t get_offset_of_ThrowBall_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___ThrowBall_5)); }
	inline Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * get_ThrowBall_5() const { return ___ThrowBall_5; }
	inline Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 ** get_address_of_ThrowBall_5() { return &___ThrowBall_5; }
	inline void set_ThrowBall_5(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * value)
	{
		___ThrowBall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ThrowBall_5), (void*)value);
	}
};


// Put
struct  Put_tB2125925BBE8215613D03F4C6677EE201083BF0F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields
{
public:
	// Put Put::Instance
	Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields, ___Instance_4)); }
	inline Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * get_Instance_4() const { return ___Instance_4; }
	inline Put_tB2125925BBE8215613D03F4C6677EE201083BF0F ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// ScoreTxtAssigner
struct  ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ScoreTxtAssigner::index
	int32_t ___index_4;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}
};


// ScrollingUVs_Layers
struct  ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 ScrollingUVs_Layers::uvAnimationRate
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uvAnimationRate_4;
	// System.String ScrollingUVs_Layers::textureName
	String_t* ___textureName_5;
	// UnityEngine.Vector2 ScrollingUVs_Layers::uvOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uvOffset_6;

public:
	inline static int32_t get_offset_of_uvAnimationRate_4() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78, ___uvAnimationRate_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uvAnimationRate_4() const { return ___uvAnimationRate_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uvAnimationRate_4() { return &___uvAnimationRate_4; }
	inline void set_uvAnimationRate_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uvAnimationRate_4 = value;
	}

	inline static int32_t get_offset_of_textureName_5() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78, ___textureName_5)); }
	inline String_t* get_textureName_5() const { return ___textureName_5; }
	inline String_t** get_address_of_textureName_5() { return &___textureName_5; }
	inline void set_textureName_5(String_t* value)
	{
		___textureName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureName_5), (void*)value);
	}

	inline static int32_t get_offset_of_uvOffset_6() { return static_cast<int32_t>(offsetof(ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78, ___uvOffset_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uvOffset_6() const { return ___uvOffset_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uvOffset_6() { return &___uvOffset_6; }
	inline void set_uvOffset_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uvOffset_6 = value;
	}
};


// ShootController
struct  ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider ShootController::PowerBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___PowerBar_4;
	// System.Boolean ShootController::OnMax
	bool ___OnMax_5;
	// UnityEngine.GameObject ShootController::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_6;
	// System.Boolean ShootController::CanShoot
	bool ___CanShoot_7;
	// System.Single ShootController::CrossX
	float ___CrossX_9;

public:
	inline static int32_t get_offset_of_PowerBar_4() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34, ___PowerBar_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_PowerBar_4() const { return ___PowerBar_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_PowerBar_4() { return &___PowerBar_4; }
	inline void set_PowerBar_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___PowerBar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerBar_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnMax_5() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34, ___OnMax_5)); }
	inline bool get_OnMax_5() const { return ___OnMax_5; }
	inline bool* get_address_of_OnMax_5() { return &___OnMax_5; }
	inline void set_OnMax_5(bool value)
	{
		___OnMax_5 = value;
	}

	inline static int32_t get_offset_of_Ball_6() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34, ___Ball_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_6() const { return ___Ball_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_6() { return &___Ball_6; }
	inline void set_Ball_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_6), (void*)value);
	}

	inline static int32_t get_offset_of_CanShoot_7() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34, ___CanShoot_7)); }
	inline bool get_CanShoot_7() const { return ___CanShoot_7; }
	inline bool* get_address_of_CanShoot_7() { return &___CanShoot_7; }
	inline void set_CanShoot_7(bool value)
	{
		___CanShoot_7 = value;
	}

	inline static int32_t get_offset_of_CrossX_9() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34, ___CrossX_9)); }
	inline float get_CrossX_9() const { return ___CrossX_9; }
	inline float* get_address_of_CrossX_9() { return &___CrossX_9; }
	inline void set_CrossX_9(float value)
	{
		___CrossX_9 = value;
	}
};

struct ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields
{
public:
	// System.Action`2<System.Single,System.Single> ShootController::BallShot
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___BallShot_8;

public:
	inline static int32_t get_offset_of_BallShot_8() { return static_cast<int32_t>(offsetof(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields, ___BallShot_8)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_BallShot_8() const { return ___BallShot_8; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_BallShot_8() { return &___BallShot_8; }
	inline void set_BallShot_8(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___BallShot_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BallShot_8), (void*)value);
	}
};


// SteamPusher
struct  SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SteamPusher::BallTouched
	bool ___BallTouched_4;
	// UnityEngine.GameObject SteamPusher::contactedObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___contactedObj_5;
	// System.Boolean SteamPusher::BallonGround
	bool ___BallonGround_6;
	// System.Single SteamPusher::timer
	float ___timer_7;
	// System.Single SteamPusher::SteamTimer
	float ___SteamTimer_8;

public:
	inline static int32_t get_offset_of_BallTouched_4() { return static_cast<int32_t>(offsetof(SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C, ___BallTouched_4)); }
	inline bool get_BallTouched_4() const { return ___BallTouched_4; }
	inline bool* get_address_of_BallTouched_4() { return &___BallTouched_4; }
	inline void set_BallTouched_4(bool value)
	{
		___BallTouched_4 = value;
	}

	inline static int32_t get_offset_of_contactedObj_5() { return static_cast<int32_t>(offsetof(SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C, ___contactedObj_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_contactedObj_5() const { return ___contactedObj_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_contactedObj_5() { return &___contactedObj_5; }
	inline void set_contactedObj_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___contactedObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactedObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_BallonGround_6() { return static_cast<int32_t>(offsetof(SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C, ___BallonGround_6)); }
	inline bool get_BallonGround_6() const { return ___BallonGround_6; }
	inline bool* get_address_of_BallonGround_6() { return &___BallonGround_6; }
	inline void set_BallonGround_6(bool value)
	{
		___BallonGround_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_SteamTimer_8() { return static_cast<int32_t>(offsetof(SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C, ___SteamTimer_8)); }
	inline float get_SteamTimer_8() const { return ___SteamTimer_8; }
	inline float* get_address_of_SteamTimer_8() { return &___SteamTimer_8; }
	inline void set_SteamTimer_8(float value)
	{
		___SteamTimer_8 = value;
	}
};


// SteamedBehaviour
struct  SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SteamedBehaviour::timer
	float ___timer_4;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}
};


// Stick
struct  Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Turn_Move
struct  Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Turn_Move::TurnX
	float ___TurnX_4;
	// System.Single Turn_Move::TurnY
	float ___TurnY_5;
	// System.Single Turn_Move::TurnZ
	float ___TurnZ_6;
	// System.Single Turn_Move::MoveX
	float ___MoveX_7;
	// System.Single Turn_Move::MoveY
	float ___MoveY_8;
	// System.Single Turn_Move::MoveZ
	float ___MoveZ_9;
	// System.Boolean Turn_Move::World
	bool ___World_10;

public:
	inline static int32_t get_offset_of_TurnX_4() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___TurnX_4)); }
	inline float get_TurnX_4() const { return ___TurnX_4; }
	inline float* get_address_of_TurnX_4() { return &___TurnX_4; }
	inline void set_TurnX_4(float value)
	{
		___TurnX_4 = value;
	}

	inline static int32_t get_offset_of_TurnY_5() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___TurnY_5)); }
	inline float get_TurnY_5() const { return ___TurnY_5; }
	inline float* get_address_of_TurnY_5() { return &___TurnY_5; }
	inline void set_TurnY_5(float value)
	{
		___TurnY_5 = value;
	}

	inline static int32_t get_offset_of_TurnZ_6() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___TurnZ_6)); }
	inline float get_TurnZ_6() const { return ___TurnZ_6; }
	inline float* get_address_of_TurnZ_6() { return &___TurnZ_6; }
	inline void set_TurnZ_6(float value)
	{
		___TurnZ_6 = value;
	}

	inline static int32_t get_offset_of_MoveX_7() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___MoveX_7)); }
	inline float get_MoveX_7() const { return ___MoveX_7; }
	inline float* get_address_of_MoveX_7() { return &___MoveX_7; }
	inline void set_MoveX_7(float value)
	{
		___MoveX_7 = value;
	}

	inline static int32_t get_offset_of_MoveY_8() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___MoveY_8)); }
	inline float get_MoveY_8() const { return ___MoveY_8; }
	inline float* get_address_of_MoveY_8() { return &___MoveY_8; }
	inline void set_MoveY_8(float value)
	{
		___MoveY_8 = value;
	}

	inline static int32_t get_offset_of_MoveZ_9() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___MoveZ_9)); }
	inline float get_MoveZ_9() const { return ___MoveZ_9; }
	inline float* get_address_of_MoveZ_9() { return &___MoveZ_9; }
	inline void set_MoveZ_9(float value)
	{
		___MoveZ_9 = value;
	}

	inline static int32_t get_offset_of_World_10() { return static_cast<int32_t>(offsetof(Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C, ___World_10)); }
	inline bool get_World_10() const { return ___World_10; }
	inline bool* get_address_of_World_10() { return &___World_10; }
	inline void set_World_10(bool value)
	{
		___World_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIElementsController
struct  UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIElementsController::GameFailedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameFailedPanel_4;
	// UnityEngine.GameObject UIElementsController::GameSucceedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameSucceedPanel_5;
	// UnityEngine.UI.Button UIElementsController::NoThanksBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___NoThanksBtn_6;
	// UnityEngine.UI.Button UIElementsController::SkipBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___SkipBtn_7;
	// UnityEngine.UI.Text UIElementsController::PutDistanceTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PutDistanceTxt_8;
	// System.Single UIElementsController::putDistance
	float ___putDistance_9;
	// UnityEngine.Color[] UIElementsController::ColorList
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___ColorList_10;
	// System.Int32 UIElementsController::number
	int32_t ___number_11;

public:
	inline static int32_t get_offset_of_GameFailedPanel_4() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___GameFailedPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameFailedPanel_4() const { return ___GameFailedPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameFailedPanel_4() { return &___GameFailedPanel_4; }
	inline void set_GameFailedPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameFailedPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameFailedPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_GameSucceedPanel_5() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___GameSucceedPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameSucceedPanel_5() const { return ___GameSucceedPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameSucceedPanel_5() { return &___GameSucceedPanel_5; }
	inline void set_GameSucceedPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameSucceedPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameSucceedPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_NoThanksBtn_6() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___NoThanksBtn_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_NoThanksBtn_6() const { return ___NoThanksBtn_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_NoThanksBtn_6() { return &___NoThanksBtn_6; }
	inline void set_NoThanksBtn_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___NoThanksBtn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoThanksBtn_6), (void*)value);
	}

	inline static int32_t get_offset_of_SkipBtn_7() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___SkipBtn_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_SkipBtn_7() const { return ___SkipBtn_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_SkipBtn_7() { return &___SkipBtn_7; }
	inline void set_SkipBtn_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___SkipBtn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkipBtn_7), (void*)value);
	}

	inline static int32_t get_offset_of_PutDistanceTxt_8() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___PutDistanceTxt_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PutDistanceTxt_8() const { return ___PutDistanceTxt_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PutDistanceTxt_8() { return &___PutDistanceTxt_8; }
	inline void set_PutDistanceTxt_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PutDistanceTxt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PutDistanceTxt_8), (void*)value);
	}

	inline static int32_t get_offset_of_putDistance_9() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___putDistance_9)); }
	inline float get_putDistance_9() const { return ___putDistance_9; }
	inline float* get_address_of_putDistance_9() { return &___putDistance_9; }
	inline void set_putDistance_9(float value)
	{
		___putDistance_9 = value;
	}

	inline static int32_t get_offset_of_ColorList_10() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___ColorList_10)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_ColorList_10() const { return ___ColorList_10; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_ColorList_10() { return &___ColorList_10; }
	inline void set_ColorList_10(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___ColorList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorList_10), (void*)value);
	}

	inline static int32_t get_offset_of_number_11() { return static_cast<int32_t>(offsetof(UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79, ___number_11)); }
	inline int32_t get_number_11() const { return ___number_11; }
	inline int32_t* get_address_of_number_11() { return &___number_11; }
	inline void set_number_11(int32_t value)
	{
		___number_11 = value;
	}
};


// Waypoint
struct  Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Waypoint::accel
	float ___accel_4;
	// System.Single Waypoint::inertia
	float ___inertia_5;
	// System.Single Waypoint::speedLimit
	float ___speedLimit_6;
	// System.Single Waypoint::minSpeed
	float ___minSpeed_7;
	// System.Single Waypoint::stopTime
	float ___stopTime_8;
	// System.Single Waypoint::currentSpeed
	float ___currentSpeed_9;
	// System.Single Waypoint::functionState
	float ___functionState_10;
	// System.Boolean Waypoint::accelState
	bool ___accelState_11;
	// System.Boolean Waypoint::slowState
	bool ___slowState_12;
	// UnityEngine.Transform Waypoint::waypoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___waypoint_13;
	// System.Single Waypoint::rotationDamping
	float ___rotationDamping_14;
	// System.Boolean Waypoint::smoothRotation
	bool ___smoothRotation_15;
	// UnityEngine.Transform[] Waypoint::waypoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___waypoints_16;
	// System.Int32 Waypoint::WPindexPointer
	int32_t ___WPindexPointer_17;

public:
	inline static int32_t get_offset_of_accel_4() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___accel_4)); }
	inline float get_accel_4() const { return ___accel_4; }
	inline float* get_address_of_accel_4() { return &___accel_4; }
	inline void set_accel_4(float value)
	{
		___accel_4 = value;
	}

	inline static int32_t get_offset_of_inertia_5() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___inertia_5)); }
	inline float get_inertia_5() const { return ___inertia_5; }
	inline float* get_address_of_inertia_5() { return &___inertia_5; }
	inline void set_inertia_5(float value)
	{
		___inertia_5 = value;
	}

	inline static int32_t get_offset_of_speedLimit_6() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___speedLimit_6)); }
	inline float get_speedLimit_6() const { return ___speedLimit_6; }
	inline float* get_address_of_speedLimit_6() { return &___speedLimit_6; }
	inline void set_speedLimit_6(float value)
	{
		___speedLimit_6 = value;
	}

	inline static int32_t get_offset_of_minSpeed_7() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___minSpeed_7)); }
	inline float get_minSpeed_7() const { return ___minSpeed_7; }
	inline float* get_address_of_minSpeed_7() { return &___minSpeed_7; }
	inline void set_minSpeed_7(float value)
	{
		___minSpeed_7 = value;
	}

	inline static int32_t get_offset_of_stopTime_8() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___stopTime_8)); }
	inline float get_stopTime_8() const { return ___stopTime_8; }
	inline float* get_address_of_stopTime_8() { return &___stopTime_8; }
	inline void set_stopTime_8(float value)
	{
		___stopTime_8 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_9() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___currentSpeed_9)); }
	inline float get_currentSpeed_9() const { return ___currentSpeed_9; }
	inline float* get_address_of_currentSpeed_9() { return &___currentSpeed_9; }
	inline void set_currentSpeed_9(float value)
	{
		___currentSpeed_9 = value;
	}

	inline static int32_t get_offset_of_functionState_10() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___functionState_10)); }
	inline float get_functionState_10() const { return ___functionState_10; }
	inline float* get_address_of_functionState_10() { return &___functionState_10; }
	inline void set_functionState_10(float value)
	{
		___functionState_10 = value;
	}

	inline static int32_t get_offset_of_accelState_11() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___accelState_11)); }
	inline bool get_accelState_11() const { return ___accelState_11; }
	inline bool* get_address_of_accelState_11() { return &___accelState_11; }
	inline void set_accelState_11(bool value)
	{
		___accelState_11 = value;
	}

	inline static int32_t get_offset_of_slowState_12() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___slowState_12)); }
	inline bool get_slowState_12() const { return ___slowState_12; }
	inline bool* get_address_of_slowState_12() { return &___slowState_12; }
	inline void set_slowState_12(bool value)
	{
		___slowState_12 = value;
	}

	inline static int32_t get_offset_of_waypoint_13() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___waypoint_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_waypoint_13() const { return ___waypoint_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_waypoint_13() { return &___waypoint_13; }
	inline void set_waypoint_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___waypoint_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoint_13), (void*)value);
	}

	inline static int32_t get_offset_of_rotationDamping_14() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___rotationDamping_14)); }
	inline float get_rotationDamping_14() const { return ___rotationDamping_14; }
	inline float* get_address_of_rotationDamping_14() { return &___rotationDamping_14; }
	inline void set_rotationDamping_14(float value)
	{
		___rotationDamping_14 = value;
	}

	inline static int32_t get_offset_of_smoothRotation_15() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___smoothRotation_15)); }
	inline bool get_smoothRotation_15() const { return ___smoothRotation_15; }
	inline bool* get_address_of_smoothRotation_15() { return &___smoothRotation_15; }
	inline void set_smoothRotation_15(bool value)
	{
		___smoothRotation_15 = value;
	}

	inline static int32_t get_offset_of_waypoints_16() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___waypoints_16)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_waypoints_16() const { return ___waypoints_16; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_waypoints_16() { return &___waypoints_16; }
	inline void set_waypoints_16(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___waypoints_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_16), (void*)value);
	}

	inline static int32_t get_offset_of_WPindexPointer_17() { return static_cast<int32_t>(offsetof(Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11, ___WPindexPointer_17)); }
	inline int32_t get_WPindexPointer_17() const { return ___WPindexPointer_17; }
	inline int32_t* get_address_of_WPindexPointer_17() { return &___WPindexPointer_17; }
	inline void set_WPindexPointer_17(int32_t value)
	{
		___WPindexPointer_17 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

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

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

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

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
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
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Action`3<System.Single,System.Single,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_gshared (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Single,System.Single,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_gshared (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * __this, float ___arg10, float ___arg21, int32_t ___arg32, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_gshared (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Int32,System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B_gshared (Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`3<!!0,System.Int32,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC_gshared (RuntimeObject* ___source0, Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * ___selector1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::Max<System.ValueTuple`2<System.Int32,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);

// System.Void BallController::Subscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Subscribe_m3F4A96AD2EA4C29F65E2E2F3E97B970905E25673 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UIElementsController>()
inline UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * Object_FindObjectOfType_TisUIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79_m8FBC99DE03E94CBDC263CD99184DB66FFB808D8A (const RuntimeMethod* method)
{
	return ((  UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UIElementsController::set_PutDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_set_PutDistance_m1861FB783B13EA97594C0EBC8FECD4BAACD99B01 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Single,System.Single,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void BallController::Unsubscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Unsubscribe_mA6900A87E679B6C7F64224BEF6867C6FB56219B5 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void VarContainer::SetScore(System.Int32,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VarContainer_SetScore_m2351A9653B63371DB14CE1A76BE4BC8E33D656EB (int32_t ___index0, int32_t ___score1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___g2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GroundPiece>()
inline GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * GameObject_GetComponent_TisGroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0_m0370213B65830A957F5E0DC39EBCEDD9DB76DE5A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Int32 BallController::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BallController_GetScore_mDF52CE42939A1BFE7950C2EDC3103091C72DD0F5 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<SteamedBehaviour>()
inline SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * GameObject_AddComponent_TisSteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB_m35F6FA0DCE45DAC243878D95DA27B32725CB3618 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.UI.Slider::get_maxValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Slider::get_minValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_minValue_m7B5A89FDE9916A4A111BDB91648750E23C034B08_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Boolean CrossHairController::CheckValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossHairController_CheckValue_mEB5AD1ACFC2D40B663A02D423BCDEDF43D4CC9F0 (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, bool ___onMax0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, float, const RuntimeMethod*))Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared)(__this, ___obj0, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Globals::ResetGlobals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Globals_ResetGlobals_mF499F6B2BDB7848A8196CEABE3DB6DA1DDEF3B81 (const RuntimeMethod* method);
// System.Void VarContainer::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VarContainer_ResetScore_m0CF8C82D6C273817AF7D9E8811C7A5436FCEFD8B (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Scale_m54AA203304585B8BB6ECA4936A90F408BD880916_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Action`3<System.Single,System.Single,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94 (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * __this, float ___arg10, float ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *, float, float, int32_t, const RuntimeMethod*))Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9952C32131269D7174CF7749785863389993C865 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ScoreTxtAssigner::Sub()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_Sub_m61BFB22718695D741729FCBA45BFB4F9BBF408C8 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOColor_mD7B708C07D203365A38EF934AFACD21C24B1C165 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue1, float ___duration2, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662 (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(!!0,DG.Tweening.TweenCallback)
inline TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05 (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared)(___t0, ___action1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void ScoreTxtAssigner::UnSub()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_UnSub_m5181DB4B6DBD6F2D3F4E540B7FD25BB46448561F (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void ScoreTxtAssigner::ScoreChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, int32_t ___i0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m8917660179EA847BFFCC28D4DED115237388DAA5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BallController>()
inline BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3 (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
inline void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *, float, float, const RuntimeMethod*))Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean ShootController::CheckVal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShootController_CheckVal_mCD113FC9B07F203C9C03F40BBB91E94647F7496F (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, bool ___val0, const RuntimeMethod* method);
// System.Void ShootController::InputController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_InputController_m3136B3EAAF28D817E2CB7BC972CA33FDE78A2129 (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BallController>()
inline BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * Component_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m77737714A4BCE62011E611A8A1AEB5B4555C8D5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void BallController::SetState(BallStates)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BallController_SetState_m0BAB0E71999149B77093C44489F17B69FC22AFA8_inline (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void SteamedBehaviour::BallDragger(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamedBehaviour_BallDragger_mAB81A746679D544E79C6DC3E7EC270877017FBCC (SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___contact0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m22737F202DE67AAAAC408ADE91BD44F5BAF3DD6B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Void UIElementsController::TextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_TextColor_mD305D1D596B0B816D0895B3F303A0CA0381EF487 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newcolor0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Extension::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extension_LoadNextLevel_m6AC11CE66B1F23A68333E3C09DF4F14EF97353E0 (const RuntimeMethod* method);
// System.Void Extension::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extension_Restart_m96E3ED1EBDD5935A1CB138ADE81BC608C4CC03B1 (const RuntimeMethod* method);
// System.Void UIElementsController::GameEnder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_GameEnder_m64E9F83ACFA07BAD87413226F103AFF4410B6FA8 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void System.Func`3<System.Int32,System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B (Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32,System.ValueTuple`2<System.Int32,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`3<!!0,System.Int32,!!1>)
inline RuntimeObject* Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC (RuntimeObject* ___source0, Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 *, const RuntimeMethod*))Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC_gshared)(___source0, ___selector1, method);
}
// !!0 System.Linq.Enumerable::Max<System.ValueTuple`2<System.Int32,System.Int32>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB_gshared)(___source0, method);
}
// System.Void Waypoint::Accell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_Accell_m66977456670F92B76BC552A38BA52549C1EC6C7C (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Waypoint::Slow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Waypoint_Slow_m07B26FF31598560372E9F303E126BBDA6AD9BB27 (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void Waypoint/<Slow>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlowU3Ed__19__ctor_mCD5BD0CE35F03A68DAEBF7055F27A9653042F460 (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void VarContainer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0DDD623DF315593A2FD6071FC8D038AB876BB41 (U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18 (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E *, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared)(__this, ___item10, ___item21, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void BallController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnEnable_m9B94586CD799CE2240E1CB01BA4EB06E19DD788A (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79_m8FBC99DE03E94CBDC263CD99184DB66FFB808D8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1ACE21E475674D1DADF43477E52E826884CF2D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Subscribe();
		BallController_Subscribe_m3F4A96AD2EA4C29F65E2E2F3E97B970905E25673(__this, /*hidden argument*/NULL);
		// if (index == 0)
		int32_t L_0 = __this->get_index_13();
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// gameObject.tag = "PlayerBall";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_1, _stringLiteralC1ACE21E475674D1DADF43477E52E826884CF2D9, /*hidden argument*/NULL);
		// FindObjectOfType<UIElementsController>().PutDistance = Vector3.Distance(Put.Instance.transform.position,transform.position);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * L_2;
		L_2 = Object_FindObjectOfType_TisUIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79_m8FBC99DE03E94CBDC263CD99184DB66FFB808D8A(/*hidden argument*/Object_FindObjectOfType_TisUIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79_m8FBC99DE03E94CBDC263CD99184DB66FFB808D8A_RuntimeMethod_var);
		Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * L_3 = ((Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields*)il2cpp_codegen_static_fields_for(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8;
		L_8 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		UIElementsController_set_PutDistance_m1861FB783B13EA97594C0EBC8FECD4BAACD99B01(L_2, L_8, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void BallController::SetState(BallStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_SetState_m0BAB0E71999149B77093C44489F17B69FC22AFA8 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// State = state;
		int32_t L_0 = ___state0;
		__this->set_State_15(L_0);
		// }
		return;
	}
}
// System.Void BallController::OnGameEnded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, int32_t ____number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallController::Subscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Subscribe_m3F4A96AD2EA4C29F65E2E2F3E97B970905E25673 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index == 0)
		int32_t L_0 = __this->get_index_13();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerController.ThrowBall += BallStart;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_2 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_2, __this, (intptr_t)((intptr_t)BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_3;
		L_3 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_2, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_3, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		goto IL_004a;
	}

IL_002a:
	{
		// else OpponentController.BallThrown += BallStart;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_4 = ((OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields*)il2cpp_codegen_static_fields_for(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var))->get_BallThrown_7();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_5 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_5, __this, (intptr_t)((intptr_t)BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_6;
		L_6 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_4, L_5, /*hidden argument*/NULL);
		((OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields*)il2cpp_codegen_static_fields_for(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var))->set_BallThrown_7(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_6, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
	}

IL_004a:
	{
		// VarContainer.GameEnded += OnGameEnded;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_GameEnded_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_8, __this, (intptr_t)((intptr_t)BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_9;
		L_9 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_7, L_8, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_GameEnded_1(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_9, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BallController::BallStart(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, float ___a0, float ___b1, int32_t ___x2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (x == index)
		int32_t L_0 = ___x2;
		int32_t L_1 = __this->get_index_13();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_00a1;
		}
	}
	{
		// rb.isKinematic = false;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_rb_4();
		NullCheck(L_2);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_2, (bool)0, /*hidden argument*/NULL);
		// CrossX = a;
		float L_3 = ___a0;
		__this->set_CrossX_5(L_3);
		// ShootPower = b * 5;
		float L_4 = ___b1;
		__this->set_ShootPower_6(((float)il2cpp_codegen_multiply((float)L_4, (float)(5.0f))));
		// OnShot = true;
		__this->set_OnShot_7((bool)1);
		// Vector3 offset = transform.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// offset.x += CrossX;
		float* L_7 = (&V_0)->get_address_of_x_2();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10 = __this->get_CrossX_5();
		*((float*)L_8) = (float)((float)il2cpp_codegen_add((float)L_9, (float)L_10));
		// offset.z += ShootPower * 5;
		float* L_11 = (&V_0)->get_address_of_z_4();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = __this->get_ShootPower_6();
		*((float*)L_12) = (float)((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)(5.0f)))));
		// offset.y += ShootPower;
		float* L_15 = (&V_0)->get_address_of_y_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->get_ShootPower_6();
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_18));
		// rb.velocity = offset * 0.9f;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_19 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, (0.899999976f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_19, L_21, /*hidden argument*/NULL);
		// rb.AddForce(offset);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_22 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		NullCheck(L_22);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_22, L_23, /*hidden argument*/NULL);
		// State = BallStates.Shot;
		__this->set_State_15(3);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void BallController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnDestroy_m442DC3B950C88FCE747A8A6D7B77135A799F17EA (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Unsubscribe();
		BallController_Unsubscribe_mA6900A87E679B6C7F64224BEF6867C6FB56219B5(__this, /*hidden argument*/NULL);
		// VarContainer.GameEnded -= OnGameEnded;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_GameEnded_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, __this, (intptr_t)((intptr_t)BallController_OnGameEnded_m490469BC95B1145047AC016A3AABCDA4E4EFE41C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_GameEnded_1(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_2, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// VarContainer.SetScore(index,0);
		int32_t L_3 = __this->get_index_13();
		VarContainer_SetScore_m2351A9653B63371DB14CE1A76BE4BC8E33D656EB(L_3, 0, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallController::Unsubscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Unsubscribe_mA6900A87E679B6C7F64224BEF6867C6FB56219B5 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index == 0)
		int32_t L_0 = __this->get_index_13();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// PlayerController.ThrowBall -= BallStart;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_2 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_2, __this, (intptr_t)((intptr_t)BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_3, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		return;
	}

IL_0029:
	{
		// else OpponentController.BallThrown -= BallStart;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_4 = ((OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields*)il2cpp_codegen_static_fields_for(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var))->get_BallThrown_7();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_5 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_5, __this, (intptr_t)((intptr_t)BallController_BallStart_mF8BEAC535D91D6407C0CED6BEF5D0E5F40DE64A6_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_6;
		L_6 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_4, L_5, /*hidden argument*/NULL);
		((OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields*)il2cpp_codegen_static_fields_for(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var))->set_BallThrown_7(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_6, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BallController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Start_m14D1FD23A6E7A6B8F076435B8D14E0393923FC48 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// rb.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rb_4();
		NullCheck(L_1);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_1, (bool)1, /*hidden argument*/NULL);
		// if (GetComponentInChildren<ParticleSystem>())
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2;
		L_2 = Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// GetComponentInChildren<ParticleSystem>().Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4;
		L_4 = Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		NullCheck(L_4);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Int32 BallController::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BallController_GetScore_mDF52CE42939A1BFE7950C2EDC3103091C72DD0F5 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0_m0370213B65830A957F5E0DC39EBCEDD9DB76DE5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ContactedObj.GetComponent<GroundPiece>().Score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ContactedObj_9();
		NullCheck(L_0);
		GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * L_1;
		L_1 = GameObject_GetComponent_TisGroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0_m0370213B65830A957F5E0DC39EBCEDD9DB76DE5A(L_0, /*hidden argument*/GameObject_GetComponent_TisGroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0_m0370213B65830A957F5E0DC39EBCEDD9DB76DE5A_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Score_4();
		return L_2;
	}
}
// System.Void BallController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Update_mFE8FA7014A5E151AABAD9EE6B007965FC420FC41 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB_m35F6FA0DCE45DAC243878D95DA27B32725CB3618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B13_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B12_0 = NULL;
	{
		// if (timer < 0)
		float L_0 = __this->get_timer_8();
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// if (!rb.isKinematic)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rb_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0068;
		}
	}
	{
		// rb.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_rb_4();
		NullCheck(L_3);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_3, (bool)1, /*hidden argument*/NULL);
		// Unsubscribe();
		BallController_Unsubscribe_mA6900A87E679B6C7F64224BEF6867C6FB56219B5(__this, /*hidden argument*/NULL);
		// if (index == 0)
		int32_t L_4 = __this->get_index_13();
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// LastScore = GetScore();
		int32_t L_6;
		L_6 = BallController_GetScore_mDF52CE42939A1BFE7950C2EDC3103091C72DD0F5(__this, /*hidden argument*/NULL);
		__this->set_LastScore_12(L_6);
		// VarContainer.SetScore(index, LastScore);
		int32_t L_7 = __this->get_index_13();
		int32_t L_8 = __this->get_LastScore_12();
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		VarContainer_SetScore_m2351A9653B63371DB14CE1A76BE4BC8E33D656EB(L_7, L_8, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// timer = 2.3f;
		__this->set_timer_8((2.29999995f));
	}

IL_0068:
	{
		// if (OnShot)
		bool L_9 = __this->get_OnShot_7();
		if (!L_9)
		{
			goto IL_016e;
		}
	}
	{
		// if (transform.position.y < Put.Instance.transform.position.y - 5)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * L_13 = ((Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields*)il2cpp_codegen_static_fields_for(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_subtract((float)L_16, (float)(5.0f)))))))
		{
			goto IL_00aa;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// if (timer > 0)
		float L_18 = __this->get_timer_8();
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_016e;
		}
	}
	{
		// if (ContactedObj != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_ContactedObj_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_010d;
		}
	}
	{
		// if (!InfoSent)
		bool L_21 = __this->get_InfoSent_10();
		if (L_21)
		{
			goto IL_00fa;
		}
	}
	{
		// InfoSend?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = ((BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields*)il2cpp_codegen_static_fields_for(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var))->get_InfoSend_11();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_23 = L_22;
		G_B12_0 = L_23;
		if (L_23)
		{
			G_B13_0 = L_23;
			goto IL_00db;
		}
	}
	{
		goto IL_00e0;
	}

IL_00db:
	{
		NullCheck(G_B13_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B13_0, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		// InfoSent = true;
		__this->set_InfoSent_10((bool)1);
		// if (index != 0) DontDestroyOnLoad(gameObject);
		int32_t L_24 = __this->get_index_13();
		if (!L_24)
		{
			goto IL_00fa;
		}
	}
	{
		// if (index != 0) DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_25, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		// timer -= Time.deltaTime;
		float L_26 = __this->get_timer_8();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_8(((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)));
		// }
		return;
	}

IL_010d:
	{
		// else if (State == BallStates.Shot)
		int32_t L_28 = __this->get_State_15();
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0152;
		}
	}
	{
		// rb.AddForce(-transform.up * 1.5f);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = __this->get_rb_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_32, (1.5f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_29, L_33, /*hidden argument*/NULL);
		// transform.Rotate(transform.right);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_34, L_36, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0152:
	{
		// else if (State == BallStates.Steamed)
		int32_t L_37 = __this->get_State_15();
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_016e;
		}
	}
	{
		// gameObject.AddComponent<SteamedBehaviour>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * L_39;
		L_39 = GameObject_AddComponent_TisSteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB_m35F6FA0DCE45DAC243878D95DA27B32725CB3618(L_38, /*hidden argument*/GameObject_AddComponent_TisSteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB_m35F6FA0DCE45DAC243878D95DA27B32725CB3618_RuntimeMethod_var);
		// State = BallStates.Idle;
		__this->set_State_15(1);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void BallController::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnCollisionStay_m858DD19DB547D9A80E649261E0348D8231429F46 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Ground")
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// if(collision.gameObject == Put.Instance)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_4, /*hidden argument*/NULL);
		Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * L_6 = ((Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields*)il2cpp_codegen_static_fields_for(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		// ContactedObj = collision.gameObject;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_8, /*hidden argument*/NULL);
		__this->set_ContactedObj_9(L_9);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void BallController::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnCollisionExit_m6B68A2BC3AD7998D7C98D56C06699D6144D1C84A (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	{
		// ContactedObj = null;
		__this->set_ContactedObj_9((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void BallController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController__ctor_m2D731C16454B72F7E66EBDA53C80A910BADC6CC6 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	{
		// float timer = 2.3f;
		__this->set_timer_8((2.29999995f));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollow::Shot(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, float ___a0, float ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	{
		// shot = true;
		__this->set_shot_7((bool)1);
		// }
		return;
	}
}
// System.Void CameraFollow::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_OnEnable_mF9436EDCEDACAD46E8758A03B3216F32082FDADC (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.ThrowBall += Shot;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_1, __this, (intptr_t)((intptr_t)CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_2, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CameraFollow::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_OnDisable_m6551234AF12D487EF3C21F65265177041B015A7E (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.ThrowBall -= Shot;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_1, __this, (intptr_t)((intptr_t)CameraFollow_Shot_m590C271D4BA143D210A47881134D1D8914CBD500_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_2, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mC13DAB135378AADB3E72275F75CDEAF53343810D (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m140D0956A03E1CD6C6DF9B74330BDA2A0813248F (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ball&&Ball.GetComponent<MeshRenderer>().enabled)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Ball_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Ball_4();
		NullCheck(L_2);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0097;
		}
	}
	{
		// oldoffset = Ball.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Ball_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_oldoffset_6(L_7);
		// oldoffset.x += offset.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_oldoffset_6();
		float* L_9 = L_8->get_address_of_x_2();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_offset_5();
		float L_13 = L_12->get_x_2();
		*((float*)L_10) = (float)((float)il2cpp_codegen_add((float)L_11, (float)L_13));
		// oldoffset.z += offset.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_oldoffset_6();
		float* L_15 = L_14->get_address_of_z_4();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_offset_5();
		float L_19 = L_18->get_z_4();
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_19));
		// oldoffset.y += offset.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_oldoffset_6();
		float* L_21 = L_20->get_address_of_y_3();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_offset_5();
		float L_25 = L_24->get_y_3();
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)L_25));
		// transform.position = oldoffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_oldoffset_6();
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
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
// System.Void CrossHairController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossHairController_Start_m1BA9C2F479C5CC159B188AC094769443E2703FB9 (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossBar = GetComponent<Slider>();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0;
		L_0 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(__this, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		__this->set_CrossBar_7(L_0);
		// }
		return;
	}
}
// System.Boolean CrossHairController::CheckValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossHairController_CheckValue_mEB5AD1ACFC2D40B663A02D423BCDEDF43D4CC9F0 (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, bool ___onMax0, const RuntimeMethod* method)
{
	{
		// if (CrossBar.value == CrossBar.maxValue) onMax = true;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_CrossBar_7();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_CrossBar_7();
		NullCheck(L_2);
		float L_3;
		L_3 = Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline(L_2, /*hidden argument*/NULL);
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		// if (CrossBar.value == CrossBar.maxValue) onMax = true;
		___onMax0 = (bool)1;
		goto IL_0038;
	}

IL_001d:
	{
		// else if (CrossBar.value == CrossBar.minValue) onMax = false;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_CrossBar_7();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_CrossBar_7();
		NullCheck(L_6);
		float L_7;
		L_7 = Slider_get_minValue_m7B5A89FDE9916A4A111BDB91648750E23C034B08_inline(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		// else if (CrossBar.value == CrossBar.minValue) onMax = false;
		___onMax0 = (bool)0;
	}

IL_0038:
	{
		// return onMax;
		bool L_8 = ___onMax0;
		return L_8;
	}
}
// System.Void CrossHairController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossHairController_Update_m8CF2505270343D4E1A0A366E9C5001EFCF87A70E (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD0E13BBD9CE119AD6794A93E6EFF3C8E74522F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossHairMove)
		bool L_0 = __this->get_CrossHairMove_5();
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		// OnMax = CheckValue(OnMax);
		bool L_1 = __this->get_OnMax_6();
		bool L_2;
		L_2 = CrossHairController_CheckValue_mEB5AD1ACFC2D40B663A02D423BCDEDF43D4CC9F0(__this, L_1, /*hidden argument*/NULL);
		__this->set_OnMax_6(L_2);
		// if (OnMax)
		bool L_3 = __this->get_OnMax_6();
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// CrossBar.value -= Time.deltaTime * 10;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_CrossBar_7();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(10.0f))))));
		// }
		goto IL_005e;
	}

IL_0041:
	{
		// else CrossBar.value += Time.deltaTime * 10;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_CrossBar_7();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(10.0f))))));
	}

IL_005e:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// CrossHairMove = false;
		__this->set_CrossHairMove_5((bool)0);
		// Invoke("CrossHairActivate", 0.3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral9BD0E13BBD9CE119AD6794A93E6EFF3C8E74522F, (0.300000012f), /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void CrossHairController::CrossHairActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossHairController_CrossHairActivate_mE3C3AEBF718B9B3544D6A1D0F7904546B56CEE1C (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossHairClicked(CrossBar.value);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_0 = ((CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields*)il2cpp_codegen_static_fields_for(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var))->get_CrossHairClicked_4();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_CrossBar_7();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E(L_0, L_2, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CrossHairController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossHairController__ctor_m1E99CD7C1A7539D1E6FEF40968AD6FFB1C0F6870 (CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E * __this, const RuntimeMethod* method)
{
	{
		// bool CrossHairMove = true;
		__this->set_CrossHairMove_5((bool)1);
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
// System.Void EndBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndBall_Start_m497AF7C9822BD7D0D3BDBE44DDAC210CA7914E81 (EndBall_tEF961DC05482F573CC63B66399B8DD23BFF8A501 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndBall__ctor_m0413E97DEB8E89FB53BACD1A2DD0C9CEB142313A (EndBall_tEF961DC05482F573CC63B66399B8DD23BFF8A501 * __this, const RuntimeMethod* method)
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
// System.Void Extension::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extension_Restart_m96E3ED1EBDD5935A1CB138ADE81BC608C4CC03B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Extension::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extension_LoadNextLevel_m6AC11CE66B1F23A68333E3C09DF4F14EF97353E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// Globals.ResetGlobals();
		IL2CPP_RUNTIME_CLASS_INIT(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		Globals_ResetGlobals_mF499F6B2BDB7848A8196CEABE3DB6DA1DDEF3B81(/*hidden argument*/NULL);
		// VarContainer.ResetScore();
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		VarContainer_ResetScore_m0CF8C82D6C273817AF7D9E8811C7A5436FCEFD8B(/*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		goto IL_0023;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
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
// System.Void Globals::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Globals__cctor_m183069F1F869D8EB6E8799C7B5F71924D80DA610 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] ShotAmount = new int[4];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		((Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var))->set_ShotAmount_0(L_0);
		// ResetGlobals();
		Globals_ResetGlobals_mF499F6B2BDB7848A8196CEABE3DB6DA1DDEF3B81(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Globals::ResetGlobals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Globals_ResetGlobals_mF499F6B2BDB7848A8196CEABE3DB6DA1DDEF3B81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ShotAmount.Length; i++)
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		// ShotAmount[i] = 2;
		IL2CPP_RUNTIME_CLASS_INIT(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var))->get_ShotAmount_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)2);
		// for (int i = 0; i < ShotAmount.Length; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0010:
	{
		// for (int i = 0; i < ShotAmount.Length; i++)
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var))->get_ShotAmount_0();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0004;
		}
	}
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
// System.Void GroundPiece::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPiece_Start_mE14A882B03E250E466212189115527BBFD71EF0B (GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// GetComponent<MeshRenderer>().material.color = colorList[transform.GetSiblingIndex()];
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = __this->get_colorList_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_1, L_6, /*hidden argument*/NULL);
		// }
		goto IL_002b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		// if (GetComponentInChildren<TextMesh>())
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_7;
		L_7 = Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F(__this, /*hidden argument*/Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// GetComponentInChildren<TextMesh>().text = "X" + Score.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_9;
		L_9 = Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F(__this, /*hidden argument*/Component_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m2D77FB6767D154CF6F2A02BA243EB063A54DF17F_RuntimeMethod_var);
		int32_t* L_10 = __this->get_address_of_Score_4();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void GroundPiece::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPiece_Update_m9FFE224B6923F930FE25E43CD7450CBA2849C3A5 (GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GroundPiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPiece__ctor_m650237A0C2E7F8A38A5CDC78EEE2ECF58C787B23 (GroundPiece_t05BE74242622D3211AC96C606EC70974BF6CA5A0 * __this, const RuntimeMethod* method)
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m699B23D66C4F21B566C48A524BC40A828F5E3541 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// targetDirection = transform.localRotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_targetDirection_10(L_3);
		// if (characterBody)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_characterBody_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// targetCharacterDirection = characterBody.transform.localRotation.eulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_characterBody_12();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		__this->set_targetCharacterDirection_11(L_10);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m3D49361C94E0433BB35499708EE783B4543D83D5 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Cursor.lockState = lockCursor;
		int32_t L_0 = __this->get_lockCursor_7();
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(L_0, /*hidden argument*/NULL);
		// var targetOrientation = Quaternion.Euler (targetDirection);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_targetDirection_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var targetCharacterOrientation = Quaternion.Euler (targetCharacterDirection);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_targetCharacterDirection_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var mouseDelta = new Vector2 (Input.GetAxisRaw ("Mouse X"), Input.GetAxisRaw ("Mouse Y"));
		float L_7;
		L_7 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_8;
		L_8 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_7, L_8, /*hidden argument*/NULL);
		// mouseDelta = Vector2.Scale (mouseDelta, new Vector2 (sensitivity.x * smoothing.x, sensitivity.y * smoothing.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_sensitivity_8();
		float L_11 = L_10->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_smoothing_9();
		float L_13 = L_12->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_sensitivity_8();
		float L_15 = L_14->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_smoothing_9();
		float L_17 = L_16->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_Scale_m54AA203304585B8BB6ECA4936A90F408BD880916_inline(L_9, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// _smoothMouse.x = Mathf.Lerp (_smoothMouse.x, mouseDelta.x, 1f / smoothing.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of__smoothMouse_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of__smoothMouse_5();
		float L_22 = L_21->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_2;
		float L_24 = L_23.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_smoothing_9();
		float L_26 = L_25->get_x_0();
		float L_27;
		L_27 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_22, L_24, ((float)((float)(1.0f)/(float)L_26)), /*hidden argument*/NULL);
		L_20->set_x_0(L_27);
		// _smoothMouse.y = Mathf.Lerp (_smoothMouse.y, mouseDelta.y, 1f / smoothing.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of__smoothMouse_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of__smoothMouse_5();
		float L_30 = L_29->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_2;
		float L_32 = L_31.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_smoothing_9();
		float L_34 = L_33->get_y_1();
		float L_35;
		L_35 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_30, L_32, ((float)((float)(1.0f)/(float)L_34)), /*hidden argument*/NULL);
		L_28->set_y_1(L_35);
		// _mouseAbsolute += _smoothMouse;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = __this->get__mouseAbsolute_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = __this->get__smoothMouse_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_36, L_37, /*hidden argument*/NULL);
		__this->set__mouseAbsolute_4(L_38);
		// if (clampInDegrees.x < 360)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_39 = __this->get_address_of_clampInDegrees_6();
		float L_40 = L_39->get_x_0();
		if ((!(((float)L_40) < ((float)(360.0f)))))
		{
			goto IL_014d;
		}
	}
	{
		// _mouseAbsolute.x = Mathf.Clamp (_mouseAbsolute.x, -clampInDegrees.x * 0.5f, clampInDegrees.x * 0.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_41 = __this->get_address_of__mouseAbsolute_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of__mouseAbsolute_4();
		float L_43 = L_42->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_clampInDegrees_6();
		float L_45 = L_44->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = __this->get_address_of_clampInDegrees_6();
		float L_47 = L_46->get_x_0();
		float L_48;
		L_48 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_43, ((float)il2cpp_codegen_multiply((float)((-L_45)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_47, (float)(0.5f))), /*hidden argument*/NULL);
		L_41->set_x_0(L_48);
	}

IL_014d:
	{
		// var xRotation = Quaternion.AngleAxis (-_mouseAbsolute.y, targetOrientation * Vector3.right);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = __this->get_address_of__mouseAbsolute_4();
		float L_50 = L_49->get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_51, L_52, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((-L_50)), L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		// transform.localRotation = xRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56 = V_3;
		NullCheck(L_55);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_55, L_56, /*hidden argument*/NULL);
		// if (clampInDegrees.y < 360)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_57 = __this->get_address_of_clampInDegrees_6();
		float L_58 = L_57->get_y_1();
		if ((!(((float)L_58) < ((float)(360.0f)))))
		{
			goto IL_01c6;
		}
	}
	{
		// _mouseAbsolute.y = Mathf.Clamp (_mouseAbsolute.y, -clampInDegrees.y * 0.5f, clampInDegrees.y * 0.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_59 = __this->get_address_of__mouseAbsolute_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_60 = __this->get_address_of__mouseAbsolute_4();
		float L_61 = L_60->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_62 = __this->get_address_of_clampInDegrees_6();
		float L_63 = L_62->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_64 = __this->get_address_of_clampInDegrees_6();
		float L_65 = L_64->get_y_1();
		float L_66;
		L_66 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_61, ((float)il2cpp_codegen_multiply((float)((-L_63)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)L_65, (float)(0.5f))), /*hidden argument*/NULL);
		L_59->set_y_1(L_66);
	}

IL_01c6:
	{
		// transform.localRotation *= targetOrientation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = L_67;
		NullCheck(L_68);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69;
		L_69 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_68, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_68, L_71, /*hidden argument*/NULL);
		// if (characterBody) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_characterBody_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_023b;
		}
	}
	{
		// var yRotation = Quaternion.AngleAxis (_mouseAbsolute.x, characterBody.transform.up);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_74 = __this->get_address_of__mouseAbsolute_4();
		float L_75 = L_74->get_x_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_characterBody_12();
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_77, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_79;
		L_79 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_75, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		// characterBody.transform.localRotation = yRotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = __this->get_characterBody_12();
		NullCheck(L_80);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_80, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82 = V_4;
		NullCheck(L_81);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_81, L_82, /*hidden argument*/NULL);
		// characterBody.transform.localRotation *= targetCharacterOrientation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_characterBody_12();
		NullCheck(L_83);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_83, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85 = L_84;
		NullCheck(L_85);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_86;
		L_86 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_85, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_88;
		L_88 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_86, L_87, /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_85, L_88, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_023b:
	{
		// var yRotation = Quaternion.AngleAxis (_mouseAbsolute.x, transform.InverseTransformDirection (Vector3.up));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_89 = __this->get_address_of__mouseAbsolute_4();
		float L_90 = L_89->get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_91, L_92, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_94;
		L_94 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_90, L_93, /*hidden argument*/NULL);
		V_5 = L_94;
		// transform.localRotation *= yRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96 = L_95;
		NullCheck(L_96);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_97;
		L_97 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_96, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_98 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_99;
		L_99 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_97, L_98, /*hidden argument*/NULL);
		NullCheck(L_96);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_96, L_99, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseLook::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_FixedUpdate_m014C4B701B8F521CF284DA7871FF1CF0A8F6D2FD (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey (rightKey)) {
		int32_t L_0 = __this->get_rightKey_19();
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// speedX += acceleration * Time.deltaTime;
		float L_2 = __this->get_speedX_20();
		float L_3 = __this->get_acceleration_13();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_speedX_20(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		// }
		goto IL_004e;
	}

IL_0028:
	{
		// else if (Input.GetKey (leftKey)) {
		int32_t L_5 = __this->get_leftKey_17();
		bool L_6;
		L_6 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// speedX -= acceleration * Time.deltaTime;
		float L_7 = __this->get_speedX_20();
		float L_8 = __this->get_acceleration_13();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_speedX_20(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
	}

IL_004e:
	{
		// if (Input.GetKey (backKey)) {
		int32_t L_10 = __this->get_backKey_18();
		bool L_11;
		L_11 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		// speedZ -= acceleration * Time.deltaTime;
		float L_12 = __this->get_speedZ_21();
		float L_13 = __this->get_acceleration_13();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_speedZ_21(((float)il2cpp_codegen_subtract((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)))));
		// } else if (Input.GetKey (fwdKey)) {
		goto IL_009c;
	}

IL_0076:
	{
		// } else if (Input.GetKey (fwdKey)) {
		int32_t L_15 = __this->get_fwdKey_16();
		bool L_16;
		L_16 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// speedZ += acceleration * Time.deltaTime;
		float L_17 = __this->get_speedZ_21();
		float L_18 = __this->get_acceleration_13();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_speedZ_21(((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
	}

IL_009c:
	{
		// speedX = Mathf.Lerp( speedX,0,dampingSpeed * Time.deltaTime);
		float L_20 = __this->get_speedX_20();
		float L_21 = __this->get_dampingSpeed_15();
		float L_22;
		L_22 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_23;
		L_23 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, (0.0f), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		__this->set_speedX_20(L_23);
		// speedZ = Mathf.Lerp( speedZ,0,dampingSpeed * Time.deltaTime);
		float L_24 = __this->get_speedZ_21();
		float L_25 = __this->get_dampingSpeed_15();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_27;
		L_27 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_24, (0.0f), ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), /*hidden argument*/NULL);
		__this->set_speedZ_21(L_27);
		// speedX = Mathf.Clamp( speedX,-maxSpeed*Time.deltaTime, maxSpeed*Time.deltaTime);
		float L_28 = __this->get_speedX_20();
		float L_29 = __this->get_maxSpeed_14();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_31 = __this->get_maxSpeed_14();
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_33;
		L_33 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_28, ((float)il2cpp_codegen_multiply((float)((-L_29)), (float)L_30)), ((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)), /*hidden argument*/NULL);
		__this->set_speedX_20(L_33);
		// speedZ = Mathf.Clamp( speedZ,-maxSpeed*Time.deltaTime, maxSpeed*Time.deltaTime);
		float L_34 = __this->get_speedZ_21();
		float L_35 = __this->get_maxSpeed_14();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_37 = __this->get_maxSpeed_14();
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_39;
		L_39 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_34, ((float)il2cpp_codegen_multiply((float)((-L_35)), (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		__this->set_speedZ_21(L_39);
		// transform.position = transform.TransformPoint( new Vector3( speedX,0,speedZ) );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_42 = __this->get_speedX_20();
		float L_43 = __this->get_speedZ_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), L_42, (0.0f), L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_41, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mD12D8075DDEA2085341B59FF8BA9FB353613200B (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector2
		//     clampInDegrees = new Vector2 (360, 180);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (360.0f), (180.0f), /*hidden argument*/NULL);
		__this->set_clampInDegrees_6(L_0);
		// public Vector2 sensitivity = new Vector2 (2, 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->set_sensitivity_8(L_1);
		// public Vector2 smoothing = new Vector2 (3, 3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (3.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_smoothing_9(L_2);
		// public float acceleration = 1.0f;
		__this->set_acceleration_13((1.0f));
		// public float maxSpeed = 5;
		__this->set_maxSpeed_14((5.0f));
		// public float dampingSpeed = 0.2f;
		__this->set_dampingSpeed_15((0.200000003f));
		// public KeyCode fwdKey = KeyCode.W;
		__this->set_fwdKey_16(((int32_t)119));
		// public KeyCode leftKey = KeyCode.A;
		__this->set_leftKey_17(((int32_t)97));
		// public KeyCode backKey = KeyCode.S;
		__this->set_backKey_18(((int32_t)115));
		// public KeyCode rightKey = KeyCode.D;
		__this->set_rightKey_19(((int32_t)100));
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
// System.Void OpponentController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController_Start_m96353F2F1EEC8DFC639206B8432B55D29010CB66 (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer = UnityEngine.Random.Range(timerval[0],timerval[1]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_timerval_5();
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get_timerval_5();
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_2, L_5, /*hidden argument*/NULL);
		__this->set_timer_4(L_6);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7;
		L_7 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_8(L_7);
		// }
		return;
	}
}
// System.Void OpponentController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController_Awake_mB268EB469D438E54DC77FC25FF2EFD5001877E4D (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OpponentController::BallShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController_BallShoot_m55763169F79608163C8EC97F828ACBC594B09096 (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A5C4AE238E60F01BA4055F3B225BDE738B07CD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BallThrown(UnityEngine.Random.Range(Cross[0], Cross[1]), UnityEngine.Random.Range(ShootPower[0], ShootPower[1]), index);
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_0 = ((OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_StaticFields*)il2cpp_codegen_static_fields_for(OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762_il2cpp_TypeInfo_var))->get_BallThrown_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_Cross_10();
		NullCheck(L_1);
		int32_t L_2 = 0;
		float L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_Cross_10();
		NullCheck(L_4);
		int32_t L_5 = 1;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_3, L_6, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_ShootPower_11();
		NullCheck(L_8);
		int32_t L_9 = 0;
		float L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_ShootPower_11();
		NullCheck(L_11);
		int32_t L_12 = 1;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_10, L_13, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_index_6();
		NullCheck(L_0);
		Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94(L_0, L_7, L_14, L_15, /*hidden argument*/Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_RuntimeMethod_var);
		// timer = UnityEngine.Random.Range(timerval[0],timerval[1]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_timerval_5();
		NullCheck(L_16);
		int32_t L_17 = 0;
		float L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = __this->get_timerval_5();
		NullCheck(L_19);
		int32_t L_20 = 1;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22;
		L_22 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_18, L_21, /*hidden argument*/NULL);
		__this->set_timer_4(L_22);
		// Invoke("StopAnimator", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral4A5C4AE238E60F01BA4055F3B225BDE738B07CD8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpponentController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController_Update_m2458B4D937A34D3B9BE5F6A1F7678DD03C017707 (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->get_timer_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (timer < 0&&!Thrown)
		float L_2 = __this->get_timer_4();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		bool L_3 = __this->get_Thrown_9();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// Thrown = true;
		__this->set_Thrown_9((bool)1);
		// anim.SetTrigger("Shoot");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_8();
		NullCheck(L_4);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_4, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void OpponentController::StopAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController_StopAnimator_mB46C75C301D015D16983A4A2B2BA3E13E65C4E4E (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	{
		// anim.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_8();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpponentController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpponentController__ctor_m8A1B9157B4C3D475A483182B0764D8A7E3C2E040 (OpponentController_tD5DDD9CD103A46C39532EBFCC1E11FC15BBCE762 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float[] timerval = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_timerval_5(L_0);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::BallShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BallShoot_m22DBE103EA1FD4D3E279F043176717A5BB614FA3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * G_B2_0 = NULL;
	Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * G_B1_0 = NULL;
	{
		// ThrowBall?.Invoke(a, b, 0);
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		float L_2 = __this->get_a_6();
		float L_3 = __this->get_b_7();
		NullCheck(G_B2_0);
		Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94(G_B2_0, L_2, L_3, 0, /*hidden argument*/Action_3_Invoke_mEEA10BCF408C3A3E04ED1789540B4C89F2CCAB94_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnEnable_mA03C033E796965E5CE0538A4CF83729D5857F52B (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShootController.BallShot += OnShot;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields*)il2cpp_codegen_static_fields_for(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var))->get_BallShot_8();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)il2cpp_codegen_object_new(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		Action_2__ctor_m9952C32131269D7174CF7749785863389993C865(L_1, __this, (intptr_t)((intptr_t)PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields*)il2cpp_codegen_static_fields_for(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var))->set_BallShot_8(((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_2, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void PlayerController::OnShot(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.a = a;
		float L_0 = ___a0;
		__this->set_a_6(L_0);
		// this.b = b;
		float L_1 = ___b1;
		__this->set_b_7(L_1);
		// anim.SetTrigger("Shoot");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_4();
		NullCheck(L_2);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_2, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDisable_mE0ED7AD25577BE2048EB6D507C7503BD6462A015 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShootController.BallShot -= OnShot;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields*)il2cpp_codegen_static_fields_for(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var))->get_BallShot_8();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)il2cpp_codegen_object_new(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		Action_2__ctor_m9952C32131269D7174CF7749785863389993C865(L_1, __this, (intptr_t)((intptr_t)PlayerController_OnShot_m91DDF8D2CC723EE397861228C1AC1D69247707C7_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9952C32131269D7174CF7749785863389993C865_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields*)il2cpp_codegen_static_fields_for(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var))->set_BallShot_8(((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_2, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
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
// System.Void Put::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Put_Awake_m5031F4B4E616BD03FF1C7F392EE85F08DC90E55C (Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!Instance)
		Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * L_0 = ((Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields*)il2cpp_codegen_static_fields_for(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Instance = this;
		((Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_StaticFields*)il2cpp_codegen_static_fields_for(Put_tB2125925BBE8215613D03F4C6677EE201083BF0F_il2cpp_TypeInfo_var))->set_Instance_4(__this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Put::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Put__ctor_m8C236DAC8A0B6E600035B057D1B4C32CCD7B3DC2 (Put_tB2125925BBE8215613D03F4C6677EE201083BF0F * __this, const RuntimeMethod* method)
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
// System.Void ScoreTxtAssigner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_OnEnable_m01B8E1D137BC1001B5199EA579E0B387DA3AAEF2 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC615F615E8D6A573E66889655B9336B624BF310B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.parent.tag = "ScoreUI";
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_1, _stringLiteralC615F615E8D6A573E66889655B9336B624BF310B, /*hidden argument*/NULL);
		// VarContainer.ScoreChanged += ScoreChanged;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_ScoreChanged_2();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_3, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_ScoreChanged_2(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// Sub();
		ScoreTxtAssigner_Sub_m61BFB22718695D741729FCBA45BFB4F9BBF408C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::Sub()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_Sub_m61BFB22718695D741729FCBA45BFB4F9BBF408C8 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerController.ThrowBall += HideText;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_1, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_2, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_3 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_3, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::ScoreChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_U3CScoreChangedU3Eb__3_0_mCD60AA0D639CE6C79FE3144B0823B0DF4FC2CAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (i == index)
		int32_t L_0 = ___i0;
		int32_t L_1 = __this->get_index_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0030;
		}
	}
	{
		// GetComponent<Text>().DOColor(Color.green, 1.5f).OnComplete(() => GetComponent<Text>().DOColor(Color.white, 3));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_4;
		L_4 = DOTweenModuleUI_DOColor_mD7B708C07D203365A38EF934AFACD21C24B1C165(L_2, L_3, (1.5f), /*hidden argument*/NULL);
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_5 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_5, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_U3CScoreChangedU3Eb__3_0_mCD60AA0D639CE6C79FE3144B0823B0DF4FC2CAC5_RuntimeMethod_var), /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_6;
		L_6 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05(L_4, L_5, /*hidden argument*/TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var);
	}

IL_0030:
	{
		// GetComponent<Text>().text = 100 + "/" + VarContainer.Scores[index];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		V_0 = ((int32_t)100);
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_Scores_0();
		int32_t L_10 = __this->get_index_4();
		NullCheck(L_9);
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_12);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::HideText(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, float ___a0, float ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Text>().enabled = false;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Text>().enabled = true;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_OnDisable_m139467B88F943B980E5C7BA05433F7DEAA896F15 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	{
		// UnSub();
		ScoreTxtAssigner_UnSub_m5181DB4B6DBD6F2D3F4E540B7FD25BB46448561F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_OnDestroy_m0FAD7200EBCB07C0D501C5CA22DF173A965D9C42 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	{
		// UnSub();
		ScoreTxtAssigner_UnSub_m5181DB4B6DBD6F2D3F4E540B7FD25BB46448561F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::UnSub()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_UnSub_m5181DB4B6DBD6F2D3F4E540B7FD25BB46448561F (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_OnSceneLoaded_mA043979BEEB420B52F4F48FF57D084EFB75EFA06_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D(L_0, /*hidden argument*/NULL);
		// PlayerController.ThrowBall -= HideText;
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_1 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_ThrowBall_5();
		Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 * L_2 = (Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)il2cpp_codegen_object_new(Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var);
		Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B(L_2, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_HideText_mDF6E9D20D9CBBA5330B15624A145C77C7316AAC5_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m8C4F8768D5190CB06674D8F76C62D2795B090D1B_RuntimeMethod_var);
		Delegate_t * L_3;
		L_3 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_1, L_2, /*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_ThrowBall_5(((Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37 *)CastclassSealed((RuntimeObject*)L_3, Action_3_tDECE04B957EE2FBFBA786EB1AB4D58614B1EAC37_il2cpp_TypeInfo_var)));
		// VarContainer.ScoreChanged -= ScoreChanged;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_ScoreChanged_2();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_5, __this, (intptr_t)((intptr_t)ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_6;
		L_6 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_4, L_5, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_ScoreChanged_2(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_6, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_Start_mE9D00AB9E4CCBAB604EC0A395A1E115ABF24652F (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	{
		// ScoreChanged(-1);
		ScoreTxtAssigner_ScoreChanged_m2CDCF62EFB8AFB4211CE6B488D90F0D154B08C94(__this, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreTxtAssigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner__ctor_m02D3087E44384AB55DD458B802AFE38D5AC35C3F (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreTxtAssigner::<ScoreChanged>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTxtAssigner_U3CScoreChangedU3Eb__3_0_mCD60AA0D639CE6C79FE3144B0823B0DF4FC2CAC5 (ScoreTxtAssigner_t7E4E6ED17890860B85848F7DAE0D6A73C957B3DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Text>().DOColor(Color.green, 1.5f).OnComplete(() => GetComponent<Text>().DOColor(Color.white, 3));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_2;
		L_2 = DOTweenModuleUI_DOColor_mD7B708C07D203365A38EF934AFACD21C24B1C165(L_0, L_1, (3.0f), /*hidden argument*/NULL);
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
// System.Void ScrollingUVs_Layers::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingUVs_Layers_LateUpdate_mCF254F2658A89E013FE1B55E7551E585FD10AD5A (ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uvOffset += (uvAnimationRate * Time.deltaTime);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_uvOffset_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_uvAnimationRate_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_3, /*hidden argument*/NULL);
		__this->set_uvOffset_6(L_4);
		// if (GetComponent<Renderer>().enabled)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5;
		L_5 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// GetComponent<Renderer>().sharedMaterial.SetTextureOffset(textureName, uvOffset);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_7;
		L_7 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_7, /*hidden argument*/NULL);
		String_t* L_9 = __this->get_textureName_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = __this->get_uvOffset_6();
		NullCheck(L_8);
		Material_SetTextureOffset_m8917660179EA847BFFCC28D4DED115237388DAA5(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ScrollingUVs_Layers::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingUVs_Layers_OnCollisionEnter_mBB67906A521F0952D1CC343F336B64237F55994E (ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.GetComponent<BallController>())
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * L_2;
		L_2 = GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B(L_1, /*hidden argument*/GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		// if (collision.gameObject.GetComponentInChildren<ParticleSystem>())
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6;
		L_6 = GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2(L_5, /*hidden argument*/GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// collision.gameObject.GetComponentInChildren<ParticleSystem>().Play();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_10;
		L_10 = GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2(L_9, /*hidden argument*/GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2_RuntimeMethod_var);
		NullCheck(L_10);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_10, /*hidden argument*/NULL);
		// collision.gameObject.GetComponentInChildren<ParticleSystem>().gameObject.transform.parent = null;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_11 = ___collision0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13;
		L_13 = GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2(L_12, /*hidden argument*/GameObject_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5C9F16797C6FD976390F1B8C8AF6B22933ACA9D2_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_15, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// collision.gameObject.GetComponent<MeshRenderer>().enabled = false;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_18;
		L_18 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_17, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_18);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_18, (bool)0, /*hidden argument*/NULL);
		// Destroy(collision.gameObject, 3);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_19 = ___collision0;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_20, (3.0f), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void ScrollingUVs_Layers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingUVs_Layers__ctor_m955CE56E2EAC44015994176938A32431E646E29F (ScrollingUVs_Layers_t0A763D467C69D93C3BF730A5DABA7D240F5A8D78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2 uvAnimationRate = new Vector2(1.0f, 0.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_uvAnimationRate_4(L_0);
		// public string textureName = "_MainTex";
		__this->set_textureName_5(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		// Vector2 uvOffset = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_uvOffset_6(L_1);
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
// System.Void ShootController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_Start_mA422C75CDE18D00605CBD9088D130A157D5FB248 (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(Globals.ShotAmount);
		IL2CPP_RUNTIME_CLASS_INIT(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t5E846950608FF5B43E0DC0428CB05B899F542A72_il2cpp_TypeInfo_var))->get_ShotAmount_0();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090((RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShootController::OnCrossClicked(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// CanShoot = true;
		__this->set_CanShoot_7((bool)1);
		// CrossX = x;
		float L_0 = ___x0;
		__this->set_CrossX_9(L_0);
		// }
		return;
	}
}
// System.Void ShootController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_OnEnable_m54F196682547BEFFEB4384F8B7F92694D7665323 (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossHairController.CrossHairClicked += OnCrossClicked;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_0 = ((CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields*)il2cpp_codegen_static_fields_for(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var))->get_CrossHairClicked_4();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_1 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)il2cpp_codegen_object_new(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3(L_1, __this, (intptr_t)((intptr_t)ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields*)il2cpp_codegen_static_fields_for(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var))->set_CrossHairClicked_4(((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ShootController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_OnDisable_m435E8EE895DCB2BC97DE056A028371731C8DEB65 (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossHairController.CrossHairClicked -= OnCrossClicked;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_0 = ((CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields*)il2cpp_codegen_static_fields_for(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var))->get_CrossHairClicked_4();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_1 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)il2cpp_codegen_object_new(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3(L_1, __this, (intptr_t)((intptr_t)ShootController_OnCrossClicked_m7762CA91ED16E97C82D58442115DABD90A40415A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_StaticFields*)il2cpp_codegen_static_fields_for(CrossHairController_t6E6025D11C1E6CB6BB48418070003EC10095BA7E_il2cpp_TypeInfo_var))->set_CrossHairClicked_4(((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Boolean ShootController::CheckVal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShootController_CheckVal_mCD113FC9B07F203C9C03F40BBB91E94647F7496F (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, bool ___val0, const RuntimeMethod* method)
{
	{
		// if (PowerBar.value == PowerBar.maxValue)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_PowerBar_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_PowerBar_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline(L_2, /*hidden argument*/NULL);
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		// val = true;
		___val0 = (bool)1;
		// }
		goto IL_0038;
	}

IL_001d:
	{
		// else if (PowerBar.value == PowerBar.minValue)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_PowerBar_4();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_PowerBar_4();
		NullCheck(L_6);
		float L_7;
		L_7 = Slider_get_minValue_m7B5A89FDE9916A4A111BDB91648750E23C034B08_inline(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		// val = false;
		___val0 = (bool)0;
	}

IL_0038:
	{
		// return val;
		bool L_8 = ___val0;
		return L_8;
	}
}
// System.Void ShootController::InputController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_InputController_m3136B3EAAF28D817E2CB7BC972CA33FDE78A2129 (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B3_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B2_0 = NULL;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// BallShot?.Invoke(CrossX,PowerBar.value);
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = ((ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_StaticFields*)il2cpp_codegen_static_fields_for(ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34_il2cpp_TypeInfo_var))->get_BallShot_8();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0029;
	}

IL_0013:
	{
		float L_3 = __this->get_CrossX_9();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_PowerBar_4();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		NullCheck(G_B3_0);
		Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89(G_B3_0, L_3, L_5, /*hidden argument*/Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
	}

IL_0029:
	{
		// CanShoot = false;
		__this->set_CanShoot_7((bool)0);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void ShootController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController_Update_m6A4E1AC99F1A04743E7031A223A2B40C9832C46C (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
{
	{
		// if (CanShoot)
		bool L_0 = __this->get_CanShoot_7();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		// OnMax = CheckVal(OnMax);
		bool L_1 = __this->get_OnMax_5();
		bool L_2;
		L_2 = ShootController_CheckVal_mCD113FC9B07F203C9C03F40BBB91E94647F7496F(__this, L_1, /*hidden argument*/NULL);
		__this->set_OnMax_5(L_2);
		// if (OnMax)
		bool L_3 = __this->get_OnMax_5();
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// PowerBar.value -= Time.deltaTime*5;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_PowerBar_4();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(5.0f))))));
		// }
		goto IL_005e;
	}

IL_0041:
	{
		// PowerBar.value += Time.deltaTime*5;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_PowerBar_4();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(5.0f))))));
	}

IL_005e:
	{
		// InputController();
		ShootController_InputController_m3136B3EAAF28D817E2CB7BC972CA33FDE78A2129(__this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void ShootController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootController__ctor_m96699B44C9BD1FB4096231310FBEBE5DF612ABED (ShootController_t133E318CF19DE8D269032AADD51F51B30398EB34 * __this, const RuntimeMethod* method)
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
// System.Void SteamPusher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_Start_m14D6A1A937ECB15E7E4276E582176B185D0D139F (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SteamPusher::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_OnEnable_m6B92EFDD9A0926A03AB42C0F469BECE421734DD7 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BallController.InfoSend += FlagCheck;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields*)il2cpp_codegen_static_fields_for(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var))->get_InfoSend_11();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields*)il2cpp_codegen_static_fields_for(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var))->set_InfoSend_11(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SteamPusher::FlagCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	{
		// BallonGround = true;
		__this->set_BallonGround_6((bool)1);
		// }
		return;
	}
}
// System.Void SteamPusher::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_OnDisable_mB6E82B63989C2703EBA8D78FBCB34734F95A4DC9 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BallController.InfoSend -= FlagCheck;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields*)il2cpp_codegen_static_fields_for(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var))->get_InfoSend_11();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)SteamPusher_FlagCheck_m12247C173C6E550E33DB72786C6777F6E57FEFC4_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_StaticFields*)il2cpp_codegen_static_fields_for(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_il2cpp_TypeInfo_var))->set_InfoSend_11(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SteamPusher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_Update_m22E9DA5A58A741A41A14873C803541F5909B09D0 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SteamTimer -= Time.deltaTime;
		float L_0 = __this->get_SteamTimer_8();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_SteamTimer_8(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (SteamTimer < 0)
		float L_2 = __this->get_SteamTimer_8();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// GetComponent<BoxCollider>().enabled = false;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_3;
		L_3 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_3);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// if (SteamTimer < -8.6f)
		float L_4 = __this->get_SteamTimer_8();
		if ((!(((float)L_4) < ((float)(-8.60000038f)))))
		{
			goto IL_004f;
		}
	}
	{
		// GetComponent<BoxCollider>().enabled = true;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_5;
		L_5 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_5, (bool)1, /*hidden argument*/NULL);
		// SteamTimer = 6;
		__this->set_SteamTimer_8((6.0f));
	}

IL_004f:
	{
		// if (BallTouched)
		bool L_6 = __this->get_BallTouched_4();
		// }
		return;
	}
}
// System.Void SteamPusher::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher_OnTriggerEnter_mC1295B30FC25767EA63BC0077B6E124550941038 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m77737714A4BCE62011E611A8A1AEB5B4555C8D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.GetComponent<BallController>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * L_1;
		L_1 = Component_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m77737714A4BCE62011E611A8A1AEB5B4555C8D5B(L_0, /*hidden argument*/Component_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m77737714A4BCE62011E611A8A1AEB5B4555C8D5B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// other.gameObject.GetComponent<BallController>().SetState(BallStates.Steamed);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * L_5;
		L_5 = GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B(L_4, /*hidden argument*/GameObject_GetComponent_TisBallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD_m7E44614CAF384E80568B04BB1FBF4F8E4ACA6A2B_RuntimeMethod_var);
		NullCheck(L_5);
		BallController_SetState_m0BAB0E71999149B77093C44489F17B69FC22AFA8_inline(L_5, 2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SteamPusher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamPusher__ctor_mECC894C65BB3BD31E65AE2A22E8F426747CFE436 (SteamPusher_tEB0DB0EF5AD9D833348EAE03C63BAFAB6AA53E7C * __this, const RuntimeMethod* method)
{
	{
		// float timer = 3;
		__this->set_timer_7((3.0f));
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
// System.Void SteamedBehaviour::Setters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamedBehaviour_Setters_m4B7D5B4A9FAB5D7B0C041FEF65FCE47D4138A55D (SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SteamedBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamedBehaviour_Update_m47FEF46DC8C7660E2EF96C851349AFDE5E96B9AD (SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * __this, const RuntimeMethod* method)
{
	{
		// BallDragger(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SteamedBehaviour_BallDragger_mAB81A746679D544E79C6DC3E7EC270877017FBCC(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SteamedBehaviour::BallDragger(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamedBehaviour_BallDragger_mAB81A746679D544E79C6DC3E7EC270877017FBCC (SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___contact0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->get_timer_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (timer < 0)
		float L_2 = __this->get_timer_4();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// Vector3 offset = contact.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___contact0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// offset.z += 10;
		float* L_6 = (&V_0)->get_address_of_z_4();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)(10.0f)));
		// offset.y += 30;
		float* L_9 = (&V_0)->get_address_of_y_3();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add((float)L_11, (float)(30.0f)));
		// contact.transform.position = Vector3.MoveTowards(contact.transform.position, offset, Time.deltaTime * 20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = ___contact0;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ___contact0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_16, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)(20.0f))), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SteamedBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamedBehaviour__ctor_m2E7D9B005FC7B5B913D5572D7345D0E6F747623C (SteamedBehaviour_t2E790BD9843128E2AC0CFF5C2F5F2FAFAE3839AB * __this, const RuntimeMethod* method)
{
	{
		// float timer = 5;
		__this->set_timer_4((5.0f));
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
// System.Void Stick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stick_Start_m5F1806E31013639BBB220DCB7DE9B4AD289FB68E (Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Stick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stick_Update_mDFB3BCFF826CEC1044579A28CDE990B257C2AAD1 (Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Stick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stick__ctor_mC5313236BB1BD0F3E5F83D4BD18C57D60784CC49 (Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D * __this, const RuntimeMethod* method)
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
// System.Void Turn_Move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move_Start_m779466523F79606C853C60ED83A28E62969BF23D (Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Turn_Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move_Update_m2816D5E307B484F2CDB60B4CFF6374C37E48DE0D (Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C * __this, const RuntimeMethod* method)
{
	{
		// if (World == true) {
		bool L_0 = __this->get_World_10();
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		// transform.Rotate(TurnX * Time.deltaTime,TurnY * Time.deltaTime,TurnZ * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_TurnX_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_4 = __this->get_TurnY_5();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_TurnZ_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), 0, /*hidden argument*/NULL);
		// transform.Translate(MoveX * Time.deltaTime, MoveY * Time.deltaTime, MoveZ * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_9 = __this->get_MoveX_7();
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_11 = __this->get_MoveY_8();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_MoveZ_9();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_m22737F202DE67AAAAC408ADE91BD44F5BAF3DD6B(L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), 0, /*hidden argument*/NULL);
		// }else{
		return;
	}

IL_0069:
	{
		// transform.Rotate(TurnX * Time.deltaTime,TurnY * Time.deltaTime,TurnZ * Time.deltaTime, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_16 = __this->get_TurnX_4();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_18 = __this->get_TurnY_5();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_20 = __this->get_TurnZ_6();
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), 1, /*hidden argument*/NULL);
		// transform.Translate(MoveX * Time.deltaTime, MoveY * Time.deltaTime, MoveZ * Time.deltaTime, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_23 = __this->get_MoveX_7();
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_25 = __this->get_MoveY_8();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_27 = __this->get_MoveZ_9();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_Translate_m22737F202DE67AAAAC408ADE91BD44F5BAF3DD6B(L_22, ((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), ((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)), 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Turn_Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move__ctor_m409C271E24FD807386FF2FA9A0948D5B7227D9D0 (Turn_Move_tA9B0EC29B9A6069E1C4AF26779BF960AB735091C * __this, const RuntimeMethod* method)
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
// System.Single UIElementsController::get_PutDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIElementsController_get_PutDistance_mFAA8FFE3B7D708F5A50CAF01772639E4966EEA98 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	{
		// get { return putDistance; }
		float L_0 = __this->get_putDistance_9();
		return L_0;
	}
}
// System.Void UIElementsController::set_PutDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_set_PutDistance_m1861FB783B13EA97594C0EBC8FECD4BAACD99B01 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F2926A8DFD8BC6AA471D3C64911B7836D9DBB1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		float L_0 = ___value0;
		__this->set_putDistance_9(L_0);
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		float L_1 = ___value0;
		if ((!(((float)L_1) >= ((float)(500.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = __this->get_ColorList_10();
		NullCheck(L_2);
		int32_t L_3 = 4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UIElementsController_TextColor_mD305D1D596B0B816D0895B3F303A0CA0381EF487(__this, L_4, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0023:
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		float L_5 = ___value0;
		if ((!(((float)L_5) >= ((float)(100.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = __this->get_ColorList_10();
		NullCheck(L_6);
		int32_t L_7 = 2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UIElementsController_TextColor_mD305D1D596B0B816D0895B3F303A0CA0381EF487(__this, L_8, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_003f:
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		float L_9 = ___value0;
		if ((!(((float)L_9) >= ((float)(50.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = __this->get_ColorList_10();
		NullCheck(L_10);
		int32_t L_11 = 0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		UIElementsController_TextColor_mD305D1D596B0B816D0895B3F303A0CA0381EF487(__this, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_PutDistanceTxt_8();
		float L_14 = __this->get_putDistance_9();
		V_0 = ((float)((float)L_14/(float)(2.0f)));
		String_t* L_15;
		L_15 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteral37F2926A8DFD8BC6AA471D3C64911B7836D9DBB1, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
		return;
	}
}
// System.Void UIElementsController::TextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_TextColor_mD305D1D596B0B816D0895B3F303A0CA0381EF487 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newcolor0, const RuntimeMethod* method)
{
	{
		// PutDistanceTxt.color = newcolor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_PutDistanceTxt_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___newcolor0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIElementsController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_OnEnable_m0D181AAAE39BA4012AA8B557EE3627C780F8AF8B (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VarContainer.GameEnded += OnGameEnded;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_GameEnded_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, __this, (intptr_t)((intptr_t)UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_GameEnded_1(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_2, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UIElementsController::OnGameEnded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, int32_t ____number0, const RuntimeMethod* method)
{
	{
		// number = _number;
		int32_t L_0 = ____number0;
		__this->set_number_11(L_0);
		// if (_number == 0)
		int32_t L_1 = ____number0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GameSucceedPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_GameSucceedPanel_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0017:
	{
		// else GameFailedPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_GameFailedPanel_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIElementsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_Start_m657BE0FABA40B7DDD6CBA62455784737D1560BC5 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsController_U3CStartU3Eb__14_0_mB217E2534EA8212CDC9CBFC2F12944CBC5F10BB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsController_U3CStartU3Eb__14_1_m49A5BA2F4F54058DA2C168F99B2947A9F6D9C139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NoThanksBtn.onClick.AddListener(() => { GameEnder(number); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_NoThanksBtn_6();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)UIElementsController_U3CStartU3Eb__14_0_mB217E2534EA8212CDC9CBFC2F12944CBC5F10BB4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// SkipBtn.onClick.AddListener(() => { GameEnder(number); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_SkipBtn_7();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)UIElementsController_U3CStartU3Eb__14_1_m49A5BA2F4F54058DA2C168F99B2947A9F6D9C139_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIElementsController::GameEnder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_GameEnder_m64E9F83ACFA07BAD87413226F103AFF4410B6FA8 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index == 0)
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// VarContainer.ResetScore();
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		VarContainer_ResetScore_m0CF8C82D6C273817AF7D9E8811C7A5436FCEFD8B(/*hidden argument*/NULL);
		// Extension.LoadNextLevel();
		Extension_LoadNextLevel_m6AC11CE66B1F23A68333E3C09DF4F14EF97353E0(/*hidden argument*/NULL);
		// }
		return;
	}

IL_000e:
	{
		// VarContainer.ResetScore();
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		VarContainer_ResetScore_m0CF8C82D6C273817AF7D9E8811C7A5436FCEFD8B(/*hidden argument*/NULL);
		// Extension.Restart();
		Extension_Restart_m96E3ED1EBDD5935A1CB138ADE81BC608C4CC03B1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIElementsController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_OnDisable_m2153EA5BE708D45A12D3CEAA991E01060804EA51 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VarContainer.GameEnded -= OnGameEnded;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_GameEnded_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)il2cpp_codegen_object_new(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F(L_1, __this, (intptr_t)((intptr_t)UIElementsController_OnGameEnded_mAF1B1347739FB61A67096994C4433B4D6D120DB3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_GameEnded_1(((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_2, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UIElementsController::Rotations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_Rotations_m0190C86C3B6E3DB8C9AC0D2FDA0856EB9ADF2A82 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, bool ___LeftCheck0, const RuntimeMethod* method)
{
	{
		// if (LeftCheck)
		bool L_0 = ___LeftCheck0;
		// }
		return;
	}
}
// System.Void UIElementsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController__ctor_m3342FFED8950FA968E522C4C1FA882D46176CC47 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIElementsController::<Start>b__14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_U3CStartU3Eb__14_0_mB217E2534EA8212CDC9CBFC2F12944CBC5F10BB4 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	{
		// NoThanksBtn.onClick.AddListener(() => { GameEnder(number); });
		int32_t L_0 = __this->get_number_11();
		UIElementsController_GameEnder_m64E9F83ACFA07BAD87413226F103AFF4410B6FA8(__this, L_0, /*hidden argument*/NULL);
		// NoThanksBtn.onClick.AddListener(() => { GameEnder(number); });
		return;
	}
}
// System.Void UIElementsController::<Start>b__14_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsController_U3CStartU3Eb__14_1_m49A5BA2F4F54058DA2C168F99B2947A9F6D9C139 (UIElementsController_tCF64122A1EE010365323005BF3AC233952E8FA79 * __this, const RuntimeMethod* method)
{
	{
		// SkipBtn.onClick.AddListener(() => { GameEnder(number); });
		int32_t L_0 = __this->get_number_11();
		UIElementsController_GameEnder_m64E9F83ACFA07BAD87413226F103AFF4410B6FA8(__this, L_0, /*hidden argument*/NULL);
		// SkipBtn.onClick.AddListener(() => { GameEnder(number); });
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
// System.Void VarContainer::SetScore(System.Int32,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VarContainer_SetScore_m2351A9653B63371DB14CE1A76BE4BC8E33D656EB (int32_t ___index0, int32_t ___score1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___g2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetScoreU3Eb__3_0_m0F76CAAD832245B58B40123C74CD847549A040D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B2_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B1_0 = NULL;
	Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * G_B5_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B5_1 = NULL;
	Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * G_B4_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B4_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B8_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B7_0 = NULL;
	{
		// Scores[index] += score;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_Scores_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___score1;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		// ScoreChanged?.Invoke(index);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_5 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_ScoreChanged_2();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_001b;
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		int32_t L_7 = ___index0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B2_0, L_7, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_0021:
	{
		// var (number, _index) = Scores.Select((n, i) => (n, i)).Max();
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_Scores_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var);
		Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * L_9 = ((U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = L_8;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_8;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var);
		U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * L_11 = ((U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * L_12 = (Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 *)il2cpp_codegen_object_new(Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776_il2cpp_TypeInfo_var);
		Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CSetScoreU3Eb__3_0_m0F76CAAD832245B58B40123C74CD847549A040D0_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mAD97E68E393F54A57F6B63665F7BFFFE00364A5B_RuntimeMethod_var);
		Func_3_t4B4FD0B1A9A30BE7ED22B96E545A0524F65EF776 * L_13 = L_12;
		((U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_13);
		G_B5_0 = L_13;
		G_B5_1 = G_B4_1;
	}

IL_0045:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC((RuntimeObject*)(RuntimeObject*)G_B5_1, G_B5_0, /*hidden argument*/Enumerable_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_mF383E6B33BF19F610A1867A73C8A36EB05F5FBDC_RuntimeMethod_var);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_15;
		L_15 = Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB(L_14, /*hidden argument*/Enumerable_Max_TisValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E_m9661BDC9BD0FA104983703714BA8C165233D3AEB_RuntimeMethod_var);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_16 = L_15;
		int32_t L_17 = L_16.get_Item1_0();
		V_0 = L_17;
		int32_t L_18 = L_16.get_Item2_1();
		V_1 = L_18;
		// if (number >= 100)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)100))))
		{
			goto IL_0072;
		}
	}
	{
		// GameEnded?.Invoke(_index);
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_20 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_GameEnded_1();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_21 = L_20;
		G_B7_0 = L_21;
		if (L_21)
		{
			G_B8_0 = L_21;
			goto IL_006b;
		}
	}
	{
		return;
	}

IL_006b:
	{
		int32_t L_22 = V_1;
		NullCheck(G_B8_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B8_0, L_22, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}

IL_0072:
	{
		// else if (index == 0)
		int32_t L_23 = ___index0;
		if (L_23)
		{
			goto IL_007a;
		}
	}
	{
		// Extension.Restart();
		Extension_Restart_m96E3ED1EBDD5935A1CB138ADE81BC608C4CC03B1(/*hidden argument*/NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void VarContainer::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VarContainer_ResetScore_m0CF8C82D6C273817AF7D9E8811C7A5436FCEFD8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Scores.Length; i++)
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		// Scores[i] = 0;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_Scores_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for (int i = 0; i < Scores.Length; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0010:
	{
		// for (int i = 0; i < Scores.Length; i++)
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->get_Scores_0();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VarContainer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VarContainer__cctor_mB0DFE365DCC7A2D8751F96B5B64E264A45530D84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] Scores = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		((VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_StaticFields*)il2cpp_codegen_static_fields_for(VarContainer_t0E4A577617A42DC9A51DF9A2B35F45756796A9C0_il2cpp_TypeInfo_var))->set_Scores_0(L_0);
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
// System.Void Waypoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_Start_m4DB8D7ED8B9448CB8031A076B3DBB3C4656037B7 (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	{
		// functionState = 0;
		__this->set_functionState_10((0.0f));
		// }
		return;
	}
}
// System.Void Waypoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_Update_m8C7F27FCCDF5C715B7E00AE668F6CBDDCF548511 (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	{
		// if (functionState == 0)
		float L_0 = __this->get_functionState_10();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// Accell();
		Waypoint_Accell_m66977456670F92B76BC552A38BA52549C1EC6C7C(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (functionState == 1)
		float L_1 = __this->get_functionState_10();
		if ((!(((float)L_1) == ((float)(1.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// StartCoroutine(Slow());
		RuntimeObject* L_2;
		L_2 = Waypoint_Slow_m07B26FF31598560372E9F303E126BBDA6AD9BB27(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// waypoint = waypoints[WPindexPointer]; //Keep the object pointed toward the current Waypoint object.
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4 = __this->get_waypoints_16();
		int32_t L_5 = __this->get_WPindexPointer_17();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->set_waypoint_13(L_7);
		// }
		return;
	}
}
// System.Void Waypoint::Accell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_Accell_m66977456670F92B76BC552A38BA52549C1EC6C7C (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (accelState == false)
		bool L_0 = __this->get_accelState_11();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// accelState = true;
		__this->set_accelState_11((bool)1);
		// slowState = false;
		__this->set_slowState_12((bool)0);
	}

IL_0016:
	{
		// if (waypoint) //If there is a waypoint do the next "if".
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_waypoint_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		// if (smoothRotation)
		bool L_3 = __this->get_smoothRotation_15();
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// var rotation = Quaternion.LookRotation(waypoint.position - transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_waypoint_13();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * rotationDamping);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = V_0;
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_15 = __this->get_rotationDamping_14();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_12, L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_16, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// currentSpeed = currentSpeed + accel * accel;
		float L_17 = __this->get_currentSpeed_9();
		float L_18 = __this->get_accel_4();
		float L_19 = __this->get_accel_4();
		__this->set_currentSpeed_9(((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
		// transform.Translate (0,0,Time.deltaTime * currentSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_22 = __this->get_currentSpeed_9();
		NullCheck(L_20);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_20, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		// if (currentSpeed >= speedLimit)
		float L_23 = __this->get_currentSpeed_9();
		float L_24 = __this->get_speedLimit_6();
		if ((!(((float)L_23) >= ((float)L_24))))
		{
			goto IL_00c9;
		}
	}
	{
		// currentSpeed = speedLimit;
		float L_25 = __this->get_speedLimit_6();
		__this->set_currentSpeed_9(L_25);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Waypoint::OnTriggerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_OnTriggerEnter_m718483391B661180D40D8450D30499ACA7EF69FF (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	{
		// functionState = 1;
		__this->set_functionState_10((1.0f));
		// WPindexPointer++;
		int32_t L_0 = __this->get_WPindexPointer_17();
		__this->set_WPindexPointer_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (WPindexPointer >= waypoints.Length)
		int32_t L_1 = __this->get_WPindexPointer_17();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_waypoints_16();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		// WPindexPointer = 0;
		__this->set_WPindexPointer_17(0);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Waypoint::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_OnDrawGizmosSelected_m5DF1DE0CDC4C7B87349CCE30F44B9F21A861B205 (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < waypoints.Length; i++){
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		// if (waypoints[i]){
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_waypoints_16();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008a;
		}
	}
	{
		// Gizmos.color = waypoints[0].GetComponent<Renderer>().sharedMaterial.color;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_waypoints_16();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8;
		L_8 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_7, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_9, /*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_10, /*hidden argument*/NULL);
		// if (i < (waypoints.Length-1) ){
		int32_t L_11 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = __this->get_waypoints_16();
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)1)))))
		{
			goto IL_0062;
		}
	}
	{
		// Gizmos.DrawLine(waypoints[i].position, waypoints[i+1].position);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_13 = __this->get_waypoints_16();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_18 = __this->get_waypoints_16();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_17, L_22, /*hidden argument*/NULL);
		// }else{
		goto IL_008a;
	}

IL_0062:
	{
		// Gizmos.DrawLine(waypoints[waypoints.Length-1].position, waypoints[0].position);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_23 = __this->get_waypoints_16();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24 = __this->get_waypoints_16();
		NullCheck(L_24);
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_28 = __this->get_waypoints_16();
		NullCheck(L_28);
		int32_t L_29 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_27, L_31, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// for(int i = 0; i < waypoints.Length; i++){
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_008e:
	{
		// for(int i = 0; i < waypoints.Length; i++){
		int32_t L_33 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_34 = __this->get_waypoints_16();
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Waypoint::Slow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Waypoint_Slow_m07B26FF31598560372E9F303E126BBDA6AD9BB27 (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * L_0 = (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C *)il2cpp_codegen_object_new(U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C_il2cpp_TypeInfo_var);
		U3CSlowU3Ed__19__ctor_mCD5BD0CE35F03A68DAEBF7055F27A9653042F460(L_0, 0, /*hidden argument*/NULL);
		U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Waypoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint__ctor_m89EA42D47EFB28A7076838800458399F153E973C (Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * __this, const RuntimeMethod* method)
{
	{
		// public float accel = 0.8f;
		__this->set_accel_4((0.800000012f));
		// public float inertia = 0.9f;
		__this->set_inertia_5((0.899999976f));
		// public float speedLimit = 10.0f;
		__this->set_speedLimit_6((10.0f));
		// public float minSpeed = 1.0f;
		__this->set_minSpeed_7((1.0f));
		// public float stopTime = 1.0f;
		__this->set_stopTime_8((1.0f));
		// public float rotationDamping = 6.0f;
		__this->set_rotationDamping_14((6.0f));
		// public bool smoothRotation = true;
		__this->set_smoothRotation_15((bool)1);
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
// System.Void VarContainer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m72D296F5C60FE36724CEB94FAEB7F4FB8B3962C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * L_0 = (U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 *)il2cpp_codegen_object_new(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0DDD623DF315593A2FD6071FC8D038AB876BB41(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void VarContainer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0DDD623DF315593A2FD6071FC8D038AB876BB41 (U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> VarContainer/<>c::<SetScore>b__3_0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  U3CU3Ec_U3CSetScoreU3Eb__3_0_m0F76CAAD832245B58B40123C74CD847549A040D0 (U3CU3Ec_t34390BA5C2B1C879791C655AC2478EA9426BF809 * __this, int32_t ___n0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var (number, _index) = Scores.Select((n, i) => (n, i)).Max();
		int32_t L_0 = ___n0;
		int32_t L_1 = ___i1;
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
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
// System.Void Waypoint/<Slow>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlowU3Ed__19__ctor_mCD5BD0CE35F03A68DAEBF7055F27A9653042F460 (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Waypoint/<Slow>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlowU3Ed__19_System_IDisposable_Dispose_mDE6990C4B777A34455F51BF621A70C90542848BE (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Waypoint/<Slow>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSlowU3Ed__19_MoveNext_m52AE7D01C101AA94760B9E506D48DF5326E91B97 (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (slowState == false) //
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_slowState_12();
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		// accelState = false;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_accelState_11((bool)0);
		// slowState = true;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_slowState_12((bool)1);
	}

IL_0037:
	{
		// currentSpeed = currentSpeed * inertia;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_8 = V_1;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_currentSpeed_9();
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_inertia_5();
		NullCheck(L_8);
		L_8->set_currentSpeed_9(((float)il2cpp_codegen_multiply((float)L_10, (float)L_12)));
		// transform.Translate (0,0,Time.deltaTime * currentSpeed);
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->get_currentSpeed_9();
		NullCheck(L_14);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_14, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)), /*hidden argument*/NULL);
		// if (currentSpeed <= minSpeed)
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_currentSpeed_9();
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_minSpeed_7();
		if ((!(((float)L_19) <= ((float)L_21))))
		{
			goto IL_00b0;
		}
	}
	{
		// currentSpeed = 0.0f;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set_currentSpeed_9((0.0f));
		// yield return new WaitForSeconds(stopTime);
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_stopTime_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_25 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_25, L_24, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// functionState = 0;
		Waypoint_t5E314A85F1DA67F46ED8E66F72E1B5894AF47C11 * L_26 = V_1;
		NullCheck(L_26);
		L_26->set_functionState_10((0.0f));
	}

IL_00b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object Waypoint/<Slow>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSlowU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6587D44FEEB3687782B7BE3480696D7B77D91E1 (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Waypoint/<Slow>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlowU3Ed__19_System_Collections_IEnumerator_Reset_m65B10AF0055BD32AECFA53174618E29A21016107 (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSlowU3Ed__19_System_Collections_IEnumerator_Reset_m65B10AF0055BD32AECFA53174618E29A21016107_RuntimeMethod_var)));
	}
}
// System.Object Waypoint/<Slow>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSlowU3Ed__19_System_Collections_IEnumerator_get_Current_m87695EECECF4579DEA0006D476861C35F5281ADE (U3CSlowU3Ed__19_t33A314188ACE60B883045A9276CE6EFF9B376E6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public float maxValue { get { return m_MaxValue; } set { if (SetPropertyUtility.SetStruct(ref m_MaxValue, value)) { Set(m_Value); UpdateVisuals(); } } }
		float L_0 = __this->get_m_MaxValue_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_minValue_m7B5A89FDE9916A4A111BDB91648750E23C034B08_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public float minValue { get { return m_MinValue; } set { if (SetPropertyUtility.SetStruct(ref m_MinValue, value)) { Set(m_Value); UpdateVisuals(); } } }
		float L_0 = __this->get_m_MinValue_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Scale_m54AA203304585B8BB6ECA4936A90F408BD880916_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BallController_SetState_m0BAB0E71999149B77093C44489F17B69FC22AFA8_inline (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// State = state;
		int32_t L_0 = ___state0;
		__this->set_State_15(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
