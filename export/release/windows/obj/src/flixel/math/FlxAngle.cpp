#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_66_wrapAngle,"flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",66,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_88_asDegrees,"flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",88,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_100_asRadians,"flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",100,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_113_angleBetween,"flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",113,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_133_angleBetweenPoint,"flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",133,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_155_angleBetweenMouse,"flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",155,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_185_angleBetweenTouch,"flixel.math.FlxAngle","angleBetweenTouch",0x57b5a691,"flixel.math.FlxAngle.angleBetweenTouch","flixel/math/FlxAngle.hx",185,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_209_angleFromFacing,"flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",209,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_234_getCartesianCoords,"flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",234,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_253_getPolarCoords,"flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",253,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_265_get_TO_DEG,"flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",265,0x32e99189)
HX_LOCAL_STACK_FRAME(_hx_pos_5b56d9e1983dc02b_270_get_TO_RAD,"flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",270,0x32e99189)
namespace flixel{
namespace math{

void FlxAngle_obj::__construct() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return new FlxAngle_obj; }

void *FlxAngle_obj::_hx_vtable = 0;

Dynamic FlxAngle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAngle_obj > _hx_result = new FlxAngle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAngle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x356118e9;
}

Float FlxAngle_obj::wrapAngle(Float angle){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_66_wrapAngle)
HXLINE(  67)		if ((angle > 180)) {
HXLINE(  69)			angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle - ( (Float)(360) )));
            		}
            		else {
HXLINE(  71)			if ((angle < -180)) {
HXLINE(  73)				angle = ::flixel::math::FlxAngle_obj::wrapAngle((angle + 360));
            			}
            		}
HXLINE(  76)		return angle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::asDegrees(Float radians){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_88_asDegrees)
HXDLIN(  88)		return (radians * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians(Float degrees){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_100_asRadians)
HXDLIN( 100)		return (degrees * (::Math_obj::PI / ( (Float)(180) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_113_angleBetween)
HXLINE( 114)		Float dx = ((SpriteB->x + SpriteB->origin->x) - (SpriteA->x + SpriteA->origin->x));
HXLINE( 115)		Float dy = ((SpriteB->y + SpriteB->origin->y) - (SpriteA->y + SpriteA->origin->y));
HXLINE( 117)		if (AsDegrees) {
HXLINE( 118)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 120)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 117)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_133_angleBetweenPoint)
HXLINE( 134)		Float dx = (Target->x - (Sprite->x + Sprite->origin->x));
HXLINE( 135)		Float dy = (Target->y - (Sprite->y + Sprite->origin->y));
HXLINE( 137)		if (Target->_weak) {
HXLINE( 137)			Target->put();
            		}
HXLINE( 139)		if (AsDegrees) {
HXLINE( 140)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 142)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 139)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_155_angleBetweenMouse)
HXLINE( 157)		if (::hx::IsNull( Object )) {
HXLINE( 158)			return ( (Float)(0) );
            		}
HXLINE( 160)		 ::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());
HXLINE( 162)		Float dx = (( (Float)(::flixel::FlxG_obj::mouse->screenX) ) - p->x);
HXLINE( 163)		Float dy = (( (Float)(::flixel::FlxG_obj::mouse->screenY) ) - p->y);
HXLINE( 165)		p->put();
HXLINE( 167)		if (AsDegrees) {
HXLINE( 168)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 170)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 167)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object, ::flixel::input::touch::FlxTouch Touch,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_185_angleBetweenTouch)
HXLINE( 187)		 ::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());
HXLINE( 189)		Float dx = (( (Float)(Touch->screenX) ) - p->x);
HXLINE( 190)		Float dy = (( (Float)(Touch->screenY) ) - p->y);
HXLINE( 192)		p->put();
HXLINE( 194)		if (AsDegrees) {
HXLINE( 195)			return (::Math_obj::atan2(dy,dx) * (( (Float)(180) ) / ::Math_obj::PI));
            		}
            		else {
HXLINE( 197)			return ::Math_obj::atan2(dy,dx);
            		}
HXLINE( 194)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

