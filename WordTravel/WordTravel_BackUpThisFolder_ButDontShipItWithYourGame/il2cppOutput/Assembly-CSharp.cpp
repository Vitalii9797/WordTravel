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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<ClueLetter>
struct List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1;
// System.Collections.Generic.List`1<ClueWord>
struct List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// ClueLetter[]
struct ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984;
// ClueWord[]
struct ClueWordU5BU5D_t436B9172909ABDEFC0237DA6957535449E3DA660;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Letter[]
struct LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Alphabet
struct Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ClueLetter
struct ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D;
// ClueWord
struct ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HintButton
struct HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49;
// Letter
struct Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71;
// LetterCircle
struct LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445;
// LoadLevel
struct LoadLevel_t6D820819C00F95E71A1AF7D03B8B7F76D4897CD6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShuffleButton
struct ShuffleButton_tCBCB8373C20DDCE97E2A4D5B4234B2C57AB1E83B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WordsContainer
struct WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635;
IL2CPP_EXTERN_C String_t* _stringLiteral4D68E48490AD95722636352C2C7948D542EDE8AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50;
IL2CPP_EXTERN_C String_t* _stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBA22D0DDACA3AAE32E7356A94E0CFF15100E3C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBC61273E482DB5E0BC01045766623EC998FF84BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9BBF41266A887885FCA33EE81F032A3CA29EF875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m77FD3C1CCAA085FD253CE03251DFABB634EB60D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF0BB5BEA3364C8072C79B5278E32DBB990781D96_RuntimeMethod_var;

struct ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984;
struct LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<ClueLetter>
struct List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClueWord>
struct List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ClueWordU5BU5D_t436B9172909ABDEFC0237DA6957535449E3DA660* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ClueWordU5BU5D_t436B9172909ABDEFC0237DA6957535449E3DA660* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
};

struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields
{
	// System.Int32 GameData::Scores
	int32_t ___Scores_0;
	// System.Int32 GameData::LevelIndex
	int32_t ___LevelIndex_1;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Alphabet
struct Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<System.String> Alphabet::Letters
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Letters_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> Alphabet::Sprites
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___Sprites_5;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ClueLetter
struct ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer ClueLetter::sRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sRenderer_4;
	// ClueWord ClueLetter::clueWord
	ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* ___clueWord_5;
	// UnityEngine.Sprite ClueLetter::letterSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___letterSprite_6;
	// System.Boolean ClueLetter::letterSolved
	bool ___letterSolved_7;
	// UnityEngine.Animator ClueLetter::clueAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___clueAnim_8;
};

// ClueWord
struct ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ClueWord::clueWord
	String_t* ___clueWord_4;
	// System.Boolean ClueWord::wordSolved
	bool ___wordSolved_5;
	// ClueLetter[] ClueWord::clueLetters
	ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* ___clueLetters_6;
	// Alphabet ClueWord::alphabet
	Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* ___alphabet_7;
	// WordsContainer ClueWord::wordsContainer
	WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* ___wordsContainer_8;
	// System.Collections.Generic.List`1<ClueLetter> ClueWord::letterList
	List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* ___letterList_9;
};

// HintButton
struct HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WordsContainer HintButton::wordsContainer
	WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* ___wordsContainer_4;
	// UnityEngine.GameObject HintButton::hintPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hintPanel_5;
};

// Letter
struct Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Letter::sRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___sRenderer_4;
	// System.String Letter::letterValue
	String_t* ___letterValue_5;
	// UnityEngine.Color Letter::defaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultColor_6;
	// UnityEngine.Color Letter::pressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pressedColor_7;
	// LetterCircle Letter::letterCircle
	LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* ___letterCircle_8;
	// System.Boolean Letter::selected
	bool ___selected_9;
	// System.Boolean Letter::pressed
	bool ___pressed_10;
	// UnityEngine.Animator Letter::letterAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___letterAnim_11;
};

// LetterCircle
struct LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LetterCircle::word
	String_t* ___word_4;
	// System.String LetterCircle::currentWord
	String_t* ___currentWord_5;
	// System.Boolean LetterCircle::wordSelectionStarted
	bool ___wordSelectionStarted_6;
	// UnityEngine.UI.Text LetterCircle::currentWordText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentWordText_7;
	// Alphabet LetterCircle::alphabet
	Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* ___alphabet_8;
	// Letter[] LetterCircle::letters
	LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* ___letters_9;
	// WordsContainer LetterCircle::wordsContainer
	WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* ___wordsContainer_10;
	// UnityEngine.Vector3[] LetterCircle::lettersPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___lettersPositions_11;
	// System.Random LetterCircle::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_12;
};

// LoadLevel
struct LoadLevel_t6D820819C00F95E71A1AF7D03B8B7F76D4897CD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LoadLevel::levelIndex
	int32_t ___levelIndex_4;
};

