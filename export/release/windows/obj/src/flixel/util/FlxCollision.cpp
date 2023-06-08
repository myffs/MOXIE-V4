#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_48_pixelPerfectCheck,"flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",48,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_191_pixelPerfectPointCheck,"flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",191,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_227_createCameraWall,"flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",227,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_25_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",25,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_26_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",26,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_27_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",27,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_28_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",28,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_29_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",29,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_30_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",30,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_31_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",31,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_32_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",32,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_33_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",33,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_34_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",34,0x8c8a7b84)
HX_LOCAL_STACK_FRAME(_hx_pos_86c6328823573729_35_boot,"flixel.util.FlxCollision","boot",0x0a2ef206,"flixel.util.FlxCollision.boot","flixel/util/FlxCollision.hx",35,0x8c8a7b84)
namespace flixel{
namespace util{

void FlxCollision_obj::__construct() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return new FlxCollision_obj; }

void *FlxCollision_obj::_hx_vtable = 0;

Dynamic FlxCollision_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxCollision_obj > _hx_result = new FlxCollision_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxCollision_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x192d8842;
}

 ::flixel::math::FlxPoint FlxCollision_obj::pointA;

 ::flixel::math::FlxPoint FlxCollision_obj::pointB;

 ::flixel::math::FlxPoint FlxCollision_obj::centerA;

 ::flixel::math::FlxPoint FlxCollision_obj::centerB;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixA;

 ::flixel::math::FlxMatrix FlxCollision_obj::matrixB;

 ::flixel::math::FlxMatrix FlxCollision_obj::testMatrix;

 ::flixel::math::FlxRect FlxCollision_obj::boundsA;

 ::flixel::math::FlxRect FlxCollision_obj::boundsB;

 ::flixel::math::FlxRect FlxCollision_obj::intersect;

 ::openfl::geom::Rectangle FlxCollision_obj::flashRect;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact, ::flixel::FlxSprite Target,::hx::Null< int >  __o_AlphaTolerance, ::flixel::FlxCamera Camera){
            		int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_48_pixelPerfectCheck)
HXLINE(  50)		bool advanced;
HXDLIN(  50)		bool advanced1;
HXDLIN(  50)		bool advanced2;
HXDLIN(  50)		bool advanced3;
HXDLIN(  50)		bool advanced4;
HXDLIN(  50)		if ((Contact->angle == 0)) {
HXLINE(  50)			advanced4 = (Target->angle != 0);
            		}
            		else {
HXLINE(  50)			advanced4 = true;
            		}
HXDLIN(  50)		if (!(advanced4)) {
HXLINE(  50)			advanced3 = (Contact->scale->x != 1);
            		}
            		else {
HXLINE(  50)			advanced3 = true;
            		}
HXDLIN(  50)		if (!(advanced3)) {
HXLINE(  50)			advanced2 = (Contact->scale->y != 1);
            		}
            		else {
HXLINE(  50)			advanced2 = true;
            		}
HXDLIN(  50)		if (!(advanced2)) {
HXLINE(  50)			advanced1 = (Target->scale->x != 1);
            		}
            		else {
HXLINE(  50)			advanced1 = true;
            		}
HXDLIN(  50)		if (!(advanced1)) {
HXLINE(  50)			advanced = (Target->scale->y != 1);
            		}
            		else {
HXLINE(  50)			advanced = true;
            		}
HXLINE(  54)		Contact->getScreenBounds(::flixel::util::FlxCollision_obj::boundsA,Camera);
HXLINE(  55)		Target->getScreenBounds(::flixel::util::FlxCollision_obj::boundsB,Camera);
HXLINE(  57)		 ::flixel::math::FlxRect _this = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  57)		_this->x = ( (Float)(0) );
HXDLIN(  57)		_this->y = ( (Float)(0) );
HXDLIN(  57)		_this->width = ( (Float)(0) );
HXDLIN(  57)		_this->height = ( (Float)(0) );
HXDLIN(  57)		::flixel::util::FlxCollision_obj::boundsA->intersection(::flixel::util::FlxCollision_obj::boundsB,_this);
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		 ::flixel::math::FlxRect _this1 = ::flixel::util::FlxCollision_obj::intersect;
HXDLIN(  59)		bool _hx_tmp2;
HXDLIN(  59)		if ((_this1->width != 0)) {
HXLINE(  59)			_hx_tmp2 = (_this1->height == 0);
            		}
            		else {
HXLINE(  59)			_hx_tmp2 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp2)) {
HXLINE(  59)			_hx_tmp1 = (::flixel::util::FlxCollision_obj::intersect->width < 1);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = (::flixel::util::FlxCollision_obj::intersect->height < 1);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  61)			return false;
            		}