Float FlxAngle_obj::angleFromFacing(int Facing,::hx::Null< bool >  __o_AsDegrees){
            		bool AsDegrees = __o_AsDegrees.Default(false);
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_209_angleFromFacing)
HXLINE( 210)		int degrees;
HXDLIN( 210)		switch((int)(Facing)){
            			case (int)1: {
HXLINE( 210)				degrees = 180;
            			}
            			break;
            			case (int)16: {
HXLINE( 210)				degrees = 0;
            			}
            			break;
            			case (int)256: {
HXLINE( 210)				degrees = -90;
            			}
            			break;
            			case (int)4096: {
HXLINE( 210)				degrees = 90;
            			}
            			break;
            			default:{
HXLINE( 216)				int f = Facing;
HXDLIN( 216)				if ((f == (256 | 1))) {
HXLINE( 210)					degrees = -135;
            				}
            				else {
HXLINE( 217)					int f = Facing;
HXDLIN( 217)					if ((f == (256 | 16))) {
HXLINE( 210)						degrees = -45;
            					}
            					else {
HXLINE( 218)						int f = Facing;
HXDLIN( 218)						if ((f == (4096 | 1))) {
HXLINE( 210)							degrees = 135;
            						}
            						else {
HXLINE( 219)							int f = Facing;
HXDLIN( 219)							if ((f == (4096 | 16))) {
HXLINE( 210)								degrees = 45;
            							}
            							else {
HXLINE( 210)								degrees = 0;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 222)		if (AsDegrees) {
HXLINE( 222)			return ( (Float)(degrees) );
            		}
            		else {
HXLINE( 222)			return (( (Float)(degrees) ) * (::Math_obj::PI / ( (Float)(180) )));
            		}
HXDLIN( 222)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

 ::flixel::math::FlxPoint FlxAngle_obj::getCartesianCoords(Float Radius,Float Angle, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_234_getCartesianCoords)
HXLINE( 235)		 ::flixel::math::FlxPoint p = point;
HXLINE( 236)		if (::hx::IsNull( p )) {
HXLINE( 237)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 237)			point->_inPool = false;
HXDLIN( 237)			p = point;
            		}
HXLINE( 239)		p->set_x((Radius * ::Math_obj::cos((Angle * (::Math_obj::PI / ( (Float)(180) ))))));
HXLINE( 240)		p->set_y((Radius * ::Math_obj::sin((Angle * (::Math_obj::PI / ( (Float)(180) ))))));
HXLINE( 241)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

 ::flixel::math::FlxPoint FlxAngle_obj::getPolarCoords(Float X,Float Y, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_253_getPolarCoords)
HXLINE( 254)		 ::flixel::math::FlxPoint p = point;
HXLINE( 255)		if (::hx::IsNull( p )) {
HXLINE( 256)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 256)			point->_inPool = false;
HXDLIN( 256)			p = point;
            		}
HXLINE( 258)		p->set_x(::Math_obj::sqrt(((X * X) + (Y * Y))));
HXLINE( 259)		p->set_y((::Math_obj::atan2(Y,X) * (( (Float)(180) ) / ::Math_obj::PI)));
HXLINE( 260)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_265_get_TO_DEG)
HXDLIN( 265)		return (( (Float)(180) ) / ::Math_obj::PI);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD(){
            	HX_STACKFRAME(&_hx_pos_5b56d9e1983dc02b_270_get_TO_RAD)
HXDLIN( 270)		return (::Math_obj::PI / ( (Float)(180) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

bool FlxAngle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_TO_DEG() ); return true; } }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_TO_RAD() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { outValue = wrapAngle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { outValue = asDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"asRadians") ) { outValue = asRadians_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { outValue = get_TO_DEG_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { outValue = get_TO_RAD_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { outValue = getPolarCoords_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { outValue = angleFromFacing_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { outValue = angleBetweenPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { outValue = angleBetweenMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { outValue = angleBetweenTouch_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { outValue = getCartesianCoords_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAngle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAngle_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAngle_obj::__mClass;

static ::String FlxAngle_obj_sStaticFields[] = {
	HX_("wrapAngle",a9,bd,58,c6),
	HX_("asDegrees",d5,18,ce,a6),
	HX_("asRadians",a0,7b,63,93),
	HX_("angleBetween",35,e6,d4,69),
	HX_("angleBetweenPoint",db,9d,50,15),
	HX_("angleBetweenMouse",b0,ff,25,5b),
	HX_("angleBetweenTouch",4a,01,f4,62),
	HX_("angleFromFacing",d7,b1,c0,dc),
	HX_("getCartesianCoords",50,26,de,33),
	HX_("getPolarCoords",86,bd,d4,74),
	HX_("get_TO_DEG",6b,ad,28,42),
	HX_("get_TO_RAD",7a,49,33,42),
	::String(null())
};

void FlxAngle_obj::__register()
{
	FlxAngle_obj _hx_dummy;
	FlxAngle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxAngle",f5,97,d6,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAngle_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAngle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAngle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAngle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAngle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
