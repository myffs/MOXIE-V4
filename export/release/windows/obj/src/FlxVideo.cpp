#include <hxcpp.h>

#ifndef INCLUDED_FlxVideo
#include <FlxVideo.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_vlc_VlcBitmap
#include <vlc/VlcBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_13_new,"FlxVideo","new",0x7683583b,"FlxVideo.new","FlxVideo.hx",13,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_72_checkFile,"FlxVideo","checkFile",0xbf86f57f,"FlxVideo.checkFile","FlxVideo.hx",72,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_97_fixVolume,"FlxVideo","fixVolume",0xbbc34baa,"FlxVideo.fixVolume","FlxVideo.hx",97,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_106_onVLCComplete,"FlxVideo","onVLCComplete",0x9df76302,"FlxVideo.onVLCComplete","FlxVideo.hx",106,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_125_onVLCError,"FlxVideo","onVLCError",0x299e11df,"FlxVideo.onVLCError","FlxVideo.hx",125,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_85_onFocus,"FlxVideo","onFocus",0x85870f94,"FlxVideo.onFocus","FlxVideo.hx",85,0xef4fc795)
HX_LOCAL_STACK_FRAME(_hx_pos_f1c6f975c40bab6b_91_onFocusLost,"FlxVideo","onFocusLost",0xc1993f98,"FlxVideo.onFocusLost","FlxVideo.hx",91,0xef4fc795)

void FlxVideo_obj::__construct(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_13_new)
HXLINE(  15)		this->finishCallback = null();
HXLINE(  22)		super::__construct();
HXLINE(  52)		::FlxVideo_obj::vlcBitmap =  ::vlc::VlcBitmap_obj::__alloc( HX_CTX );
HXLINE(  53)		 ::vlc::VlcBitmap _hx_tmp = ::FlxVideo_obj::vlcBitmap;
HXDLIN(  53)		_hx_tmp->set_height(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
HXLINE(  54)		 ::vlc::VlcBitmap _hx_tmp1 = ::FlxVideo_obj::vlcBitmap;
HXDLIN(  54)		_hx_tmp1->set_width((( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ) * ((Float)1.7777777777777777)));
HXLINE(  56)		::FlxVideo_obj::vlcBitmap->onComplete = this->onVLCComplete_dyn();
HXLINE(  57)		::FlxVideo_obj::vlcBitmap->onError = this->onVLCError_dyn();
HXLINE(  59)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->fixVolume_dyn(),null(),null(),null());
HXLINE(  60)		::FlxVideo_obj::vlcBitmap->repeat = 0;
HXLINE(  61)		::FlxVideo_obj::vlcBitmap->inWindow = false;
HXLINE(  62)		::FlxVideo_obj::vlcBitmap->fullscreen = false;
HXLINE(  63)		this->fixVolume(null());
HXLINE(  65)		::flixel::FlxG_obj::addChildBelowMouse(::FlxVideo_obj::vlcBitmap,null());
HXLINE(  66)		 ::vlc::VlcBitmap _hx_tmp2 = ::FlxVideo_obj::vlcBitmap;
HXDLIN(  66)		_hx_tmp2->play(this->checkFile(name));
            	}

Dynamic FlxVideo_obj::__CreateEmpty() { return new FlxVideo_obj; }

void *FlxVideo_obj::_hx_vtable = 0;

Dynamic FlxVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVideo_obj > _hx_result = new FlxVideo_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxVideo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f671189) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f671189;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

::String FlxVideo_obj::checkFile(::String fileName){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_72_checkFile)
HXLINE(  73)		::String pDir = HX_("",00,00,00,00);
HXLINE(  74)		::String appDir = ((HX_("file:///",91,ef,e4,54) + ::Sys_obj::getCwd()) + HX_("/",2f,00,00,00));
HXLINE(  76)		if ((fileName.indexOf(HX_(":",3a,00,00,00),null()) == -1)) {
HXLINE(  77)			pDir = appDir;
            		}
            		else {
HXLINE(  78)			bool _hx_tmp;
HXDLIN(  78)			if ((fileName.indexOf(HX_("file://",de,92,3b,ff),null()) != -1)) {
HXLINE(  78)				_hx_tmp = (fileName.indexOf(HX_("http",88,9b,16,45),null()) == -1);
            			}
            			else {
HXLINE(  78)				_hx_tmp = true;
            			}
HXDLIN(  78)			if (_hx_tmp) {
HXLINE(  79)				pDir = HX_("file:///",91,ef,e4,54);
            			}
            		}
HXLINE(  81)		return (pDir + fileName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxVideo_obj,checkFile,return )