HXLINE(  65)		::flixel::util::FlxCollision_obj::matrixA->identity();
HXLINE(  66)		::flixel::util::FlxCollision_obj::matrixA->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y)));
HXLINE(  68)		::flixel::util::FlxCollision_obj::matrixB->identity();
HXLINE(  69)		::flixel::util::FlxCollision_obj::matrixB->translate(-((::flixel::util::FlxCollision_obj::intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x)),-((::flixel::util::FlxCollision_obj::intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y)));
HXLINE(  71)		Contact->drawFrame(null());
HXLINE(  72)		Target->drawFrame(null());
HXLINE(  74)		 ::openfl::display::BitmapData testA = Contact->framePixels;
HXLINE(  75)		 ::openfl::display::BitmapData testB = Target->framePixels;
HXLINE(  77)		int overlapWidth = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->width);
HXLINE(  78)		int overlapHeight = ::Std_obj::_hx_int(::flixel::util::FlxCollision_obj::intersect->height);
HXLINE(  81)		if (advanced) {
HXLINE(  83)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE(  86)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
HXLINE(  89)			::flixel::util::FlxCollision_obj::testMatrix->rotate((Contact->angle * (::Math_obj::PI / ( (Float)(180) ))));
HXLINE(  90)			::flixel::util::FlxCollision_obj::testMatrix->scale(Contact->scale->x,Contact->scale->y);
HXLINE(  93)			::flixel::util::FlxCollision_obj::testMatrix->translate((::flixel::util::FlxCollision_obj::boundsA->width / ( (Float)(2) )),(::flixel::util::FlxCollision_obj::boundsA->height / ( (Float)(2) )));
HXLINE(  97)			 ::openfl::display::BitmapData testA2 = ::flixel::util::FlxBitmapDataPool_obj::get(::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width),::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height),true,0,false);
HXLINE( 100)			testA2->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 101)			testA = testA2;
HXLINE( 104)			::flixel::util::FlxCollision_obj::testMatrix->identity();
HXLINE( 105)			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
HXLINE( 106)			::flixel::util::FlxCollision_obj::testMatrix->rotate((Target->angle * (::Math_obj::PI / ( (Float)(180) ))));
HXLINE( 107)			::flixel::util::FlxCollision_obj::testMatrix->scale(Target->scale->x,Target->scale->y);
HXLINE( 108)			::flixel::util::FlxCollision_obj::testMatrix->translate((::flixel::util::FlxCollision_obj::boundsB->width / ( (Float)(2) )),(::flixel::util::FlxCollision_obj::boundsB->height / ( (Float)(2) )));
HXLINE( 110)			 ::openfl::display::BitmapData testB2 = ::flixel::util::FlxBitmapDataPool_obj::get(::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width),::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height),true,0,false);
HXLINE( 111)			testB2->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
HXLINE( 112)			testB = testB2;
            		}
