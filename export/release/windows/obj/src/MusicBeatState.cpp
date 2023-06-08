#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FlxVideo
#include <FlxVideo.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_17_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",17,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_28_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",28,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_30_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",30,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_42_onFocus,"MusicBeatState","onFocus",0xe919c541,"MusicBeatState.onFocus","MusicBeatState.hx",42,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_48_onFocusLost,"MusicBeatState","onFocusLost",0x797ccfc5,"MusicBeatState.onFocusLost","MusicBeatState.hx",48,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_55_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",55,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_72_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",72,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_76_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",76,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_126_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",126,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_131_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",131,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_91_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",91,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_99_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",99,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_104_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",104,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_115_resetState,"MusicBeatState","resetState",0xec54fbba,"MusicBeatState.resetState","MusicBeatState.hx",115,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_118_getState,"MusicBeatState","getState",0x1dfde593,"MusicBeatState.getState","MusicBeatState.hx",118,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_17_new)
HXLINE(  23)		this->curBeat = 0;
HXLINE(  22)		this->curStep = 0;
HXLINE(  20)		this->lastStep = ((Float)0);
HXLINE(  19)		this->lastBeat = ((Float)0);
HXLINE(  17)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_28_get_controls)
HXDLIN(  28)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_30_create)
HXLINE(  31)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  32)		this->super::create();
HXLINE(  34)		if (!(skip)) {
HXLINE(  35)			this->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),true));
            		}
HXLINE(  37)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
            	}


void MusicBeatState_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_42_onFocus)
HXLINE(  43)		::FlxVideo_obj::onFocus();
HXLINE(  44)		this->super::onFocus();
            	}


void MusicBeatState_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_48_onFocusLost)
HXLINE(  49)		::FlxVideo_obj::onFocusLost();
HXLINE(  50)		this->super::onFocusLost();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_55_update)
HXLINE(  57)		int oldStep = this->curStep;
HXLINE(  59)		this->updateCurStep();
HXLINE(  60)		this->updateBeat();
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if ((oldStep != this->curStep)) {
HXLINE(  62)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  63)			this->stepHit();
            		}
HXLINE(  65)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  65)			::flixel::FlxG_obj::save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            		}
HXLINE(  67)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_72_updateBeat)
HXDLIN(  72)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_76_updateCurStep)
HXLINE(  77)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  82)			while((_g < _g1)){
HXLINE(  82)				_g = (_g + 1);
HXDLIN(  82)				int i = (_g - 1);
HXLINE(  84)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  85)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  88)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor((((::Conductor_obj::songPosition - ( (Float)(::ClientPrefs_obj::noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_126_stepHit)
HXDLIN( 126)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 127)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_131_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_91_switchState)
HXLINE(  93)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE(  94)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE(  95)		if (!(::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn)) {
HXLINE(  96)			leState->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.6),false));
HXLINE(  97)			if (::hx::IsInstanceEq( nextState,::flixel::FlxG_obj::game->_state )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_99_switchState)
HXLINE(  99)					 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN(  99)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  99)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  98)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,nextState) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_104_switchState)
HXLINE( 104)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 104)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 103)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState));
            			}
HXLINE( 108)			return;
            		}
HXLINE( 110)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 111)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 111)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_115_resetState)
HXDLIN( 115)		::MusicBeatState_obj::switchState(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

 ::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_118_getState)
HXLINE( 119)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 120)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 121)		return leState;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatState_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