// ShuffleButton
struct ShuffleButton_tCBCB8373C20DDCE97E2A4D5B4234B2C57AB1E83B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LetterCircle ShuffleButton::letterCircle
	LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* ___letterCircle_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WordsContainer
struct WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WordsContainer::levelIndex
	int32_t ___levelIndex_4;
	// System.String WordsContainer::nextLevel
	String_t* ___nextLevel_5;
	// System.Collections.Generic.List`1<ClueWord> WordsContainer::clueWords
	List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* ___clueWords_6;
	// UnityEngine.GameObject WordsContainer::winPopUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPopUp_7;
	// UnityEngine.GameObject WordsContainer::watchAdPopUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___watchAdPopUp_8;
	// UnityEngine.UI.Text WordsContainer::totalScoresText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___totalScoresText_9;
	// UnityEngine.UI.Text WordsContainer::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_10;
	// System.Int32 WordsContainer::scores
	int32_t ___scores_11;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ClueLetter[]
struct ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984  : public RuntimeArray
{
	ALIGN_FIELD (8) ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* m_Items[1];

	inline ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Letter[]
struct LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D  : public RuntimeArray
{
	ALIGN_FIELD (8) Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* m_Items[1];

	inline Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ClueWord::CheckSolvedLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_CheckSolvedLetters_m7F293D45811A0296658F91C42BB2213DEA3A0E10 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ClueWord::SetLettersSprites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_SetLettersSprites_m52341DDD51C9F1158E53D1C3A01D622DF09FB641 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void ClueLetter::SetLetterSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClueLetter_SetLetterSprite_m2FF2A352678E0ACD0EF937C3F3CA310CB9DB3472_inline (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) ;
// System.Void ClueLetter::RevealLetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueLetter_RevealLetter_m07EC9377DBEF7A2F726DF85723E21F05D426A0CB (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, const RuntimeMethod* method) ;
// System.Void WordsContainer::CheckSolvedWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClueLetter>::get_Count()
inline int32_t List_1_get_Count_m77FD3C1CCAA085FD253CE03251DFABB634EB60D7_inline (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClueLetter>::get_Item(System.Int32)
inline ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* List_1_get_Item_mF0BB5BEA3364C8072C79B5278E32DBB990781D96 (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* (*) (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<ClueLetter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBC61273E482DB5E0BC01045766623EC998FF84BB (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<ClueLetter>::.ctor()
inline void List_1__ctor_m9BBF41266A887885FCA33EE81F032A3CA29EF875 (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void WordsContainer::UseLetterHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_UseLetterHint_m0132A07EF85D8483C45C4FC0B6E7C0A1B764C6FC (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) ;
// System.Void WordsContainer::UseWordHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_UseWordHint_m53A470F7B9C73689F539327FC132FC1765863470 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void LetterCircle::UpdateCurrentWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_UpdateCurrentWord_m204A022DDD318092B9352FA2C00F9084786AB152 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, String_t* ___letter0, const RuntimeMethod* method) ;
// System.Void LetterCircle::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_CheckWord_m1D492E7DFCD409E36707BE60F6D1EDE8AACB7341 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void LetterCircle::SetLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_SetLetters_mF548A2FF5447561F99350320A9256E1E50C7B630 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Letter::ChangePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_ChangePosition_mA89CB8A583EDCAA3D441AB7CAD924C8E6552DC27 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void WordsContainer::CheckWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_CheckWord_mF15C5E68E032E1B20B8B3EEFE250348D506E3AE4 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, String_t* ___currentWord0, const RuntimeMethod* method) ;
// System.Void LetterCircle::DisableSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_DisableSelection_mC5500FA12131184C131176875D02369AD4BE2C5D (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) ;
// System.Void Letter::UncheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_UncheckWord_m190C62A02453DAA20C4152C07AC839FCB08EB6F4 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Int32 GameData::GetLevelIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_GetLevelIndex_m596B8BA28CE185C959F5B755DB268A893D41B797 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void LetterCircle::ShuffleLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_ShuffleLetters_m4F755A9F808D17D827E98C5C3DCF32BA960C6720 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClueWord>::get_Count()
inline int32_t List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 GameData::GetScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_GetScores_m5F2AF1C611FC8AFCB7EA1DC6B1948E397B6F15C4 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClueWord>::get_Item(System.Int32)
inline ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* (*) (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void ClueWord::SolveClueLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_SolveClueLetters_m7F7B875A7D11208E651FC3078BFD82FFE05976CC (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClueWord>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBA22D0DDACA3AAE32E7356A94E0CFF15100E3C8A (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void WordsContainer::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_LevelComplete_m1BE7475E147126C07986D0C8E65ECF9F507B20DC (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) ;
// System.Void ClueWord::RevealRandomLetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_RevealRandomLetter_mB13BCCCD35E278DC2F1F6E1C8EA7443FE5121E3C (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) ;
// System.Void GameData::SetScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_SetScores_m773ED5A85F2675BE6BC61694CC9DDDCC1CBB9715 (int32_t ___scores0, const RuntimeMethod* method) ;
// System.Void GameData::SetLevelIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_SetLevelIndex_m664321890BE4DDAC3C64896BE3C97BA84A0EAAFC (int32_t ___levelIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
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
// System.Void Alphabet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Alphabet__ctor_mE45A4E16A57634C39DFC3453F7EA2012BA8878A3 (Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ClueLetter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueLetter_Start_mC88BCE639C4D5B59F1297C6094CB18E8E7F2A1F8 (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clueAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___clueAnim_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clueAnim_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void ClueLetter::SetLetterSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueLetter_SetLetterSprite_m2FF2A352678E0ACD0EF937C3F3CA310CB9DB3472 (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) 
{
	{
		// letterSprite = sprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___sprite0;
		__this->___letterSprite_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterSprite_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ClueLetter::RevealLetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueLetter_RevealLetter_m07EC9377DBEF7A2F726DF85723E21F05D426A0CB (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sRenderer.sprite = letterSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___sRenderer_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___letterSprite_6;
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_1, NULL);
		// letterSolved = true;
		__this->___letterSolved_7 = (bool)1;
		// clueAnim.SetTrigger("reveal");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___clueAnim_8;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50, NULL);
		// clueWord.CheckSolvedLetters();
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_3 = __this->___clueWord_5;
		NullCheck(L_3);
		ClueWord_CheckSolvedLetters_m7F293D45811A0296658F91C42BB2213DEA3A0E10(L_3, NULL);
		// }
		return;
	}
}
// System.Void ClueLetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueLetter__ctor_m5BD248360F0158C25DA21D2674CFCE3E5329D90F (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ClueWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_Start_m6DA84C2A34C00F7052F1323555AD18DC523C5156 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	{
		// SetLettersSprites();
		ClueWord_SetLettersSprites_m52341DDD51C9F1158E53D1C3A01D622DF09FB641(__this, NULL);
		// }
		return;
	}
}
// System.Void ClueWord::SetLettersSprites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_SetLettersSprites_m52341DDD51C9F1158E53D1C3A01D622DF09FB641 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		V_0 = 0;
		goto IL_0049;
	}

IL_0004:
	{
		// clueLetters[i].SetLetterSprite(alphabet.Sprites[alphabet.Letters.IndexOf(clueWord[i].ToString())]);
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_0 = __this->___clueLetters_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* L_4 = __this->___alphabet_7;
		NullCheck(L_4);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = L_4->___Sprites_5;
		Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* L_6 = __this->___alphabet_7;
		NullCheck(L_6);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6->___Letters_4;
		String_t* L_8 = __this->___clueWord_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_7);
		int32_t L_12;
		L_12 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_7, L_11, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_5, L_12, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_3);
		ClueLetter_SetLetterSprite_m2FF2A352678E0ACD0EF937C3F3CA310CB9DB3472_inline(L_3, L_13, NULL);
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_15 = V_0;
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_16 = __this->___clueLetters_6;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClueWord::SolveClueLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_SolveClueLetters_m7F7B875A7D11208E651FC3078BFD82FFE05976CC (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// clueLetters[i].RevealLetter();
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_0 = __this->___clueLetters_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		ClueLetter_RevealLetter_m07EC9377DBEF7A2F726DF85723E21F05D426A0CB(L_3, NULL);
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_5 = V_0;
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_6 = __this->___clueLetters_6;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// wordSolved = true;
		__this->___wordSolved_5 = (bool)1;
		// }
		return;
	}
}
// System.Void ClueWord::CheckSolvedLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_CheckSolvedLetters_m7F293D45811A0296658F91C42BB2213DEA3A0E10 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// if(clueLetters[i].letterSolved == false)
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_0 = __this->___clueLetters_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___letterSolved_7;
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < clueLetters.Length; i++)
		int32_t L_6 = V_0;
		ClueLetterU5BU5D_tD49D33E6FCE618F89FDC4BEDC37A760572A05984* L_7 = __this->___clueLetters_6;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// wordSolved = true;
		__this->___wordSolved_5 = (bool)1;
		// wordsContainer.CheckSolvedWords();
		WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* L_8 = __this->___wordsContainer_8;
		NullCheck(L_8);
		WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677(L_8, NULL);
		// }
		return;
	}
}
// System.Void ClueWord::RevealRandomLetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord_RevealRandomLetter_mB13BCCCD35E278DC2F1F6E1C8EA7443FE5121E3C (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mBC61273E482DB5E0BC01045766623EC998FF84BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m77FD3C1CCAA085FD253CE03251DFABB634EB60D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF0BB5BEA3364C8072C79B5278E32DBB990781D96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomIndex = Random.Range(0, letterList.Count - 1);
		List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* L_0 = __this->___letterList_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m77FD3C1CCAA085FD253CE03251DFABB634EB60D7_inline(L_0, List_1_get_Count_m77FD3C1CCAA085FD253CE03251DFABB634EB60D7_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		V_0 = L_2;
		// letterList[randomIndex].RevealLetter();
		List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* L_3 = __this->___letterList_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* L_5;
		L_5 = List_1_get_Item_mF0BB5BEA3364C8072C79B5278E32DBB990781D96(L_3, L_4, List_1_get_Item_mF0BB5BEA3364C8072C79B5278E32DBB990781D96_RuntimeMethod_var);
		NullCheck(L_5);
		ClueLetter_RevealLetter_m07EC9377DBEF7A2F726DF85723E21F05D426A0CB(L_5, NULL);
		// letterList.RemoveAt(randomIndex);
		List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* L_6 = __this->___letterList_9;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_mBC61273E482DB5E0BC01045766623EC998FF84BB(L_6, L_7, List_1_RemoveAt_mBC61273E482DB5E0BC01045766623EC998FF84BB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ClueWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClueWord__ctor_m48AEA7B3A818124C082AF75FB55E94C53EDA27C1 (ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9BBF41266A887885FCA33EE81F032A3CA29EF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ClueLetter> letterList = new List<ClueLetter>();
		List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1* L_0 = (List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1*)il2cpp_codegen_object_new(List_1_t64314015E5AB731C02C7AD312F400AD731DB18E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9BBF41266A887885FCA33EE81F032A3CA29EF875(L_0, List_1__ctor_m9BBF41266A887885FCA33EE81F032A3CA29EF875_RuntimeMethod_var);
		__this->___letterList_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterList_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 GameData::GetScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_GetScores_m5F2AF1C611FC8AFCB7EA1DC6B1948E397B6F15C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Scores = PlayerPrefs.GetInt("scores");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC, NULL);
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___Scores_0 = L_0;
		// return Scores;
		int32_t L_1 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___Scores_0;
		return L_1;
	}
}
// System.Void GameData::SetScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_SetScores_m773ED5A85F2675BE6BC61694CC9DDDCC1CBB9715 (int32_t ___scores0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("scores", scores);
		int32_t L_0 = ___scores0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB713861CAB87662EBFB24FBCB6F5E0E05B61DCBC, L_0, NULL);
		// }
		return;
	}
}
// System.Int32 GameData::GetLevelIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_GetLevelIndex_m596B8BA28CE185C959F5B755DB268A893D41B797 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D68E48490AD95722636352C2C7948D542EDE8AD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// LevelIndex = (PlayerPrefs.GetInt("levelIndex"));
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral4D68E48490AD95722636352C2C7948D542EDE8AD, NULL);
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___LevelIndex_1 = L_0;
		// LevelIndex = LevelIndex == 0 ? 1 : LevelIndex;
		int32_t L_1 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___LevelIndex_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___LevelIndex_1;
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___LevelIndex_1 = G_B3_0;
		// return LevelIndex;
		int32_t L_3 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___LevelIndex_1;
		return L_3;
	}
}
// System.Void GameData::SetLevelIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData_SetLevelIndex_m664321890BE4DDAC3C64896BE3C97BA84A0EAAFC (int32_t ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D68E48490AD95722636352C2C7948D542EDE8AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("levelIndex", levelIndex + 1);
		int32_t L_0 = ___levelIndex0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral4D68E48490AD95722636352C2C7948D542EDE8AD, ((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
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
// System.Void HintButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HintButton_OnMouseDown_mFDD504BB2006138D1E79C89C2972311C140729C8 (HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49* __this, const RuntimeMethod* method) 
{
	{
		// hintPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hintPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HintButton::CancelHintButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HintButton_CancelHintButton_mB3C9D2360DD07EA4F4B18B1BBD5108481D1ADC37 (HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49* __this, const RuntimeMethod* method) 
{
	{
		// hintPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hintPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HintButton::LetterHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HintButton_LetterHint_m0B497B509FFBAAE1CC5D42CBEDA683F2C55D7A50 (HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49* __this, const RuntimeMethod* method) 
{
	{
		// wordsContainer.UseLetterHint();
		WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* L_0 = __this->___wordsContainer_4;
		NullCheck(L_0);
		WordsContainer_UseLetterHint_m0132A07EF85D8483C45C4FC0B6E7C0A1B764C6FC(L_0, NULL);
		// hintPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hintPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HintButton::WordHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HintButton_WordHint_m245A2536AE2E362E534FCD4C9EA39B12EA762AA2 (HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49* __this, const RuntimeMethod* method) 
{
	{
		// wordsContainer.UseWordHint();
		WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* L_0 = __this->___wordsContainer_4;
		NullCheck(L_0);
		WordsContainer_UseWordHint_m53A470F7B9C73689F539327FC132FC1765863470(L_0, NULL);
		// hintPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hintPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HintButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HintButton__ctor_mDE93E674B267A2878D90CB90D7C2C17653801151 (HintButton_t901EC8B6ABB4D9C9A71CAC9E8522BBA054229F49* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Letter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_Start_mFDB59B2FFB074B01472E041591F34A4301D2F7AB (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// letterAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___letterAnim_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterAnim_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Letter::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_OnMouseDown_mFD97164C53BEB7AB683AFA6F3919AB945AEF04A7 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		// pressed = true;
		__this->___pressed_10 = (bool)1;
		// selected = true;
		__this->___selected_9 = (bool)1;
		// if(pressed == true)
		bool L_0 = __this->___pressed_10;
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// letterCircle.wordSelectionStarted = true;
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_1 = __this->___letterCircle_8;
		NullCheck(L_1);
		L_1->___wordSelectionStarted_6 = (bool)1;
		// sRenderer.color = pressedColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___sRenderer_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___pressedColor_7;
		NullCheck(L_2);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_2, L_3, NULL);
		// letterCircle.currentWord = letterValue;
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_4 = __this->___letterCircle_8;
		String_t* L_5 = __this->___letterValue_5;
		NullCheck(L_4);
		L_4->___currentWord_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___currentWord_5), (void*)L_5);
		// letterCircle.currentWordText.text = letterCircle.currentWord;
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_6 = __this->___letterCircle_8;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___currentWordText_7;
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_8 = __this->___letterCircle_8;
		NullCheck(L_8);
		String_t* L_9 = L_8->___currentWord_5;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Letter::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_OnMouseEnter_mE5F2A64D8B47BDEF63443DA15A08482317C234A8 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		// if(letterCircle.wordSelectionStarted == true && selected == false)
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_0 = __this->___letterCircle_8;
		NullCheck(L_0);
		bool L_1 = L_0->___wordSelectionStarted_6;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		bool L_2 = __this->___selected_9;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		// selected = true;
		__this->___selected_9 = (bool)1;
		// sRenderer.color = pressedColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___sRenderer_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___pressedColor_7;
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// letterCircle.UpdateCurrentWord(letterValue);
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_5 = __this->___letterCircle_8;
		String_t* L_6 = __this->___letterValue_5;
		NullCheck(L_5);
		LetterCircle_UpdateCurrentWord_m204A022DDD318092B9352FA2C00F9084786AB152(L_5, L_6, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Letter::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_OnMouseUp_mE94A436347C1B0C47D2B70EEBC186E4D0C1B8AF2 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		// letterCircle.CheckWord();
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_0 = __this->___letterCircle_8;
		NullCheck(L_0);
		LetterCircle_CheckWord_m1D492E7DFCD409E36707BE60F6D1EDE8AACB7341(L_0, NULL);
		// }
		return;
	}
}
// System.Void Letter::UncheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_UncheckWord_m190C62A02453DAA20C4152C07AC839FCB08EB6F4 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		// selected = false;
		__this->___selected_9 = (bool)0;
		// sRenderer.color = defaultColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___sRenderer_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___defaultColor_6;
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Letter::ChangePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_ChangePosition_mA89CB8A583EDCAA3D441AB7CAD924C8E6552DC27 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635);
		s_Il2CppMethodInitialized = true;
	}
	{
		// letterAnim.SetTrigger("shuffle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___letterAnim_11;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635, NULL);
		// transform.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Letter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter__ctor_m9DC949C5BBDFCD68699909CCBF9C038DAA22CA50 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LetterCircle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_Start_m9E446D072BF8D3058EDA7C714CCA8EFCE510D3F8 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetLetters();
		LetterCircle_SetLetters_mF548A2FF5447561F99350320A9256E1E50C7B630(__this, NULL);
		// currentWordText.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentWordText_7;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void LetterCircle::SetLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_SetLetters_mF548A2FF5447561F99350320A9256E1E50C7B630 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < word.Length; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_0004:
	{
		// letters[i].gameObject.GetComponent<SpriteRenderer>().sprite = alphabet.Sprites[alphabet.Letters.IndexOf(word[i].ToString())];
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_0 = __this->___letters_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* L_6 = __this->___alphabet_8;
		NullCheck(L_6);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_7 = L_6->___Sprites_5;
		Alphabet_tC16CB6C1306625E70067CA06285C0805155042AC* L_8 = __this->___alphabet_8;
		NullCheck(L_8);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8->___Letters_4;
		String_t* L_10 = __this->___word_4;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_9);
		int32_t L_14;
		L_14 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_9, L_13, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		NullCheck(L_7);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
		L_15 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_7, L_14, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_5, L_15, NULL);
		// for (int i = 0; i < word.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < word.Length; i++)
		int32_t L_17 = V_0;
		String_t* L_18 = __this->___word_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// for(int i = 0; i < word.Length; i++)
		V_2 = 0;
		goto IL_008a;
	}

IL_0065:
	{
		// letters[i].letterValue = word[i].ToString();
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_20 = __this->___letters_9;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		String_t* L_24 = __this->___word_4;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_25, NULL);
		V_1 = L_26;
		String_t* L_27;
		L_27 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_23);
		L_23->___letterValue_5 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___letterValue_5), (void*)L_27);
		// for(int i = 0; i < word.Length; i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008a:
	{
		// for(int i = 0; i < word.Length; i++)
		int32_t L_29 = V_2;
		String_t* L_30 = __this->___word_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0065;
		}
	}
	{
		// for (int i = 0; i < letters.Length; i++)
		V_3 = 0;
		goto IL_00c3;
	}