HXLINE( 115)		::flixel::util::FlxCollision_obj::boundsA->x = ( (Float)(::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->tx))) );
HXLINE( 116)		::flixel::util::FlxCollision_obj::boundsA->y = ( (Float)(::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixA->ty))) );
HXLINE( 117)		::flixel::util::FlxCollision_obj::boundsA->width = ( (Float)(overlapWidth) );
HXLINE( 118)		::flixel::util::FlxCollision_obj::boundsA->height = ( (Float)(overlapHeight) );
HXLINE( 120)		::flixel::util::FlxCollision_obj::boundsB->x = ( (Float)(::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->tx))) );
HXLINE( 121)		::flixel::util::FlxCollision_obj::boundsB->y = ( (Float)(::Std_obj::_hx_int(-(::flixel::util::FlxCollision_obj::matrixB->ty))) );
HXLINE( 122)		::flixel::util::FlxCollision_obj::boundsB->width = ( (Float)(overlapWidth) );
HXLINE( 123)		::flixel::util::FlxCollision_obj::boundsB->height = ( (Float)(overlapHeight) );
HXLINE( 125)		{
HXLINE( 125)			 ::flixel::math::FlxRect _this2 = ::flixel::util::FlxCollision_obj::boundsA;
HXDLIN( 125)			 ::openfl::geom::Rectangle FlashRect = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 125)			if (::hx::IsNull( FlashRect )) {
HXLINE( 125)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 125)			FlashRect->x = _this2->x;
HXDLIN( 125)			FlashRect->y = _this2->y;
HXDLIN( 125)			FlashRect->width = _this2->width;
HXDLIN( 125)			FlashRect->height = _this2->height;
            		}
HXLINE( 126)		 ::openfl::utils::ByteArrayData pixelsA = testA->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 128)		{
HXLINE( 128)			 ::flixel::math::FlxRect _this3 = ::flixel::util::FlxCollision_obj::boundsB;
HXDLIN( 128)			 ::openfl::geom::Rectangle FlashRect1 = ::flixel::util::FlxCollision_obj::flashRect;
HXDLIN( 128)			if (::hx::IsNull( FlashRect1 )) {
HXLINE( 128)				FlashRect1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 128)			FlashRect1->x = _this3->x;
HXDLIN( 128)			FlashRect1->y = _this3->y;
HXDLIN( 128)			FlashRect1->width = _this3->width;
HXDLIN( 128)			FlashRect1->height = _this3->height;
            		}
HXLINE( 129)		 ::openfl::utils::ByteArrayData pixelsB = testB->getPixels(::flixel::util::FlxCollision_obj::flashRect);
HXLINE( 131)		bool hit = false;
HXLINE( 134)		int alphaA = 0;
HXLINE( 135)		int alphaB = 0;
HXLINE( 136)		int overlapPixels = (overlapWidth * overlapHeight);
HXLINE( 137)		int alphaIdx = 0;
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			int _g1 = ::Math_obj::ceil((( (Float)(overlapPixels) ) / ( (Float)(2) )));
HXDLIN( 140)			while((_g < _g1)){
HXLINE( 140)				_g = (_g + 1);
HXDLIN( 140)				int i = (_g - 1);
HXLINE( 142)				alphaIdx = (i << 3);
HXLINE( 143)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 144)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 145)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 147)				bool _hx_tmp;
HXDLIN( 147)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 147)					_hx_tmp = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 147)					_hx_tmp = false;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 149)					hit = true;
HXLINE( 150)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE( 154)		if (!(hit)) {
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			int _g1 = (overlapPixels >> 1);
HXDLIN( 157)			while((_g < _g1)){
HXLINE( 157)				_g = (_g + 1);
HXDLIN( 157)				int i = (_g - 1);
HXLINE( 159)				alphaIdx = ((i << 3) + 4);
HXLINE( 160)				pixelsA->position = (pixelsB->position = alphaIdx);
HXLINE( 161)				alphaA = pixelsA->readUnsignedByte();
HXLINE( 162)				alphaB = pixelsB->readUnsignedByte();
HXLINE( 164)				bool _hx_tmp;
HXDLIN( 164)				if ((alphaA >= AlphaTolerance)) {
HXLINE( 164)					_hx_tmp = (alphaB >= AlphaTolerance);
            				}
            				else {
HXLINE( 164)					_hx_tmp = false;
            				}
HXDLIN( 164)				if (_hx_tmp) {
HXLINE( 166)					hit = true;
HXLINE( 167)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 172)		if (advanced) {
HXLINE( 174)			::flixel::util::FlxBitmapDataPool_obj::put(testA);
HXLINE( 175)			::flixel::util::FlxBitmapDataPool_obj::put(testB);
            		}
HXLINE( 178)		return hit;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck(int PointX,int PointY, ::flixel::FlxSprite Target,::hx::Null< int >  __o_AlphaTolerance){
            		int AlphaTolerance = __o_AlphaTolerance.Default(1);
            	HX_STACKFRAME(&_hx_pos_86c6328823573729_191_pixelPerfectPointCheck)
HXLINE( 193)		int _hx_tmp = ::Math_obj::floor(Target->x);
HXDLIN( 193)		int _hx_tmp1 = ::Math_obj::floor(Target->y);
HXDLIN( 193)		int _hx_tmp2 = ::Std_obj::_hx_int(Target->get_width());
HXDLIN( 193)		if (!(::flixel::math::FlxMath_obj::pointInCoordinates(( (Float)(PointX) ),( (Float)(PointY) ),( (Float)(_hx_tmp) ),( (Float)(_hx_tmp1) ),( (Float)(_hx_tmp2) ),( (Float)(::Std_obj::_hx_int(Target->get_height())) )))) {
HXLINE( 195)			return false;
            		}
HXLINE( 198)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 200)			Target->drawFrame(null());
            		}
HXLINE( 204)		 ::openfl::display::BitmapData test = Target->framePixels;
HXLINE( 206)		int pixelAlpha = ((::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(test->getPixel32(::Math_obj::floor((( (Float)(PointX) ) - Target->x)),::Math_obj::floor((( (Float)(PointY) ) - Target->y)))) >> 24) & 255);
HXLINE( 208)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 210)			pixelAlpha = ::Std_obj::_hx_int((( (Float)(pixelAlpha) ) * Target->alpha));
            		}