void FlxVideo_obj::fixVolume( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_97_fixVolume)
HXLINE(  99)		::FlxVideo_obj::vlcBitmap->set_volume(( (Float)(0) ));
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE( 100)			_hx_tmp = (::flixel::FlxG_obj::sound->volume > ((Float)0.01));
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 101)			::FlxVideo_obj::vlcBitmap->set_volume(((::flixel::FlxG_obj::sound->volume * ((Float)0.5)) + ((Float)0.5)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxVideo_obj,fixVolume,(void))

void FlxVideo_obj::onVLCComplete(){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_106_onVLCComplete)
HXLINE( 107)		::FlxVideo_obj::vlcBitmap->stop();
HXLINE( 110)		::FlxVideo_obj::vlcBitmap->dispose();
HXLINE( 112)		if (::flixel::FlxG_obj::game->contains(::FlxVideo_obj::vlcBitmap)) {
HXLINE( 114)			::flixel::FlxG_obj::game->removeChild(::FlxVideo_obj::vlcBitmap);
            		}
HXLINE( 117)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 119)			this->finishCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxVideo_obj,onVLCComplete,(void))

void FlxVideo_obj::onVLCError(){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_125_onVLCError)
HXLINE( 126)		::haxe::Log_obj::trace(HX_("An error has occured while trying to load the video.\nPlease, check if the file you're loading exists.",a0,01,66,66),::hx::SourceInfo(HX_("source/FlxVideo.hx",21,f5,19,3b),126,HX_("FlxVideo",c9,1e,d6,f3),HX_("onVLCError",5a,18,97,63)));
HXLINE( 127)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 128)			this->finishCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxVideo_obj,onVLCError,(void))

 ::vlc::VlcBitmap FlxVideo_obj::vlcBitmap;

void FlxVideo_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_85_onFocus)
HXDLIN(  85)		if (::hx::IsNotNull( ::FlxVideo_obj::vlcBitmap )) {
HXLINE(  86)			::FlxVideo_obj::vlcBitmap->resume();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxVideo_obj,onFocus,(void))

void FlxVideo_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_f1c6f975c40bab6b_91_onFocusLost)
HXDLIN(  91)		if (::hx::IsNotNull( ::FlxVideo_obj::vlcBitmap )) {
HXLINE(  92)			::FlxVideo_obj::vlcBitmap->pause();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxVideo_obj,onFocusLost,(void))


::hx::ObjectPtr< FlxVideo_obj > FlxVideo_obj::__new(::String name) {
	::hx::ObjectPtr< FlxVideo_obj > __this = new FlxVideo_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< FlxVideo_obj > FlxVideo_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	FlxVideo_obj *__this = (FlxVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVideo_obj), true, "FlxVideo"));
	*(void **)__this = FlxVideo_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

FlxVideo_obj::FlxVideo_obj()
{
}

void FlxVideo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVideo);
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxVideo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxVideo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"checkFile") ) { return ::hx::Val( checkFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixVolume") ) { return ::hx::Val( fixVolume_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onVLCError") ) { return ::hx::Val( onVLCError_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onVLCComplete") ) { return ::hx::Val( onVLCComplete_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { outValue = onFocus_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vlcBitmap") ) { outValue = ( vlcBitmap ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { outValue = onFocusLost_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxVideo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVideo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"vlcBitmap") ) { vlcBitmap=ioValue.Cast<  ::vlc::VlcBitmap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxVideo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxVideo_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxVideo_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::vlc::VlcBitmap */ ,(void *) &FlxVideo_obj::vlcBitmap,HX_("vlcBitmap",3c,fc,fb,96)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxVideo_obj_sMemberFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("checkFile",64,97,9b,97),
	HX_("fixVolume",8f,ed,d7,93),
	HX_("onVLCComplete",67,5b,33,6e),
	HX_("onVLCError",5a,18,97,63),
	::String(null()) };

static void FlxVideo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVideo_obj::vlcBitmap,"vlcBitmap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxVideo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVideo_obj::vlcBitmap,"vlcBitmap");
};

#endif

::hx::Class FlxVideo_obj::__mClass;

static ::String FlxVideo_obj_sStaticFields[] = {
	HX_("vlcBitmap",3c,fc,fb,96),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	::String(null())
};

void FlxVideo_obj::__register()
{
	FlxVideo_obj _hx_dummy;
	FlxVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlxVideo",c9,1e,d6,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxVideo_obj::__SetStatic;
	__mClass->mMarkFunc = FlxVideo_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxVideo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxVideo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxVideo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxVideo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