IL_009c:
	{
		// lettersPositions[i] = letters[i].gameObject.transform.localPosition;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = __this->___lettersPositions_11;
		int32_t L_33 = V_3;
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_34 = __this->___letters_9;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_39, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_40);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00c3:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_42 = V_3;
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_43 = __this->___letters_9;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_009c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterCircle::ShuffleLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_ShuffleLetters_m4F755A9F808D17D827E98C5C3DCF32BA960C6720 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// for (int i = lettersPositions.Length - 1; i >= 1; i--)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___lettersPositions_11;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0052;
	}

IL_000d:
	{
		// int j = random.Next(i + 1);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = __this->___random_12;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_1 = L_3;
		// var temp = lettersPositions[j];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___lettersPositions_11;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// lettersPositions[j] = lettersPositions[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___lettersPositions_11;
		int32_t L_9 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___lettersPositions_11;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		// lettersPositions[i] = temp;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->___lettersPositions_11;
		int32_t L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = lettersPositions.Length - 1; i >= 1; i--)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0052:
	{
		// for (int i = lettersPositions.Length - 1; i >= 1; i--)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		// for (int i = 0; i < letters.Length; i++)
		V_3 = 0;
		goto IL_0077;
	}

IL_005a:
	{
		// letters[i].ChangePosition(lettersPositions[i]);
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_19 = __this->___letters_9;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___lettersPositions_11;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		Letter_ChangePosition_mA89CB8A583EDCAA3D441AB7CAD924C8E6552DC27(L_22, L_26, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0077:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_28 = V_3;
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_29 = __this->___letters_9;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_005a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterCircle::UpdateCurrentWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_UpdateCurrentWord_m204A022DDD318092B9352FA2C00F9084786AB152 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, String_t* ___letter0, const RuntimeMethod* method) 
{
	{
		// currentWord += letter;
		String_t* L_0 = __this->___currentWord_5;
		String_t* L_1 = ___letter0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___currentWord_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_5), (void*)L_2);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___currentWordText_7;
		String_t* L_4 = __this->___currentWord_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void LetterCircle::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_CheckWord_m1D492E7DFCD409E36707BE60F6D1EDE8AACB7341 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	{
		// wordsContainer.CheckWord(currentWord);
		WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* L_0 = __this->___wordsContainer_10;
		String_t* L_1 = __this->___currentWord_5;
		NullCheck(L_0);
		WordsContainer_CheckWord_mF15C5E68E032E1B20B8B3EEFE250348D506E3AE4(L_0, L_1, NULL);
		// DisableSelection();
		LetterCircle_DisableSelection_mC5500FA12131184C131176875D02369AD4BE2C5D(__this, NULL);
		// }
		return;
	}
}
// System.Void LetterCircle::DisableSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle_DisableSelection_mC5500FA12131184C131176875D02369AD4BE2C5D (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// currentWord = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___currentWord_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_5), (void*)L_0);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___currentWordText_7;
		String_t* L_2 = __this->___currentWord_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// wordSelectionStarted = false;
		__this->___wordSelectionStarted_6 = (bool)0;
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0027:
	{
		// letters[i].UncheckWord();
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_3 = __this->___letters_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Letter_UncheckWord_m190C62A02453DAA20C4152C07AC839FCB08EB6F4(L_6, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_8 = V_0;
		LetterU5BU5D_tEF075135B4CB52B8107B06DB625D20F5FF96371D* L_9 = __this->___letters_9;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LetterCircle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterCircle__ctor_mEC78FA6F73CAE7DD2FDD5D5636A45744AB8F8291 (LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___random_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_12), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadLevel_Start_m910CF076F64D0C0C48700B99B74B08A5AC0BBBB8 (LoadLevel_t6D820819C00F95E71A1AF7D03B8B7F76D4897CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameData.GetLevelIndex() < levelIndex)
		int32_t L_0;
		L_0 = GameData_GetLevelIndex_m596B8BA28CE185C959F5B755DB268A893D41B797(NULL);
		int32_t L_1 = __this->___levelIndex_4;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LoadLevel::StartLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadLevel_StartLevel_m2E1A3B769BFB51C78110B209B6DC5E974D619760 (LoadLevel_t6D820819C00F95E71A1AF7D03B8B7F76D4897CD6* __this, String_t* ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(level);
		String_t* L_0 = ___level0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void LoadLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadLevel__ctor_m4DE286B3AFE6F18D5040E4800ECD0F2A427F8640 (LoadLevel_t6D820819C00F95E71A1AF7D03B8B7F76D4897CD6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShuffleButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShuffleButton_OnMouseDown_m403E859B57D8E7872EB3E34AD2F9B77209147398 (ShuffleButton_tCBCB8373C20DDCE97E2A4D5B4234B2C57AB1E83B* __this, const RuntimeMethod* method) 
{
	{
		// letterCircle.ShuffleLetters();
		LetterCircle_tC536699361C93E59F111DF927FB50BDFB63CA445* L_0 = __this->___letterCircle_4;
		NullCheck(L_0);
		LetterCircle_ShuffleLetters_m4F755A9F808D17D827E98C5C3DCF32BA960C6720(L_0, NULL);
		// }
		return;
	}
}
// System.Void ShuffleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShuffleButton__ctor_mD82AEAF40FBE090EAA420DD60F6B0107E7F07B21 (ShuffleButton_tCBCB8373C20DDCE97E2A4D5B4234B2C57AB1E83B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WordsContainer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_Start_m1E05473E103821C0591DE99AAFDE027BE03CE148 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scores = clueWords.Count;
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_0 = __this->___clueWords_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_0, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		__this->___scores_11 = L_1;
		// scoreText.text = GameData.GetScores().ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___scoreText_10;
		int32_t L_3;
		L_3 = GameData_GetScores_m5F2AF1C611FC8AFCB7EA1DC6B1948E397B6F15C4(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void WordsContainer::CheckWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_CheckWord_mF15C5E68E032E1B20B8B3EEFE250348D506E3AE4 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, String_t* ___currentWord0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < clueWords.Count; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// if(clueWords[i].clueWord == currentWord && clueWords[i].wordSolved == false)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_0 = __this->___clueWords_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_2;
		L_2 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_0, L_1, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = L_2->___clueWord_4;
		String_t* L_4 = ___currentWord0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_6 = __this->___clueWords_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_8;
		L_8 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_6, L_7, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9 = L_8->___wordSolved_5;
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		// clueWords[i].SolveClueLetters();
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_10 = __this->___clueWords_6;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_12;
		L_12 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_10, L_11, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_12);
		ClueWord_SolveClueLetters_m7F7B875A7D11208E651FC3078BFD82FFE05976CC(L_12, NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < clueWords.Count; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < clueWords.Count; i++)
		int32_t L_14 = V_0;
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_15 = __this->___clueWords_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_15, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// CheckSolvedWords();
		WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677(__this, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::CheckSolvedWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mBA22D0DDACA3AAE32E7356A94E0CFF15100E3C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(clueWords.Count > 0)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_0 = __this->___clueWords_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_0, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		// for (int i = 0; i < clueWords.Count; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		// if(clueWords[i].wordSolved == true)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_2 = __this->___clueWords_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_4;
		L_4 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_2, L_3, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = L_4->___wordSolved_5;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// clueWords.RemoveAt(i);
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_6 = __this->___clueWords_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_mBA22D0DDACA3AAE32E7356A94E0CFF15100E3C8A(L_6, L_7, List_1_RemoveAt_mBA22D0DDACA3AAE32E7356A94E0CFF15100E3C8A_RuntimeMethod_var);
	}

IL_0031:
	{
		// for (int i = 0; i < clueWords.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < clueWords.Count; i++)
		int32_t L_9 = V_0;
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_10 = __this->___clueWords_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_10, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}

IL_0043:
	{
		// if(clueWords.Count == 0)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_12 = __this->___clueWords_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_12, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0056;
		}
	}
	{
		// LevelComplete();
		WordsContainer_LevelComplete_m1BE7475E147126C07986D0C8E65ECF9F507B20DC(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void WordsContainer::UseLetterHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_UseLetterHint_m0132A07EF85D8483C45C4FC0B6E7C0A1B764C6FC (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(GameData.GetScores() >= letterHintCost)
		int32_t L_0;
		L_0 = GameData_GetScores_m5F2AF1C611FC8AFCB7EA1DC6B1948E397B6F15C4(NULL);
		if ((((int32_t)L_0) < ((int32_t)5)))
		{
			goto IL_005a;
		}
	}
	{
		// if (clueWords.Count != 0)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_1 = __this->___clueWords_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_1, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// int randomIndex = Random.Range(0, clueWords.Count - 1);
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_3 = __this->___clueWords_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_3, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_0 = L_5;
		// clueWords[randomIndex].RevealRandomLetter();
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_6 = __this->___clueWords_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_8;
		L_8 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_6, L_7, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_8);
		ClueWord_RevealRandomLetter_mB13BCCCD35E278DC2F1F6E1C8EA7443FE5121E3C(L_8, NULL);
		// scores -= letterHintCost;
		int32_t L_9 = __this->___scores_11;
		__this->___scores_11 = ((int32_t)il2cpp_codegen_subtract(L_9, 5));
		// GameData.SetScores(scores);
		int32_t L_10 = __this->___scores_11;
		GameData_SetScores_m773ED5A85F2675BE6BC61694CC9DDDCC1CBB9715(L_10, NULL);
	}

IL_0053:
	{
		// CheckSolvedWords();
		WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677(__this, NULL);
		return;
	}

IL_005a:
	{
		// watchAdPopUp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___watchAdPopUp_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::UseWordHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_UseWordHint_m53A470F7B9C73689F539327FC132FC1765863470 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GameData.GetScores() >= wordHintCost)
		int32_t L_0;
		L_0 = GameData_GetScores_m5F2AF1C611FC8AFCB7EA1DC6B1948E397B6F15C4(NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_005c;
		}
	}
	{
		// if (clueWords.Count != 0)
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_1 = __this->___clueWords_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_1, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// int randomIndex = Random.Range(0, clueWords.Count - 1);
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_3 = __this->___clueWords_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_inline(L_3, List_1_get_Count_mAA7366BD1ED9AD560D69AAE1400AC01BE2B67D38_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_0 = L_5;
		// clueWords[randomIndex].SolveClueLetters();
		List_1_t3FFC0163232DFF9D21CA71B271F4A06A654A5BCA* L_6 = __this->___clueWords_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ClueWord_tAABE1976BE3B6C97535E7363CA8C0CDFE53048F8* L_8;
		L_8 = List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD(L_6, L_7, List_1_get_Item_m794DCEC415975EA05126B4519A742033723801DD_RuntimeMethod_var);
		NullCheck(L_8);
		ClueWord_SolveClueLetters_m7F7B875A7D11208E651FC3078BFD82FFE05976CC(L_8, NULL);
		// scores -= wordHintCost;
		int32_t L_9 = __this->___scores_11;
		__this->___scores_11 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)10)));
		// GameData.SetScores(scores);
		int32_t L_10 = __this->___scores_11;
		GameData_SetScores_m773ED5A85F2675BE6BC61694CC9DDDCC1CBB9715(L_10, NULL);
	}

IL_0055:
	{
		// CheckSolvedWords();
		WordsContainer_CheckSolvedWords_mDABDE158A8A55A707E89992223BAC8CDFAAB6677(__this, NULL);
		return;
	}

IL_005c:
	{
		// watchAdPopUp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___watchAdPopUp_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_LevelComplete_m1BE7475E147126C07986D0C8E65ECF9F507B20DC (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	{
		// totalScoresText.text = scores.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___totalScoresText_9;
		int32_t* L_1 = (&__this->___scores_11);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// GameData.SetScores(scores);
		int32_t L_3 = __this->___scores_11;
		GameData_SetScores_m773ED5A85F2675BE6BC61694CC9DDDCC1CBB9715(L_3, NULL);
		// GameData.SetLevelIndex(levelIndex);
		int32_t L_4 = __this->___levelIndex_4;
		GameData_SetLevelIndex_m664321890BE4DDAC3C64896BE3C97BA84A0EAAFC(L_4, NULL);
		// winPopUp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___winPopUp_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::HomeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_HomeButton_mE96016039D3151581982EC8C2B5DD3B27386BB74 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::NextLevelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_NextLevelButton_m61227FE078900410B152F0C8A4FFC291E674FA12 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(nextLevel);
		String_t* L_0 = __this->___nextLevel_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::CancelAdsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer_CancelAdsButton_m33ECEBC15C1E4BE8DD23BE365E4D7E2EE9084010 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	{
		// watchAdPopUp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___watchAdPopUp_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WordsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsContainer__ctor_mFE024BDB3D238C641AD9755B826DE1F70CF48099 (WordsContainer_t41C232620B94FC0E21900F3166F7EB0C8788B306* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClueLetter_SetLetterSprite_m2FF2A352678E0ACD0EF937C3F3CA310CB9DB3472_inline (ClueLetter_t709146835679B20365ACB137CCC8F4E9D3CB6D0D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) 
{
	{
		// letterSprite = sprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___sprite0;
		__this->___letterSprite_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterSprite_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