HXLINE( 214)		return (pixelAlpha >= AlphaTolerance);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

 ::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,::hx::Null< bool >  __o_PlaceOutside,int Thickness,::hx::Null< bool >  __o_AdjustWorldBounds){
            		bool PlaceOutside = __o_PlaceOutside.Default(true);
            		bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_227_createCameraWall)
HXLINE( 228)		 ::flixel::tile::FlxTileblock left = null();
HXLINE( 229)		 ::flixel::tile::FlxTileblock right = null();
HXLINE( 230)		 ::flixel::tile::FlxTileblock top = null();
HXLINE( 231)		 ::flixel::tile::FlxTileblock bottom = null();
HXLINE( 233)		if (PlaceOutside) {
HXLINE( 235)			left =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor((Camera->x - ( (Float)(Thickness) ))),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * 2)));
HXLINE( 236)			right =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor((Camera->x + Camera->width)),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * 2)));
HXLINE( 237)			top =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor((Camera->x - ( (Float)(Thickness) ))),::Math_obj::floor((Camera->y - ( (Float)(Thickness) ))),(Camera->width + (Thickness * 2)),Thickness);
HXLINE( 238)			bottom =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor((Camera->x - ( (Float)(Thickness) ))),Camera->height,(Camera->width + (Thickness * 2)),Thickness);
HXLINE( 240)			if (AdjustWorldBounds) {
HXLINE( 242)				 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 242)				_this->x = (Camera->x - ( (Float)(Thickness) ));
HXDLIN( 242)				_this->y = (Camera->y - ( (Float)(Thickness) ));
HXDLIN( 242)				_this->width = ( (Float)((Camera->width + (Thickness * 2))) );
HXDLIN( 242)				_this->height = ( (Float)((Camera->height + (Thickness * 2))) );
            			}
            		}
            		else {
HXLINE( 247)			left =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor(Camera->x),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * 2)));
HXLINE( 248)			right =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor(((Camera->x + Camera->width) - ( (Float)(Thickness) ))),::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * 2)));
HXLINE( 250)			top =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor(Camera->x),::Math_obj::floor(Camera->y),Camera->width,Thickness);
HXLINE( 251)			bottom =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,::Math_obj::floor(Camera->x),(Camera->height - Thickness),Camera->width,Thickness);
HXLINE( 253)			if (AdjustWorldBounds) {
HXLINE( 255)				 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 255)				_this->x = Camera->x;
HXDLIN( 255)				_this->y = Camera->y;
HXDLIN( 255)				_this->width = ( (Float)(Camera->width) );
HXDLIN( 255)				_this->height = ( (Float)(Camera->height) );
            			}
            		}
HXLINE( 259)		 ::flixel::group::FlxTypedGroup result =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 261)		result->add(left).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 262)		result->add(right).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 263)		result->add(top).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 264)		result->add(bottom).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 266)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = ( pointA ); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = ( pointB ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = ( centerA ); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = ( centerB ); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = ( matrixA ); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = ( matrixB ); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = ( boundsA ); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = ( boundsB ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = ( intersect ); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = ( flashRect ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = ( testMatrix ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true; }
	}
	return false;
}

bool FlxCollision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { intersect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxCollision_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxCollision_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxCollision_obj::pointA,HX_("pointA",f1,11,2e,f7)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxCollision_obj::pointB,HX_("pointB",f2,11,2e,f7)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxCollision_obj::centerA,HX_("centerA",cc,f4,e5,19)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxCollision_obj::centerB,HX_("centerB",cd,f4,e5,19)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxCollision_obj::matrixA,HX_("matrixA",e0,42,67,93)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxCollision_obj::matrixB,HX_("matrixB",e1,42,67,93)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxCollision_obj::testMatrix,HX_("testMatrix",33,7c,bc,d4)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxCollision_obj::boundsA,HX_("boundsA",2c,20,b8,f3)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxCollision_obj::boundsB,HX_("boundsB",2d,20,b8,f3)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxCollision_obj::intersect,HX_("intersect",df,00,75,42)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxCollision_obj::flashRect,HX_("flashRect",f4,46,51,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxCollision_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxCollision_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#endif

::hx::Class FlxCollision_obj::__mClass;

static ::String FlxCollision_obj_sStaticFields[] = {
	HX_("pointA",f1,11,2e,f7),
	HX_("pointB",f2,11,2e,f7),
	HX_("centerA",cc,f4,e5,19),
	HX_("centerB",cd,f4,e5,19),
	HX_("matrixA",e0,42,67,93),
	HX_("matrixB",e1,42,67,93),
	HX_("testMatrix",33,7c,bc,d4),
	HX_("boundsA",2c,20,b8,f3),
	HX_("boundsB",2d,20,b8,f3),
	HX_("intersect",df,00,75,42),
	HX_("flashRect",f4,46,51,02),
	HX_("pixelPerfectCheck",21,18,e0,ff),
	HX_("pixelPerfectPointCheck",5f,f0,41,df),
	HX_("createCameraWall",6b,04,3e,ea),
	::String(null())
};

void FlxCollision_obj::__register()
{
	FlxCollision_obj _hx_dummy;
	FlxCollision_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxCollision",1a,c3,9f,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCollision_obj::__SetStatic;
	__mClass->mMarkFunc = FlxCollision_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxCollision_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxCollision_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxCollision_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCollision_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCollision_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxCollision_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_25_boot)
HXDLIN(  25)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  25)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_25_boot)
HXDLIN(  25)		pointA = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_26_boot)
HXDLIN(  26)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  26)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_26_boot)
HXDLIN(  26)		pointB = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_27_boot)
HXDLIN(  27)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  27)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_27_boot)
HXDLIN(  27)		centerA = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_28_boot)
HXDLIN(  28)			 ::flixel::math::FlxPoint this1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  28)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_86c6328823573729_28_boot)
HXDLIN(  28)		centerB = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_29_boot)
HXDLIN(  29)		matrixA =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_30_boot)
HXDLIN(  30)		matrixB =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_31_boot)
HXDLIN(  31)		testMatrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_32_boot)
HXDLIN(  32)		boundsA =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_33_boot)
HXDLIN(  33)		boundsB =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_34_boot)
HXDLIN(  34)		intersect =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_86c6328823573729_35_boot)
HXDLIN(  35)		flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace util
