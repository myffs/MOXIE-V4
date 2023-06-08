#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6bf08eba80b23956_26_new,"flixel.addons.ui.FlxUITypedButton","new",0xdcfb6819,"flixel.addons.ui.FlxUITypedButton.new","flixel/addons/ui/FlxUITypedButton.hx",26,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_42_set_toggled,"flixel.addons.ui.FlxUITypedButton","set_toggled",0x8d76c22c,"flixel.addons.ui.FlxUITypedButton.set_toggled","flixel/addons/ui/FlxUITypedButton.hx",42,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_59_get_justMousedOver,"flixel.addons.ui.FlxUITypedButton","get_justMousedOver",0x215ae20f,"flixel.addons.ui.FlxUITypedButton.get_justMousedOver","flixel/addons/ui/FlxUITypedButton.hx",59,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_64_get_justMousedOut,"flixel.addons.ui.FlxUITypedButton","get_justMousedOut",0xc7e60033,"flixel.addons.ui.FlxUITypedButton.get_justMousedOut","flixel/addons/ui/FlxUITypedButton.hx",64,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_69_get_mouseIsOver,"flixel.addons.ui.FlxUITypedButton","get_mouseIsOver",0xcad20b33,"flixel.addons.ui.FlxUITypedButton.get_mouseIsOver","flixel/addons/ui/FlxUITypedButton.hx",69,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_74_get_mouseIsOut,"flixel.addons.ui.FlxUITypedButton","get_mouseIsOut",0xe8cd478f,"flixel.addons.ui.FlxUITypedButton.get_mouseIsOut","flixel/addons/ui/FlxUITypedButton.hx",74,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_98_set_toggle_label,"flixel.addons.ui.FlxUITypedButton","set_toggle_label",0x2a641e6d,"flixel.addons.ui.FlxUITypedButton.set_toggle_label","flixel/addons/ui/FlxUITypedButton.hx",98,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_108_set_visible,"flixel.addons.ui.FlxUITypedButton","set_visible",0x6497584e,"flixel.addons.ui.FlxUITypedButton.set_visible","flixel/addons/ui/FlxUITypedButton.hx",108,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_128_set_skipButtonUpdate,"flixel.addons.ui.FlxUITypedButton","set_skipButtonUpdate",0xb2aa475e,"flixel.addons.ui.FlxUITypedButton.set_skipButtonUpdate","flixel/addons/ui/FlxUITypedButton.hx",128,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_136_set_params,"flixel.addons.ui.FlxUITypedButton","set_params",0x0e7dcaea,"flixel.addons.ui.FlxUITypedButton.set_params","flixel/addons/ui/FlxUITypedButton.hx",136,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_142_destroy,"flixel.addons.ui.FlxUITypedButton","destroy",0xe7669533,"flixel.addons.ui.FlxUITypedButton.destroy","flixel/addons/ui/FlxUITypedButton.hx",142,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_173_graphicLoaded,"flixel.addons.ui.FlxUITypedButton","graphicLoaded",0x3b865dc6,"flixel.addons.ui.FlxUITypedButton.graphicLoaded","flixel/addons/ui/FlxUITypedButton.hx",173,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_188_copyGraphic,"flixel.addons.ui.FlxUITypedButton","copyGraphic",0xfb27502c,"flixel.addons.ui.FlxUITypedButton.copyGraphic","flixel/addons/ui/FlxUITypedButton.hx",188,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_226_copyStyle,"flixel.addons.ui.FlxUITypedButton","copyStyle",0x940e71b5,"flixel.addons.ui.FlxUITypedButton.copyStyle","flixel/addons/ui/FlxUITypedButton.hx",226,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_267_setAllLabelOffsets,"flixel.addons.ui.FlxUITypedButton","setAllLabelOffsets",0x57424f92,"flixel.addons.ui.FlxUITypedButton.setAllLabelOffsets","flixel/addons/ui/FlxUITypedButton.hx",267,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_274_update,"flixel.addons.ui.FlxUITypedButton","update",0x163ec7f0,"flixel.addons.ui.FlxUITypedButton.update","flixel/addons/ui/FlxUITypedButton.hx",274,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_309_updateStatusAnimation,"flixel.addons.ui.FlxUITypedButton","updateStatusAnimation",0xbd8e1f62,"flixel.addons.ui.FlxUITypedButton.updateStatusAnimation","flixel/addons/ui/FlxUITypedButton.hx",309,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_323_draw,"flixel.addons.ui.FlxUITypedButton","draw",0x786d562b,"flixel.addons.ui.FlxUITypedButton.draw","flixel/addons/ui/FlxUITypedButton.hx",323,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_334_resize,"flixel.addons.ui.FlxUITypedButton","resize",0x97b49bdb,"flixel.addons.ui.FlxUITypedButton.resize","flixel/addons/ui/FlxUITypedButton.hx",334,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_338_doResize,"flixel.addons.ui.FlxUITypedButton","doResize",0x5e0da986,"flixel.addons.ui.FlxUITypedButton.doResize","flixel/addons/ui/FlxUITypedButton.hx",338,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_415_getBmp,"flixel.addons.ui.FlxUITypedButton","getBmp",0x32533736,"flixel.addons.ui.FlxUITypedButton.getBmp","flixel/addons/ui/FlxUITypedButton.hx",415,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_424_loadGraphicsMultiple,"flixel.addons.ui.FlxUITypedButton","loadGraphicsMultiple",0x389aa468,"flixel.addons.ui.FlxUITypedButton.loadGraphicsMultiple","flixel/addons/ui/FlxUITypedButton.hx",424,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_504_loadGraphicsUpOverDown,"flixel.addons.ui.FlxUITypedButton","loadGraphicsUpOverDown",0xbee26da9,"flixel.addons.ui.FlxUITypedButton.loadGraphicsUpOverDown","flixel/addons/ui/FlxUITypedButton.hx",504,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_579_loadGraphicSlice9,"flixel.addons.ui.FlxUITypedButton","loadGraphicSlice9",0xb9685fe2,"flixel.addons.ui.FlxUITypedButton.loadGraphicSlice9","flixel/addons/ui/FlxUITypedButton.hx",579,0x55608c36)
static const int _hx_array_data_221567a7_42[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,
};
static const int _hx_array_data_221567a7_43[] = {
	(int)0,(int)1,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_928_autoCenterLabel,"flixel.addons.ui.FlxUITypedButton","autoCenterLabel",0x5cc27de9,"flixel.addons.ui.FlxUITypedButton.autoCenterLabel","flixel/addons/ui/FlxUITypedButton.hx",928,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_953_setCenterLabelOffset,"flixel.addons.ui.FlxUITypedButton","setCenterLabelOffset",0x7858e6f7,"flixel.addons.ui.FlxUITypedButton.setCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",953,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_960_getCenterLabelOffset,"flixel.addons.ui.FlxUITypedButton","getCenterLabelOffset",0xaba12f83,"flixel.addons.ui.FlxUITypedButton.getCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",960,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_965_forceStateHandler,"flixel.addons.ui.FlxUITypedButton","forceStateHandler",0xa487b1bd,"flixel.addons.ui.FlxUITypedButton.forceStateHandler","flixel/addons/ui/FlxUITypedButton.hx",965,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_991_grabButtonFrame,"flixel.addons.ui.FlxUITypedButton","grabButtonFrame",0x214d85a8,"flixel.addons.ui.FlxUITypedButton.grabButtonFrame","flixel/addons/ui/FlxUITypedButton.hx",991,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1058_combineToggleBitmaps,"flixel.addons.ui.FlxUITypedButton","combineToggleBitmaps",0xea818e98,"flixel.addons.ui.FlxUITypedButton.combineToggleBitmaps","flixel/addons/ui/FlxUITypedButton.hx",1058,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1074_assembleButtonFrames,"flixel.addons.ui.FlxUITypedButton","assembleButtonFrames",0x4be9f791,"flixel.addons.ui.FlxUITypedButton.assembleButtonFrames","flixel/addons/ui/FlxUITypedButton.hx",1074,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1112_updateButton,"flixel.addons.ui.FlxUITypedButton","updateButton",0x92a23202,"flixel.addons.ui.FlxUITypedButton.updateButton","flixel/addons/ui/FlxUITypedButton.hx",1112,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1119_addToCleanup,"flixel.addons.ui.FlxUITypedButton","addToCleanup",0x93288eaf,"flixel.addons.ui.FlxUITypedButton.addToCleanup","flixel/addons/ui/FlxUITypedButton.hx",1119,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1131_cleanup,"flixel.addons.ui.FlxUITypedButton","cleanup",0x6e22745d,"flixel.addons.ui.FlxUITypedButton.cleanup","flixel/addons/ui/FlxUITypedButton.hx",1131,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1143_fetchAndShowCorrectLabel,"flixel.addons.ui.FlxUITypedButton","fetchAndShowCorrectLabel",0x9f7daa4b,"flixel.addons.ui.FlxUITypedButton.fetchAndShowCorrectLabel","flixel/addons/ui/FlxUITypedButton.hx",1143,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1166_onUpHandler,"flixel.addons.ui.FlxUITypedButton","onUpHandler",0xd4dc1e49,"flixel.addons.ui.FlxUITypedButton.onUpHandler","flixel/addons/ui/FlxUITypedButton.hx",1166,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1190_onDownHandler,"flixel.addons.ui.FlxUITypedButton","onDownHandler",0xf48785a2,"flixel.addons.ui.FlxUITypedButton.onDownHandler","flixel/addons/ui/FlxUITypedButton.hx",1190,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1209_onOverHandler,"flixel.addons.ui.FlxUITypedButton","onOverHandler",0xcfefcef0,"flixel.addons.ui.FlxUITypedButton.onOverHandler","flixel/addons/ui/FlxUITypedButton.hx",1209,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1229_onOutHandler,"flixel.addons.ui.FlxUITypedButton","onOutHandler",0x57e35002,"flixel.addons.ui.FlxUITypedButton.onOutHandler","flixel/addons/ui/FlxUITypedButton.hx",1229,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1249_set_x,"flixel.addons.ui.FlxUITypedButton","set_x",0x81b75354,"flixel.addons.ui.FlxUITypedButton.set_x","flixel/addons/ui/FlxUITypedButton.hx",1249,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_1270_set_y,"flixel.addons.ui.FlxUITypedButton","set_y",0x81b75355,"flixel.addons.ui.FlxUITypedButton.set_y","flixel/addons/ui/FlxUITypedButton.hx",1270,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_120_boot,"flixel.addons.ui.FlxUITypedButton","boot",0x7718ae59,"flixel.addons.ui.FlxUITypedButton.boot","flixel/addons/ui/FlxUITypedButton.hx",120,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_121_boot,"flixel.addons.ui.FlxUITypedButton","boot",0x7718ae59,"flixel.addons.ui.FlxUITypedButton.boot","flixel/addons/ui/FlxUITypedButton.hx",121,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_122_boot,"flixel.addons.ui.FlxUITypedButton","boot",0x7718ae59,"flixel.addons.ui.FlxUITypedButton.boot","flixel/addons/ui/FlxUITypedButton.hx",122,0x55608c36)
HX_LOCAL_STACK_FRAME(_hx_pos_6bf08eba80b23956_123_boot,"flixel.addons.ui.FlxUITypedButton","boot",0x7718ae59,"flixel.addons.ui.FlxUITypedButton.boot","flixel/addons/ui/FlxUITypedButton.hx",123,0x55608c36)
namespace flixel{
namespace addons{
namespace ui{

void FlxUITypedButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_26_new)
HXLINE(1307)		this->_centerLabelOffset = null();
HXLINE(1298)		this->_src_h = 0;
HXLINE(1296)		this->_src_w = 0;
HXLINE(1294)		this->_no_graphic = false;
HXLINE(1292)		this->_assetsToCleanup = ::Array_obj< ::String >::__new(0);
HXLINE(1290)		this->_autoCleanup = true;
HXLINE( 148)		this->autoResizeLabel = false;
HXLINE( 125)		this->skipButtonUpdate = false;
HXLINE( 118)		this->round_labels = true;
HXLINE(  93)		this->down_toggle_visible = true;
HXLINE(  92)		this->over_toggle_visible = true;
HXLINE(  91)		this->up_toggle_visible = true;
HXLINE(  89)		this->down_visible = true;
HXLINE(  88)		this->over_visible = true;
HXLINE(  87)		this->up_visible = true;
HXLINE(  85)		this->down_toggle_color = null();
HXLINE(  84)		this->over_toggle_color = null();
HXLINE(  83)		this->up_toggle_color = null();
HXLINE(  81)		this->down_color = null();
HXLINE(  80)		this->over_color = null();
HXLINE(  79)		this->up_color = null();
HXLINE(  48)		this->broadcastToFlxUI = true;
HXLINE(  39)		this->toggled = false;
HXLINE(  38)		this->has_toggle = false;
HXLINE(  36)		this->tile = 0;
HXLINE(  35)		this->resize_point = null();
HXLINE(  33)		this->resize_ratio_axis = 1;
HXLINE(  30)		this->resize_ratio = ((Float)-1);
HXLINE( 159)		super::__construct(X,Y,OnClick);
HXLINE( 161)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 161)		point->_inPool = false;
HXDLIN( 161)		this->_centerLabelOffset = point;
HXLINE( 163)		this->statusAnimations[3] = HX_("normal_toggled",f8,ac,ae,ea);
HXLINE( 164)		this->statusAnimations[4] = HX_("highlight_toggled",05,e6,0b,e5);
HXLINE( 165)		this->statusAnimations[5] = HX_("pressed_toggled",73,80,89,1a);
HXLINE( 167)		::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 167)		{
HXLINE( 167)			_g->push(1);
HXDLIN( 167)			_g->push(1);
HXDLIN( 167)			_g->push(1);
            		}
HXDLIN( 167)		this->labelAlphas = _g;
HXLINE( 169)		this->inputOver =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,0);
            	}

Dynamic FlxUITypedButton_obj::__CreateEmpty() { return new FlxUITypedButton_obj; }

void *FlxUITypedButton_obj::_hx_vtable = 0;

Dynamic FlxUITypedButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUITypedButton_obj > _hx_result = new FlxUITypedButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxUITypedButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b3699ba) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x2a6d0b59) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2a6d0b59;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x6b3699ba;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::addons::ui::interfaces::IFlxUIButton_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIButton= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::destroy,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_toggled,
	(  ::flixel::FlxSprite (::hx::Object::*)( ::flixel::FlxSprite))&::flixel::addons::ui::FlxUITypedButton_obj::set_toggle_label,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_justMousedOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_mouseIsOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_mouseIsOut,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_justMousedOut,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUITypedButton_obj::set_status,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::autoCenterLabel,
	( void (::hx::Object::*)(::cpp::VirtualArray,::hx::Null< int > ,::hx::Null< int > ,::Array< ::Dynamic>,::hx::Null< int > ,::hx::Null< Float > ,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< int > ,::Array< int >))&::flixel::addons::ui::FlxUITypedButton_obj::loadGraphicSlice9,
	( void (::hx::Object::*)(::cpp::VirtualArray,::String))&::flixel::addons::ui::FlxUITypedButton_obj::loadGraphicsMultiple,
	( void (::hx::Object::*)( ::Dynamic,::hx::Null< bool > ,::String))&::flixel::addons::ui::FlxUITypedButton_obj::loadGraphicsUpOverDown,
	( void (::hx::Object::*)(::String))&::flixel::addons::ui::FlxUITypedButton_obj::forceStateHandler,
};

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUITypedButton_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITypedButton_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUITypedButton_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::toString,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::destroy,
};

static ::flixel::addons::ui::interfaces::ICursorPointable_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_ICursorPointable= {
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUITypedButton_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITypedButton_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUITypedButton_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUITypedButton_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITypedButton_obj::set_skipButtonUpdate,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITypedButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITypedButton_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITypedButton_obj::resize,
};

void *FlxUITypedButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x2772d80c: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIButton;
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_IFlxBasic;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_util_IFlxDestroyable;
		case (int)0x82c13468: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_ICursorPointable;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x3e998408: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUITypedButton__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

bool FlxUITypedButton_obj::set_toggled(bool b){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_42_set_toggled)
HXLINE(  43)		this->toggled = b;
HXLINE(  44)		this->updateStatusAnimation();
HXLINE(  45)		return this->toggled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_toggled,return )

bool FlxUITypedButton_obj::get_justMousedOver(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_59_get_justMousedOver)
HXDLIN(  59)		return (this->inputOver->current == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,get_justMousedOver,return )

bool FlxUITypedButton_obj::get_justMousedOut(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_64_get_justMousedOut)
HXDLIN(  64)		return (this->inputOver->current == -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,get_justMousedOut,return )

bool FlxUITypedButton_obj::get_mouseIsOver(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_69_get_mouseIsOver)
HXDLIN(  69)		 ::flixel::input::FlxInput _this = this->inputOver;
HXDLIN(  69)		if ((_this->current != 1)) {
HXDLIN(  69)			return (_this->current == 2);
            		}
            		else {
HXDLIN(  69)			return true;
            		}
HXDLIN(  69)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,get_mouseIsOver,return )

bool FlxUITypedButton_obj::get_mouseIsOut(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_74_get_mouseIsOut)
HXDLIN(  74)		 ::flixel::input::FlxInput _this = this->inputOver;
HXDLIN(  74)		if ((_this->current != 0)) {
HXDLIN(  74)			return (_this->current == -1);
            		}
            		else {
HXDLIN(  74)			return true;
            		}
HXDLIN(  74)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,get_mouseIsOut,return )

 ::flixel::FlxSprite FlxUITypedButton_obj::set_toggle_label( ::flixel::FlxSprite f){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_98_set_toggle_label)
HXLINE(  99)		if (::hx::IsNotNull( this->label )) {
HXLINE( 101)			this->toggle_label = f;
HXLINE( 102)			return this->toggle_label;
            		}
HXLINE( 104)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_toggle_label,return )

bool FlxUITypedButton_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_108_set_visible)
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		if (this->visible) {
HXLINE( 109)			_hx_tmp = (Value == false);
            		}
            		else {
HXLINE( 109)			_hx_tmp = false;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 111)			this->inputOver->release();
            		}
HXLINE( 113)		return this->super::set_visible(Value);
            	}


bool FlxUITypedButton_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_128_set_skipButtonUpdate)
HXLINE( 129)		this->skipButtonUpdate = b;
HXLINE( 130)		return this->skipButtonUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_skipButtonUpdate,return )

::cpp::VirtualArray FlxUITypedButton_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_136_set_params)
HXLINE( 137)		this->params = p;
HXLINE( 138)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_params,return )

void FlxUITypedButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_142_destroy)
HXLINE( 143)		this->resize_point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->resize_point)) );
HXLINE( 144)		this->super::destroy();
            	}


void FlxUITypedButton_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_173_graphicLoaded)
HXLINE( 174)		this->super::graphicLoaded();
HXLINE( 176)		this->setupAnimation(HX_("normal_toggled",f8,ac,ae,ea),3);
HXLINE( 177)		this->setupAnimation(HX_("highlight_toggled",05,e6,0b,e5),4);
HXLINE( 178)		this->setupAnimation(HX_("pressed_toggled",73,80,89,1a),5);
HXLINE( 180)		if (this->_autoCleanup) {
HXLINE( 182)			this->cleanup();
            		}
            	}


void FlxUITypedButton_obj::copyGraphic( ::flixel::addons::ui::FlxUITypedButton other){
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_188_copyGraphic)
HXLINE( 189)		this->_src_w = other->_src_w;
HXLINE( 190)		this->_src_h = other->_src_h;
HXLINE( 191)		this->_frame_indeces = ::flixel::addons::ui::U_obj::copy_shallow_arr_i(other->_frame_indeces);
HXLINE( 192)		this->tile = other->tile;
HXLINE( 193)		this->resize_ratio = other->resize_ratio;
HXLINE( 195)		if (::hx::IsNull( other->_centerLabelOffset )) {
HXLINE( 197)			this->_centerLabelOffset = null();
            		}
            		else {
HXLINE( 201)			this->_centerLabelOffset =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,other->_centerLabelOffset->x,other->_centerLabelOffset->y);
            		}
HXLINE( 204)		this->_no_graphic = other->_no_graphic;
HXLINE( 206)		if (::hx::IsNotNull( other->_slice9_arrays )) {
HXLINE( 208)			this->_slice9_arrays = other->_slice9_arrays->copy();
            		}
HXLINE( 210)		if (::hx::IsNotNull( other->_slice9_assets )) {
HXLINE( 212)			this->_slice9_assets = other->_slice9_assets->copy();
            		}
HXLINE( 215)		bool _hx_tmp;
HXDLIN( 215)		if (::hx::IsNotNull( this->_slice9_arrays )) {
HXLINE( 215)			_hx_tmp = ::hx::IsNull( this->_slice9_assets );
            		}
            		else {
HXLINE( 215)			_hx_tmp = true;
            		}
HXDLIN( 215)		if (_hx_tmp) {
HXLINE( 217)			 ::flixel::graphics::FlxGraphic other1 = other->graphic;
HXDLIN( 217)			int _hx_tmp = ( (int)(other->get_width()) );
HXDLIN( 217)			this->loadGraphic(other1,true,_hx_tmp,( (int)(other->get_height()) ),null(),null());
            		}
            		else {
HXLINE( 221)			Float _hx_tmp = other->get_width();
HXDLIN( 221)			this->resize(_hx_tmp,other->get_height());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,copyGraphic,(void))

void FlxUITypedButton_obj::copyStyle( ::flixel::addons::ui::FlxUITypedButton other){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_226_copyStyle)
HXLINE( 227)		this->up_color = other->up_color;
HXLINE( 228)		this->over_color = other->over_color;
HXLINE( 229)		this->down_color = other->down_color;
HXLINE( 231)		this->up_toggle_color = other->up_toggle_color;
HXLINE( 232)		this->over_toggle_color = other->over_toggle_color;
HXLINE( 233)		this->down_toggle_color = other->over_toggle_color;
HXLINE( 235)		this->up_visible = other->up_visible;
HXLINE( 236)		this->over_visible = other->over_visible;
HXLINE( 237)		this->down_visible = other->down_visible;
HXLINE( 239)		this->up_toggle_visible = other->up_toggle_visible;
HXLINE( 240)		this->over_toggle_visible = other->over_toggle_visible;
HXLINE( 241)		this->down_toggle_visible = other->down_toggle_visible;
HXLINE( 243)		 ::flixel::math::FlxPoint ctPt = other->getCenterLabelOffset();
HXLINE( 244)		this->setCenterLabelOffset(ctPt->x,ctPt->y);
HXLINE( 246)		int i = 0;
HXLINE( 247)		{
HXLINE( 247)			int _g = 0;
HXDLIN( 247)			::Array< ::Dynamic> _g1 = other->labelOffsets;
HXDLIN( 247)			while((_g < _g1->length)){
HXLINE( 247)				 ::flixel::math::FlxPoint flxPt = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 247)				_g = (_g + 1);
HXLINE( 249)				this->labelOffsets->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->set_x(flxPt->x);
HXLINE( 250)				this->labelOffsets->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->set_y(flxPt->y);
HXLINE( 251)				i = (i + 1);
            			}
            		}
HXLINE( 254)		i = 0;
HXLINE( 255)		{
HXLINE( 255)			int _g2 = 0;
HXDLIN( 255)			::Array< Float > _g3 = other->labelAlphas;
HXDLIN( 255)			while((_g2 < _g3->length)){
HXLINE( 255)				Float alpha = _g3->__get(_g2);
HXDLIN( 255)				_g2 = (_g2 + 1);
HXLINE( 257)				this->labelAlphas[i] = alpha;
HXLINE( 258)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,copyStyle,(void))

void FlxUITypedButton_obj::setAllLabelOffsets(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_267_setAllLabelOffsets)
HXDLIN( 267)		int _g = 0;
HXDLIN( 267)		::Array< ::Dynamic> _g1 = this->labelOffsets;
HXDLIN( 267)		while((_g < _g1->length)){
HXDLIN( 267)			 ::flixel::math::FlxPoint labelOffset = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 267)			_g = (_g + 1);
HXLINE( 269)			labelOffset->set(X,Y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setAllLabelOffsets,(void))

void FlxUITypedButton_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_274_update)
HXLINE( 275)		this->super::update(elapsed);
HXLINE( 277)		bool _hx_tmp;
HXDLIN( 277)		bool _hx_tmp1;
HXDLIN( 277)		if ((this->status == 0)) {
HXLINE( 277)			 ::flixel::input::FlxInput _this = this->inputOver;
HXDLIN( 277)			if ((_this->current != 1)) {
HXLINE( 277)				_hx_tmp1 = (_this->current == 2);
            			}
            			else {
HXLINE( 277)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 277)			_hx_tmp1 = false;
            		}
HXDLIN( 277)		if (_hx_tmp1) {
HXLINE( 277)			_hx_tmp = ((this->input->current == -1) == false);
            		}
            		else {
HXLINE( 277)			_hx_tmp = false;
            		}
HXDLIN( 277)		if (_hx_tmp) {
HXLINE( 282)			this->inputOver->release();
            		}
HXLINE( 285)		this->inputOver->update();
HXLINE( 288)		if (::hx::IsNotNull( this->label )) {
HXLINE( 290)			 ::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();
HXLINE( 291)			theLabel->set_x(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxPoint >()->x));
HXLINE( 292)			theLabel->set_y(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxPoint >()->y));
HXLINE( 294)			if (this->round_labels) {
HXLINE( 296)				theLabel->set_x(( (Float)(::Std_obj::_hx_int((theLabel->x + ((Float)0.5)))) ));
HXLINE( 297)				theLabel->set_y(( (Float)(::Std_obj::_hx_int((theLabel->y + ((Float)0.5)))) ));
            			}
HXLINE( 300)			theLabel->scrollFactor = this->scrollFactor;
            		}
            	}


void FlxUITypedButton_obj::updateStatusAnimation(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_309_updateStatusAnimation)
HXDLIN( 309)		bool _hx_tmp;
HXDLIN( 309)		if (this->has_toggle) {
HXDLIN( 309)			_hx_tmp = this->toggled;
            		}
            		else {
HXDLIN( 309)			_hx_tmp = false;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 311)			this->animation->play(this->statusAnimations->__get((this->status + 3)),null(),null(),null());
            		}
            		else {
HXLINE( 315)			this->super::updateStatusAnimation();
            		}
            	}


void FlxUITypedButton_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_323_draw)
HXLINE( 324)		this->super::draw();
HXLINE( 325)		bool _hx_tmp;
HXDLIN( 325)		bool _hx_tmp1;
HXDLIN( 325)		bool _hx_tmp2;
HXDLIN( 325)		if (this->has_toggle) {
HXLINE( 325)			_hx_tmp2 = this->toggled;
            		}
            		else {
HXLINE( 325)			_hx_tmp2 = false;
            		}
HXDLIN( 325)		if (_hx_tmp2) {
HXLINE( 325)			_hx_tmp1 = ::hx::IsNotNull( this->toggle_label );
            		}
            		else {
HXLINE( 325)			_hx_tmp1 = false;
            		}
HXDLIN( 325)		if (_hx_tmp1) {
HXLINE( 325)			_hx_tmp = (this->toggle_label->visible == true);
            		}
            		else {
HXLINE( 325)			_hx_tmp = false;
            		}
HXDLIN( 325)		if (_hx_tmp) {
HXLINE( 327)			 ::flixel::FlxSprite _hx_tmp = this->toggle_label;
HXDLIN( 327)			_hx_tmp->set_cameras(this->get_cameras());
HXLINE( 328)			this->toggle_label->draw();
            		}
            	}


void FlxUITypedButton_obj::resize(Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_334_resize)
HXDLIN( 334)		this->doResize(W,H,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,resize,(void))

void FlxUITypedButton_obj::doResize(Float W,Float H,::hx::Null< bool >  __o_Redraw){
            		bool Redraw = __o_Redraw.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_338_doResize)
HXLINE( 339)		Float old_width = this->get_width();
HXLINE( 340)		Float old_height = this->get_height();
HXLINE( 342)		Float label_diffx = ( (Float)(0) );
HXLINE( 343)		Float label_diffy = ( (Float)(0) );
HXLINE( 344)		if (::hx::IsNotNull( this->label )) {
HXLINE( 346)			Float label_diffx1 = this->get_width();
HXDLIN( 346)			label_diffx = (label_diffx1 - this->_spriteLabel->get_width());
HXLINE( 347)			Float label_diffy1 = this->get_height();
HXDLIN( 347)			label_diffy = (label_diffy1 - this->_spriteLabel->get_height());
            		}
HXLINE( 350)		if ((W <= 0)) {
HXLINE( 352)			W = ( (Float)(80) );
            		}
HXLINE( 354)		if ((H <= 0)) {
HXLINE( 356)			H = ( (Float)(20) );
            		}
HXLINE( 359)		if (Redraw) {
HXLINE( 361)			if (::hx::IsNotNull( this->_slice9_assets )) {
HXLINE( 363)				::cpp::VirtualArray _hx_tmp = this->_slice9_assets;
HXDLIN( 363)				int _hx_tmp1 = ::Std_obj::_hx_int(W);
HXDLIN( 363)				int _hx_tmp2 = ::Std_obj::_hx_int(H);
HXDLIN( 363)				this->loadGraphicSlice9(_hx_tmp,_hx_tmp1,_hx_tmp2,this->_slice9_arrays,this->tile,this->resize_ratio,this->has_toggle,this->_src_w,this->_src_h,this->_frame_indeces);
            			}
            			else {
HXLINE( 367)				if (this->_no_graphic) {
HXLINE( 369)					 ::openfl::display::BitmapData upB;
HXLINE( 370)					if (!(this->has_toggle)) {
HXLINE( 372)						int upB1 = ::Std_obj::_hx_int(W);
HXDLIN( 372)						upB =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,upB1,::Std_obj::_hx_int((H * ( (Float)(3) ))),true,0);
            					}
            					else {
HXLINE( 376)						int upB1 = ::Std_obj::_hx_int(W);
HXDLIN( 376)						upB =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,upB1,::Std_obj::_hx_int((H * ( (Float)(6) ))),true,0);
            					}
HXLINE( 378)					this->loadGraphicsUpOverDown(upB,null(),null());
            				}
            				else {
HXLINE( 383)					int _hx_tmp = ::Std_obj::_hx_int(W);
HXDLIN( 383)					int _hx_tmp1 = ::Std_obj::_hx_int(H);
HXDLIN( 383)					this->loadGraphicSlice9(null(),_hx_tmp,_hx_tmp1,null(),this->tile,null(),null(),null(),null(),null());
            				}
            			}
            		}
HXLINE( 388)		bool _hx_tmp;
HXDLIN( 388)		if (::hx::IsNotNull( this->label )) {
HXLINE( 388)			_hx_tmp = this->autoResizeLabel;
            		}
            		else {
HXLINE( 388)			_hx_tmp = false;
            		}
HXDLIN( 388)		if (_hx_tmp) {
HXLINE( 390)			if (::Std_obj::isOfType(this->label,::hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >())) {
HXLINE( 392)				Float targetW = (W - label_diffx);
HXLINE( 393)				Float targetH = (H - label_diffy);
HXLINE( 394)				::Dynamic ir = this->label;
HXLINE( 395)				::flixel::addons::ui::interfaces::IResizable_obj::resize(ir,targetW,targetH);
            			}
            		}
HXLINE( 399)		this->autoCenterLabel();
HXLINE( 401)		Float diff_w = (this->get_width() - old_width);
HXLINE( 402)		Float diff_h = (this->get_height() - old_height);
HXLINE( 404)		if (::hx::IsNotNull( this->resize_point )) {
HXLINE( 406)			Float delta_x = (diff_w * this->resize_point->x);
HXLINE( 407)			Float delta_y = (diff_h * this->resize_point->y);
HXLINE( 408)			this->set_x((this->x - delta_x));
HXLINE( 409)			this->set_y((this->y - delta_y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,doResize,(void))

 ::openfl::display::BitmapData FlxUITypedButton_obj::getBmp( ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_415_getBmp)
HXDLIN( 415)		return ::flixel::addons::ui::U_obj::getBmp(asset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,getBmp,return )

void FlxUITypedButton_obj::loadGraphicsMultiple(::cpp::VirtualArray assets,::String __o_Key){
            		::String Key = __o_Key;
            		if (::hx::IsNull(__o_Key)) Key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_424_loadGraphicsMultiple)
HXLINE( 425)		this->_slice9_assets = null();
HXLINE( 426)		this->_slice9_arrays = null();
HXLINE( 427)		this->resize_ratio = ( (Float)(-1) );
HXLINE( 429)		::String key = HX_("",00,00,00,00);
HXLINE( 431)		if ((assets->get_length() <= 3)) {
HXLINE( 433)			while((assets->get_length() < 3)){
HXLINE( 435)				assets->push(null());
            			}
HXLINE( 437)			if (::hx::IsNull( assets->__get(1) )) {
HXLINE( 439)				assets->set(1,assets->__get(0));
            			}
HXLINE( 441)			if (::hx::IsNull( assets->__get(2) )) {
HXLINE( 443)				assets->set(2,assets->__get(1));
            			}
HXLINE( 445)			key = assets->join(HX_(",",2c,00,00,00));
HXLINE( 446)			if ((Key != HX_("",00,00,00,00))) {
HXLINE( 448)				key = Key;
            			}
HXLINE( 451)			if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ) )) {
HXLINE( 453)				this->loadGraphicsUpOverDown(key,false,key);
            			}
            			else {
HXLINE( 457)				 ::openfl::display::BitmapData pixels = this->getBmp(assets->__get(0));
HXDLIN( 457)				 ::openfl::display::BitmapData pixels1 = this->getBmp(assets->__get(1));
HXDLIN( 457)				 ::openfl::display::BitmapData pixels2 = this->assembleButtonFrames(pixels,pixels1,this->getBmp(assets->__get(2)));
HXLINE( 458)				this->loadGraphicsUpOverDown(pixels2,false,key);
            			}
            		}
            		else {
HXLINE( 461)			if ((assets->get_length() <= 6)) {
HXLINE( 463)				while((assets->get_length() < 6)){
HXLINE( 465)					assets->push(null());
            				}
HXLINE( 467)				if (::hx::IsNull( assets->__get(4) )) {
HXLINE( 469)					assets->set(4,assets->__get(3));
            				}
HXLINE( 471)				if (::hx::IsNull( assets->__get(5) )) {
HXLINE( 473)					assets->set(5,assets->__get(4));
            				}
HXLINE( 475)				key = assets->join(HX_(",",2c,00,00,00));
HXLINE( 476)				if ((Key != HX_("",00,00,00,00))) {
HXLINE( 478)					key = Key;
            				}
HXLINE( 481)				if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ) )) {
HXLINE( 483)					this->loadGraphicsUpOverDown(key,true,key);
            				}
            				else {
HXLINE( 487)					 ::openfl::display::BitmapData pixels_normal = this->getBmp(assets->__get(0));
HXDLIN( 487)					 ::openfl::display::BitmapData pixels_normal1 = this->getBmp(assets->__get(1));
HXDLIN( 487)					 ::openfl::display::BitmapData pixels_normal2 = this->assembleButtonFrames(pixels_normal,pixels_normal1,this->getBmp(assets->__get(2)));
HXLINE( 488)					 ::openfl::display::BitmapData pixels_toggle = this->getBmp(assets->__get(3));
HXDLIN( 488)					 ::openfl::display::BitmapData pixels_toggle1 = this->getBmp(assets->__get(4));
HXDLIN( 488)					 ::openfl::display::BitmapData pixels_toggle2 = this->assembleButtonFrames(pixels_toggle,pixels_toggle1,this->getBmp(assets->__get(5)));
HXLINE( 489)					 ::openfl::display::BitmapData pixels = this->combineToggleBitmaps(pixels_normal2,pixels_toggle2);
HXLINE( 490)					this->loadGraphicsUpOverDown(pixels,true,key);
HXLINE( 491)					pixels_normal2->dispose();
HXLINE( 492)					pixels_toggle2->dispose();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,loadGraphicsMultiple,(void))

void FlxUITypedButton_obj::loadGraphicsUpOverDown( ::Dynamic asset,::hx::Null< bool >  __o_for_toggle,::String key){
            		bool for_toggle = __o_for_toggle.Default(false);
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_504_loadGraphicsUpOverDown)
HXLINE( 505)		this->_slice9_assets = null();
HXLINE( 506)		this->_slice9_arrays = null();
HXLINE( 507)		this->resize_ratio = ( (Float)(-1) );
HXLINE( 509)		if (for_toggle) {
HXLINE( 511)			this->has_toggle = true;
            		}
HXLINE( 514)		 ::openfl::display::BitmapData upB = null();
HXLINE( 515)		 ::openfl::display::BitmapData overB = null();
HXLINE( 516)		 ::openfl::display::BitmapData downB = null();
HXLINE( 518)		 ::openfl::display::BitmapData bd = null();
HXLINE( 520)		if (::Std_obj::isOfType(asset,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 522)			bd = ( ( ::openfl::display::BitmapData)(asset) );
            		}
            		else {
HXLINE( 524)			if (::Std_obj::isOfType(asset,::hx::ClassOf< ::String >())) {
HXLINE( 526)				bd = this->getBmp(asset);
            			}
            		}
HXLINE( 529)		upB = this->grabButtonFrame(bd,0,this->has_toggle,0,0,key);
HXLINE( 530)		overB = this->grabButtonFrame(bd,1,this->has_toggle,0,0,key);
HXLINE( 531)		downB = this->grabButtonFrame(bd,2,this->has_toggle,0,0,key);
HXLINE( 533)		 ::Dynamic normalGraphic = key;
HXLINE( 534)		bool _hx_tmp;
HXDLIN( 534)		bool _hx_tmp1;
HXDLIN( 534)		if (::hx::IsNotNull( key )) {
HXLINE( 534)			_hx_tmp1 = (key == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 534)			_hx_tmp1 = true;
            		}
HXDLIN( 534)		if (!(_hx_tmp1)) {
HXLINE( 534)			_hx_tmp = (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ) ) == false);
            		}
            		else {
HXLINE( 534)			_hx_tmp = true;
            		}
HXDLIN( 534)		if (_hx_tmp) {
HXLINE( 536)			normalGraphic = this->assembleButtonFrames(upB,overB,downB);
            		}
HXLINE( 539)		if (this->has_toggle) {
HXLINE( 541)			 ::openfl::display::BitmapData normalPixels = this->assembleButtonFrames(upB,overB,downB);
HXLINE( 543)			upB = this->grabButtonFrame(bd,3,true,0,0,key);
HXLINE( 544)			overB = this->grabButtonFrame(bd,4,true,0,0,key);
HXLINE( 545)			downB = this->grabButtonFrame(bd,5,true,0,0,key);
HXLINE( 547)			 ::openfl::display::BitmapData togglePixels = this->assembleButtonFrames(upB,overB,downB);
HXLINE( 548)			 ::openfl::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);
HXLINE( 550)			normalPixels = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);
HXLINE( 551)			togglePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);
HXLINE( 553)			this->loadGraphic(combinedPixels,true,upB->width,upB->height,false,key);
            		}
            		else {
HXLINE( 557)			this->loadGraphic(normalGraphic,true,upB->width,upB->height,false,key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,loadGraphicsUpOverDown,(void))

void FlxUITypedButton_obj::loadGraphicSlice9(::cpp::VirtualArray assets,::hx::Null< int >  __o_W,::hx::Null< int >  __o_H,::Array< ::Dynamic> slice9,::hx::Null< int >  __o_Tile,::hx::Null< Float >  __o_Resize_Ratio,::hx::Null< bool >  __o_isToggle,::hx::Null< int >  __o_src_w,::hx::Null< int >  __o_src_h,::Array< int > frame_indeces){
            		int W = __o_W.Default(80);
            		int H = __o_H.Default(20);
            		int Tile = __o_Tile.Default(0);
            		Float Resize_Ratio = __o_Resize_Ratio.Default(-1);
            		bool isToggle = __o_isToggle.Default(false);
            		int src_w = __o_src_w.Default(0);
            		int src_h = __o_src_h.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_579_loadGraphicSlice9)
HXLINE( 580)		if ((src_w != 0)) {
HXLINE( 582)			this->_src_w = src_w;
            		}
HXLINE( 584)		if ((src_h != 0)) {
HXLINE( 586)			this->_src_h = src_h;
            		}
HXLINE( 589)		this->tile = Tile;
HXLINE( 591)		this->has_toggle = isToggle;
HXLINE( 593)		this->resize_ratio = Resize_Ratio;
HXLINE( 595)		this->_slice9_assets = assets;
HXLINE( 596)		this->_slice9_arrays = slice9;
HXLINE( 598)		::String key = HX_("",00,00,00,00);
HXLINE( 600)		::Array< ::Dynamic> arr_bmpData = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 601)		::Array< ::Dynamic> arr_flx9 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 604)		if (::hx::IsNull( frame_indeces )) {
HXLINE( 607)			if (this->has_toggle) {
HXLINE( 609)				frame_indeces = ::Array_obj< int >::fromData( _hx_array_data_221567a7_42,6);
            			}
            			else {
HXLINE( 613)				frame_indeces = ::Array_obj< int >::fromData( _hx_array_data_221567a7_43,3);
            			}
            		}
            		else {
HXLINE( 618)			int max_index = 2;
HXLINE( 619)			if (this->has_toggle) {
HXLINE( 621)				max_index = 5;
            			}
HXLINE( 627)			while((frame_indeces->length < (max_index + 1))){
HXLINE( 629)				frame_indeces->push((frame_indeces->length - 1));
            			}
HXLINE( 633)			{
HXLINE( 633)				int _g = 0;
HXDLIN( 633)				int _g1 = frame_indeces->length;
HXDLIN( 633)				while((_g < _g1)){
HXLINE( 633)					_g = (_g + 1);
HXDLIN( 633)					int i = (_g - 1);
HXLINE( 635)					if ((frame_indeces->__get(i) > 5)) {
HXLINE( 637)						frame_indeces[i] = 5;
            					}
            					else {
HXLINE( 639)						if ((frame_indeces->__get(i) < 0)) {
HXLINE( 641)							frame_indeces[i] = 0;
            						}
            					}
            				}
            			}
            		}
HXLINE( 646)		this->_frame_indeces = frame_indeces;
HXLINE( 648)		if ((W == 0)) {
HXLINE( 650)			W = 80;
            		}
HXLINE( 652)		if ((H == 0)) {
HXLINE( 654)			H = 20;
            		}
HXLINE( 657)		 ::flixel::math::FlxPoint pt = ::flixel::addons::ui::U_obj::applyResize(this->resize_ratio,this->resize_ratio_axis,( (Float)(W) ),( (Float)(H) ),null());
HXLINE( 658)		W = ::Std_obj::_hx_int(pt->x);
HXLINE( 659)		H = ::Std_obj::_hx_int(pt->y);
HXLINE( 661)		if (::hx::IsNull( assets )) {
HXLINE( 663)			 ::openfl::display::BitmapData temp;
HXLINE( 666)			if (!(isToggle)) {
HXLINE( 668)				assets = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("flixel/flixel-ui/img/button.png",76,00,ad,88));
HXLINE( 669)				slice9 = ::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::util::FlxStringUtil_obj::toIntArray(HX_("6,6,11,11",c0,1f,fa,07)));
HXLINE( 670)				temp = this->getBmp(assets->__get(0));
HXLINE( 671)				this->_src_w = ::Std_obj::_hx_int(( (Float)(temp->width) ));
HXLINE( 672)				this->_src_h = ::Std_obj::_hx_int((( (Float)(temp->height) ) / ( (Float)(3) )));
            			}
            			else {
HXLINE( 676)				assets = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("flixel/flixel-ui/img/button_toggle.png",13,ee,c4,a2));
HXLINE( 677)				slice9 = ::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::util::FlxStringUtil_obj::toIntArray(HX_("6,6,11,11",c0,1f,fa,07)));
HXLINE( 678)				temp = this->getBmp(assets->__get(0));
HXLINE( 679)				this->_src_w = ::Std_obj::_hx_int(( (Float)(temp->width) ));
HXLINE( 680)				this->_src_h = ::Std_obj::_hx_int((( (Float)(temp->height) ) / ( (Float)(6) )));
            			}
HXLINE( 683)			temp = null();
            		}
HXLINE( 686)		bool _hx_tmp;
HXDLIN( 686)		if (!(this->has_toggle)) {
HXLINE( 686)			_hx_tmp = (assets->get_length() <= 3);
            		}
            		else {
HXLINE( 686)			_hx_tmp = false;
            		}
HXDLIN( 686)		if (_hx_tmp) {
HXLINE( 689)			arr_bmpData = ::Array_obj< ::Dynamic>::__new(3)->init(0,null())->init(1,null())->init(2,null());
HXLINE( 690)			arr_flx9 = ::Array_obj< ::Dynamic>::__new(3)->init(0,null())->init(1,null())->init(2,null());
            		}
            		else {
HXLINE( 695)			this->has_toggle = true;
HXLINE( 696)			arr_bmpData = ::Array_obj< ::Dynamic>::__new(6)->init(0,null())->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null());
HXLINE( 697)			arr_flx9 = ::Array_obj< ::Dynamic>::__new(6)->init(0,null())->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null());
            		}
HXLINE( 700)		this->_flashRect2->width = ( (Float)(W) );
HXLINE( 701)		this->_flashRect2->height = ( (Float)(H) );
HXLINE( 703)		::String key1 = (::Std_obj::string(assets) + HX_("_slice9=",37,88,37,cd));
HXDLIN( 703)		::String key2 = ((key1 + ::Std_obj::string(slice9)) + HX_("_src=",b8,7c,6b,ff));
HXDLIN( 703)		key = (key + (((key2 + this->_src_w) + HX_("x",78,00,00,00)) + this->_src_h));
HXLINE( 705)		::String midKey = key;
HXLINE( 707)		key = (key + (((((HX_("_final=",a6,39,f0,f4) + W) + HX_("x",78,00,00,00)) + H) + HX_("_fi=",9b,06,19,3f)) + ::Std_obj::string(this->_frame_indeces)));
HXLINE( 709)		if ((assets->get_length() == 1)) {
HXLINE( 712)			 ::openfl::display::BitmapData all = this->getBmp(assets->__get(0));
HXLINE( 714)			::String keySuffix = HX_("_all",22,3e,15,3f);
HXLINE( 716)			bool _hx_tmp;
HXDLIN( 716)			if ((this->_src_w != 0)) {
HXLINE( 716)				_hx_tmp = (this->_src_h == 0);
            			}
            			else {
HXLINE( 716)				_hx_tmp = true;
            			}
HXDLIN( 716)			if (_hx_tmp) {
HXLINE( 718)				HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Ambiguous situation! If you only provide one asset, you MUST provide src_w and src_h. Otherwise I can't tell if it's a stacked set of frames or a single frame.",64,36,b2,2f),null()));
            			}
HXLINE( 721)			bool multiFrame = (all->height > this->_src_h);
HXLINE( 723)			::String keySuffix1;
HXDLIN( 723)			if (multiFrame) {
HXLINE( 723)				keySuffix1 = HX_("_multiframe",33,24,92,15);
            			}
            			else {
HXLINE( 723)				keySuffix1 = HX_("",00,00,00,00);
            			}
HXDLIN( 723)			keySuffix = (keySuffix + keySuffix1);
HXLINE( 725)			key = (key + keySuffix);
HXLINE( 726)			midKey = (midKey + keySuffix);
HXLINE( 730)			if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ) )) {
HXLINE( 732)				this->loadGraphic(key,true,W,H,null(),null());
HXLINE( 733)				return;
            			}
HXLINE( 739)			if (multiFrame) {
HXLINE( 742)				{
HXLINE( 742)					int _g = 0;
HXDLIN( 742)					int _g1 = arr_bmpData->length;
HXDLIN( 742)					while((_g < _g1)){
HXLINE( 742)						_g = (_g + 1);
HXDLIN( 742)						int i = (_g - 1);
HXLINE( 744)						arr_bmpData[i] = this->grabButtonFrame(all,i,this->has_toggle,this->_src_w,this->_src_h,midKey);
            					}
            				}
HXLINE( 747)				bool _hx_tmp;
HXDLIN( 747)				if (::hx::IsNotNull( slice9 )) {
HXLINE( 747)					_hx_tmp = ::hx::IsPointerNotEq( slice9->__get(0).StaticCast< ::Array< int > >(),::Array_obj< int >::__new(0) );
            				}
            				else {
HXLINE( 747)					_hx_tmp = false;
            				}
HXDLIN( 747)				if (_hx_tmp) {
HXLINE( 752)					{
HXLINE( 752)						int _g = 0;
HXDLIN( 752)						int _g1 = arr_bmpData->length;
HXDLIN( 752)						while((_g < _g1)){
HXLINE( 752)							_g = (_g + 1);
HXDLIN( 752)							int i = (_g - 1);
HXLINE( 754)							arr_flx9[i] =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),arr_bmpData->__get(i).StaticCast<  ::openfl::display::BitmapData >(),this->_flashRect2,slice9->__get(0).StaticCast< ::Array< int > >(),this->tile,false,((assets->__get(0) + HX_(":",3a,00,00,00)) + i),this->resize_ratio,null(),null(),null(),null());
HXLINE( 755)							arr_flx9->__get(i).StaticCast<  ::flixel::addons::ui::FlxUISprite >()->set_resize_point(this->resize_point);
            						}
            					}
HXLINE( 759)					{
HXLINE( 759)						int _g2 = 0;
HXDLIN( 759)						int _g3 = arr_bmpData->length;
HXDLIN( 759)						while((_g2 < _g3)){
HXLINE( 759)							_g2 = (_g2 + 1);
HXDLIN( 759)							int i = (_g2 - 1);
HXLINE( 761)							arr_bmpData[i] = arr_flx9->__get(i).StaticCast<  ::flixel::addons::ui::FlxUISprite >()->get_pixels();
            						}
            					}
HXLINE( 765)					W = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->width;
HXLINE( 766)					H = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->height;
            				}
            			}
            			else {
HXLINE( 772)				arr_bmpData[0] = all;
            			}
            		}
            		else {
HXLINE( 781)			if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ) )) {
HXLINE( 783)				this->loadGraphic(key,true,W,H,null(),null());
HXLINE( 784)				return;
            			}
HXLINE( 791)			if (!(this->has_toggle)) {
HXLINE( 793)				while((assets->get_length() < 3)){
HXLINE( 795)					assets->push(HX_("",00,00,00,00));
            				}
            			}
            			else {
HXLINE( 800)				while((assets->get_length() < 6)){
HXLINE( 802)					assets->push(HX_("",00,00,00,00));
            				}
            			}
HXLINE( 806)			if (::hx::IsNotEq( assets->__get(0),HX_("",00,00,00,00) )) {
HXLINE( 808)				bool _hx_tmp;
HXDLIN( 808)				bool _hx_tmp1;
HXDLIN( 808)				bool _hx_tmp2;
HXDLIN( 808)				if (::hx::IsNotNull( slice9 )) {
HXLINE( 808)					_hx_tmp2 = (slice9->length > 0);
            				}
            				else {
HXLINE( 808)					_hx_tmp2 = false;
            				}
HXDLIN( 808)				if (_hx_tmp2) {
HXLINE( 808)					_hx_tmp1 = ::hx::IsNotNull( slice9->__get(0).StaticCast< ::Array< int > >() );
            				}
            				else {
HXLINE( 808)					_hx_tmp1 = false;
            				}
HXDLIN( 808)				if (_hx_tmp1) {
HXLINE( 808)					_hx_tmp = (slice9->__get(0).StaticCast< ::Array< int > >()->length > 0);
            				}
            				else {
HXLINE( 808)					_hx_tmp = false;
            				}
HXDLIN( 808)				if (_hx_tmp) {
HXLINE( 813)					while((slice9->length < assets->get_length())){
HXLINE( 815)						slice9->push(null());
            					}
HXLINE( 818)					if (::hx::IsNotNull( slice9->__get(0).StaticCast< ::Array< int > >() )) {
HXLINE( 820)						arr_flx9[0] =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),assets->__get(0),this->_flashRect2,slice9->__get(0).StaticCast< ::Array< int > >(),this->tile,false,HX_("",00,00,00,00),this->resize_ratio,null(),null(),null(),null());
            					}
            					else {
HXLINE( 824)						arr_flx9[0] =  ::flixel::addons::ui::FlxUISprite_obj::__alloc( HX_CTX ,0,0,assets->__get(0));
            					}
HXLINE( 826)					arr_bmpData[0] = arr_flx9->__get(0).StaticCast<  ::flixel::addons::ui::FlxUISprite >()->get_pixels();
HXLINE( 828)					{
HXLINE( 828)						int _g = 1;
HXDLIN( 828)						int _g1 = assets->get_length();
HXDLIN( 828)						while((_g < _g1)){
HXLINE( 828)							_g = (_g + 1);
HXDLIN( 828)							int i = (_g - 1);
HXLINE( 830)							if (::hx::IsNotEq( assets->__get(i),HX_("",00,00,00,00) )) {
HXLINE( 832)								if (::hx::IsNotNull( slice9->__get(i).StaticCast< ::Array< int > >() )) {
HXLINE( 834)									arr_flx9[i] =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),assets->__get(i),this->_flashRect2,slice9->__get(i).StaticCast< ::Array< int > >(),this->tile,false,HX_("",00,00,00,00),this->resize_ratio,null(),null(),null(),null());
            								}
            								else {
HXLINE( 838)									arr_flx9[i] =  ::flixel::addons::ui::FlxUISprite_obj::__alloc( HX_CTX ,0,0,assets->__get(i));
            								}
HXLINE( 840)								arr_bmpData[i] = arr_flx9->__get(i).StaticCast<  ::flixel::addons::ui::FlxUISprite >()->get_pixels();
            							}
            						}
            					}
HXLINE( 845)					W = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->width;
HXLINE( 846)					H = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->height;
            				}
            				else {
HXLINE( 851)					{
HXLINE( 851)						int _g = 0;
HXDLIN( 851)						int _g1 = assets->get_length();
HXDLIN( 851)						while((_g < _g1)){
HXLINE( 851)							_g = (_g + 1);
HXDLIN( 851)							int i = (_g - 1);
HXLINE( 853)							arr_bmpData[i] = this->getBmp(assets->__get(i));
            						}
            					}
HXLINE( 855)					W = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->width;
HXLINE( 856)					H = arr_bmpData->__get(0).StaticCast<  ::openfl::display::BitmapData >()->height;
            				}
            			}
            			else {
HXLINE( 861)				if ((W == 0)) {
HXLINE( 863)					W = 80;
            				}
HXLINE( 865)				if ((H == 0)) {
HXLINE( 867)					H = 20;
            				}
HXLINE( 870)				arr_bmpData[0] =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,W,(H * 3),true,0);
HXLINE( 872)				this->_no_graphic = true;
            			}
            		}
HXLINE( 878)		 ::openfl::display::BitmapData normalPixels = null();
HXLINE( 880)		if (!(this->has_toggle)) {
HXLINE( 882)			normalPixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get(0)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(1)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(2)).StaticCast<  ::openfl::display::BitmapData >());
HXLINE( 883)			::flixel::FlxG_obj::bitmap->add(normalPixels,true,key);
HXLINE( 884)			this->loadGraphic(key,true,W,H,null(),null());
            		}
            		else {
HXLINE( 888)			 ::openfl::display::BitmapData normalPixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get(0)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(1)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(2)).StaticCast<  ::openfl::display::BitmapData >());
HXLINE( 890)			 ::openfl::display::BitmapData togglePixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get(3)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(4)).StaticCast<  ::openfl::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get(5)).StaticCast<  ::openfl::display::BitmapData >());
HXLINE( 892)			 ::openfl::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);
HXLINE( 895)			normalPixels = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);
HXLINE( 896)			togglePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);
HXLINE( 898)			::flixel::FlxG_obj::bitmap->add(combinedPixels,true,key);
HXLINE( 899)			this->loadGraphic(key,true,W,H,null(),null());
            		}
HXLINE( 903)		{
HXLINE( 903)			int _g = 0;
HXDLIN( 903)			int _g1 = arr_flx9->length;
HXDLIN( 903)			while((_g < _g1)){
HXLINE( 903)				_g = (_g + 1);
HXDLIN( 903)				int i = (_g - 1);
HXLINE( 905)				if (::hx::IsNotNull( arr_flx9->__get(i).StaticCast<  ::flixel::addons::ui::FlxUISprite >() )) {
HXLINE( 907)					arr_flx9->__get(i).StaticCast<  ::flixel::addons::ui::FlxUISprite >()->destroy();
HXLINE( 908)					arr_flx9[i] = null();
            				}
            			}
            		}
HXLINE( 911)		while((arr_flx9->length > 0)){
HXLINE( 913)			arr_flx9->pop().StaticCast<  ::flixel::addons::ui::FlxUISprite >();
            		}
HXLINE( 915)		arr_flx9 = null();
HXLINE( 916)		while((arr_bmpData->length > 0)){
HXLINE( 918)			arr_bmpData->pop().StaticCast<  ::openfl::display::BitmapData >();
            		}
HXLINE( 920)		arr_bmpData = null();
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxUITypedButton_obj,loadGraphicSlice9,(void))

void FlxUITypedButton_obj::autoCenterLabel(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_928_autoCenterLabel)
HXDLIN( 928)		if (::hx::IsNotNull( this->label )) {
HXLINE( 930)			Float offX = ( (Float)(0) );
HXLINE( 931)			Float offY = ( (Float)(0) );
HXLINE( 933)			Float offX1 = this->get_width();
HXDLIN( 933)			offX = (offX1 - this->_spriteLabel->get_width());
HXLINE( 935)			if (::Std_obj::isOfType(this->label,::hx::ClassOf< ::flixel::addons::ui::FlxUIText >())) {
HXLINE( 937)				 ::flixel::addons::ui::FlxUIText tlabel = ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
HXLINE( 938)				Float offX1 = this->get_width();
HXDLIN( 938)				offX = ((offX1 - tlabel->get_fieldWidth()) / ( (Float)(2) ));
HXLINE( 939)				Float offY1 = this->get_height();
HXDLIN( 939)				offY = ((offY1 - tlabel->get_height()) / ( (Float)(2) ));
            			}
            			else {
HXLINE( 943)				Float offX1 = this->get_width();
HXDLIN( 943)				offX = ((offX1 - this->_spriteLabel->get_width()) / ( (Float)(2) ));
HXLINE( 944)				Float offY1 = this->get_height();
HXDLIN( 944)				offY = ((offY1 - this->_spriteLabel->get_height()) / ( (Float)(2) ));
            			}
HXLINE( 947)			this->_centerLabelOffset->set_x(offX);
HXLINE( 948)			this->_centerLabelOffset->set_y(offY);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,autoCenterLabel,(void))

void FlxUITypedButton_obj::setCenterLabelOffset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_953_setCenterLabelOffset)
HXLINE( 954)		this->_centerLabelOffset->set_x(X);
HXLINE( 955)		this->_centerLabelOffset->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setCenterLabelOffset,(void))

 ::flixel::math::FlxPoint FlxUITypedButton_obj::getCenterLabelOffset(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_960_getCenterLabelOffset)
HXDLIN( 960)		Float X = this->_centerLabelOffset->x;
HXDLIN( 960)		Float Y = this->_centerLabelOffset->y;
HXDLIN( 960)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 960)		point->_inPool = false;
HXDLIN( 960)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,getCenterLabelOffset,return )

void FlxUITypedButton_obj::forceStateHandler(::String event){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_965_forceStateHandler)
HXDLIN( 965)		::String _hx_switch_0 = event;
            		if (  (_hx_switch_0==HX_("click_button",49,90,30,6d)) ){
HXLINE( 974)			this->onUpHandler();
HXDLIN( 974)			goto _hx_goto_47;
            		}
            		if (  (_hx_switch_0==HX_("down_button",6f,2b,68,a1)) ){
HXLINE( 972)			this->onDownHandler();
HXDLIN( 972)			goto _hx_goto_47;
            		}
            		if (  (_hx_switch_0==HX_("out_button",c3,20,d2,fb)) ){
HXLINE( 968)			this->onOutHandler();
HXDLIN( 968)			goto _hx_goto_47;
            		}
            		if (  (_hx_switch_0==HX_("over_button",bd,74,d0,7c)) ){
HXLINE( 970)			this->onOverHandler();
HXDLIN( 970)			goto _hx_goto_47;
            		}
            		_hx_goto_47:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,forceStateHandler,(void))

 ::openfl::display::BitmapData FlxUITypedButton_obj::grabButtonFrame( ::openfl::display::BitmapData all_frames,int button_state,::hx::Null< bool >  __o_for_toggle,::hx::Null< int >  __o_src_w,::hx::Null< int >  __o_src_h,::String key){
            		bool for_toggle = __o_for_toggle.Default(false);
            		int src_w = __o_src_w.Default(0);
            		int src_h = __o_src_h.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_991_grabButtonFrame)
HXLINE( 992)		int h = src_h;
HXLINE( 993)		if ((h == 0)) {
HXLINE( 995)			if (!(for_toggle)) {
HXLINE( 997)				h = ::Std_obj::_hx_int((( (Float)(all_frames->height) ) / ( (Float)(3) )));
            			}
            			else {
HXLINE(1001)				h = ::Std_obj::_hx_int((( (Float)(all_frames->height) ) / ( (Float)(6) )));
            			}
            		}
HXLINE(1004)		int w = src_w;
HXLINE(1005)		if ((w == 0)) {
HXLINE(1007)			w = all_frames->width;
            		}
HXLINE(1010)		this->_flashRect->x = ( (Float)(0) );
HXLINE(1011)		this->_flashRect->y = ( (Float)((button_state * h)) );
HXLINE(1012)		this->_flashRect->width = ( (Float)(w) );
HXLINE(1013)		this->_flashRect->height = ( (Float)(h) );
HXLINE(1014)		if ((this->_flashRect->y >= all_frames->height)) {
HXLINE(1017)			int framesHigh = ::Std_obj::_hx_int((( (Float)(all_frames->height) ) / ( (Float)(h) )));
HXLINE(1018)			if ((framesHigh == 4)) {
HXLINE(1021)				if ((button_state == 4)) {
HXLINE(1024)					this->_flashRect->y = ( (Float)((3 * h)) );
            				}
            				else {
HXLINE(1026)					if ((button_state == 5)) {
HXLINE(1029)						this->_flashRect->y = ( (Float)((2 * h)) );
            					}
            				}
            			}
            		}
HXLINE(1035)		::String frameKey = (((((((((key + HX_("{x:",fd,bd,5d,00)) + this->_flashRect->x) + HX_("y:",a1,69,00,00)) + this->_flashRect->y) + HX_("w:",e3,67,00,00)) + this->_flashRect->width) + HX_("h:",d2,5a,00,00)) + this->_flashRect->height) + HX_("}",7d,00,00,00));
HXLINE(1036)		if (::hx::IsNotNull( frameKey )) {
HXLINE(1038)			if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(frameKey)) ) )) {
HXLINE(1040)				return ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(frameKey)) )->bitmap;
            			}
            		}
HXLINE(1044)		 ::openfl::display::BitmapData pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,null(),null());
HXLINE(1045)		pixels->copyPixels(all_frames,this->_flashRect,this->_flashPointZero,null(),null(),null());
HXLINE(1046)		if (::hx::IsNotNull( key )) {
HXLINE(1048)			::flixel::FlxG_obj::bitmap->add(pixels,true,frameKey);
HXLINE(1049)			this->addToCleanup(frameKey);
            		}
HXLINE(1051)		return pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxUITypedButton_obj,grabButtonFrame,return )

 ::openfl::display::BitmapData FlxUITypedButton_obj::combineToggleBitmaps( ::openfl::display::BitmapData normal, ::openfl::display::BitmapData toggle){
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_1058_combineToggleBitmaps)
HXLINE(1059)		 ::openfl::display::BitmapData combined =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,normal->width,(normal->height + toggle->height),null(),null());
HXLINE(1061)		combined->copyPixels(normal,normal->rect,this->_flashPointZero,null(),null(),null());
HXLINE(1062)		this->_flashPoint->x = ( (Float)(0) );
HXLINE(1063)		this->_flashPoint->y = ( (Float)(normal->height) );
HXLINE(1064)		combined->copyPixels(toggle,toggle->rect,this->_flashPoint,null(),null(),null());
HXLINE(1066)		return combined;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,combineToggleBitmaps,return )

 ::openfl::display::BitmapData FlxUITypedButton_obj::assembleButtonFrames( ::openfl::display::BitmapData upB, ::openfl::display::BitmapData overB, ::openfl::display::BitmapData downB){
            	HX_GC_STACKFRAME(&_hx_pos_6bf08eba80b23956_1074_assembleButtonFrames)
HXLINE(1075)		 ::openfl::display::BitmapData pixels;
HXLINE(1077)		if (::hx::IsNotNull( overB )) {
HXLINE(1079)			if (::hx::IsNotNull( downB )) {
HXLINE(1081)				pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,upB->width,(upB->height * 3),null(),null());
            			}
            			else {
HXLINE(1085)				pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,upB->width,(upB->height * 2),null(),null());
            			}
            		}
            		else {
HXLINE(1090)			pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,upB->width,upB->height,null(),null());
            		}
HXLINE(1093)		pixels->copyPixels(upB,upB->rect,this->_flashPointZero,null(),null(),null());
HXLINE(1095)		if (::hx::IsNotNull( overB )) {
HXLINE(1097)			this->_flashPoint->x = ( (Float)(0) );
HXLINE(1098)			this->_flashPoint->y = ( (Float)(upB->height) );
HXLINE(1099)			pixels->copyPixels(overB,overB->rect,this->_flashPoint,null(),null(),null());
HXLINE(1100)			if (::hx::IsNotNull( downB )) {
HXLINE(1102)				this->_flashPoint->y = ( (Float)((upB->height * 2)) );
HXLINE(1103)				pixels->copyPixels(downB,downB->rect,this->_flashPoint,null(),null(),null());
            			}
            		}
HXLINE(1107)		return pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,assembleButtonFrames,return )

void FlxUITypedButton_obj::updateButton(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1112_updateButton)
HXDLIN(1112)		if (!(this->skipButtonUpdate)) {
HXLINE(1114)			this->super::updateButton();
            		}
            	}


void FlxUITypedButton_obj::addToCleanup(::String str){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1119_addToCleanup)
HXLINE(1120)		if (::hx::IsNull( this->_assetsToCleanup )) {
HXLINE(1122)			this->_assetsToCleanup = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(1124)		if ((this->_assetsToCleanup->indexOf(str,null()) == -1)) {
HXLINE(1126)			this->_assetsToCleanup->push(str);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,addToCleanup,(void))

void FlxUITypedButton_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1131_cleanup)
HXLINE(1132)		if (::hx::IsNull( this->_assetsToCleanup )) {
HXLINE(1133)			return;
            		}
HXLINE(1135)		{
HXLINE(1135)			int _g = 0;
HXDLIN(1135)			::Array< ::String > _g1 = this->_assetsToCleanup;
HXDLIN(1135)			while((_g < _g1->length)){
HXLINE(1135)				::String key = _g1->__get(_g);
HXDLIN(1135)				_g = (_g + 1);
HXLINE(1137)				::flixel::FlxG_obj::bitmap->removeByKey(key);
            			}
            		}
HXLINE(1139)		this->_assetsToCleanup = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,cleanup,(void))

 ::flixel::FlxSprite FlxUITypedButton_obj::fetchAndShowCorrectLabel(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1143_fetchAndShowCorrectLabel)
HXLINE(1144)		if (this->has_toggle) {
HXLINE(1146)			bool _hx_tmp;
HXDLIN(1146)			if (this->toggled) {
HXLINE(1146)				_hx_tmp = ::hx::IsNotNull( this->toggle_label );
            			}
            			else {
HXLINE(1146)				_hx_tmp = false;
            			}
HXDLIN(1146)			if (_hx_tmp) {
HXLINE(1148)				this->_spriteLabel->set_visible(false);
HXLINE(1149)				this->toggle_label->set_visible(true);
HXLINE(1150)				return this->toggle_label;
            			}
            			else {
HXLINE(1154)				if (::hx::IsNotNull( this->toggle_label )) {
HXLINE(1156)					this->toggle_label->set_visible(false);
            				}
HXLINE(1158)				this->_spriteLabel->set_visible(true);
HXLINE(1159)				return ( ( ::flixel::FlxSprite)(this->label) );
            			}
            		}
HXLINE(1162)		return ( ( ::flixel::FlxSprite)(this->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,fetchAndShowCorrectLabel,return )

void FlxUITypedButton_obj::onUpHandler(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1166_onUpHandler)
HXLINE(1167)		if (this->has_toggle) {
HXLINE(1169)			this->set_toggled(!(this->toggled));
            		}
HXLINE(1172)		this->super::onUpHandler();
HXLINE(1173)		if (::hx::IsNotNull( this->label )) {
HXLINE(1175)			 ::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();
HXLINE(1176)			bool _hx_tmp;
HXDLIN(1176)			if (this->toggled) {
HXLINE(1176)				_hx_tmp = this->up_toggle_visible;
            			}
            			else {
HXLINE(1176)				_hx_tmp = this->up_visible;
            			}
HXDLIN(1176)			theLabel->set_visible(_hx_tmp);
HXLINE(1177)			 ::Dynamic thecol;
HXDLIN(1177)			if (this->toggled) {
HXLINE(1177)				thecol = this->up_toggle_color;
            			}
            			else {
HXLINE(1177)				thecol = this->up_color;
            			}
HXLINE(1178)			if (::hx::IsNotNull( thecol )) {
HXLINE(1180)				theLabel->set_color(( (int)(thecol) ));
            			}
            		}
HXLINE(1183)		if (this->broadcastToFlxUI) {
HXLINE(1185)			::flixel::addons::ui::FlxUI_obj::event(HX_("click_button",49,90,30,6d),::hx::ObjectPtr<OBJ_>(this),null(),this->params);
            		}
            	}


void FlxUITypedButton_obj::onDownHandler(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1190_onDownHandler)
HXLINE(1191)		this->super::onDownHandler();
HXLINE(1192)		if (::hx::IsNotNull( this->label )) {
HXLINE(1194)			 ::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();
HXLINE(1195)			bool _hx_tmp;
HXDLIN(1195)			if (this->toggled) {
HXLINE(1195)				_hx_tmp = this->down_toggle_visible;
            			}
            			else {
HXLINE(1195)				_hx_tmp = this->down_visible;
            			}
HXDLIN(1195)			theLabel->set_visible(_hx_tmp);
HXLINE(1196)			 ::Dynamic thecol;
HXDLIN(1196)			if (this->toggled) {
HXLINE(1196)				thecol = this->down_toggle_color;
            			}
            			else {
HXLINE(1196)				thecol = this->down_color;
            			}
HXLINE(1197)			if (::hx::IsNotNull( thecol )) {
HXLINE(1199)				theLabel->set_color(( (int)(thecol) ));
            			}
            		}
HXLINE(1202)		if (this->broadcastToFlxUI) {
HXLINE(1204)			::flixel::addons::ui::FlxUI_obj::event(HX_("down_button",6f,2b,68,a1),::hx::ObjectPtr<OBJ_>(this),null(),this->params);
            		}
            	}


void FlxUITypedButton_obj::onOverHandler(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1209_onOverHandler)
HXLINE(1210)		this->super::onOverHandler();
HXLINE(1211)		this->inputOver->press();
HXLINE(1212)		if (::hx::IsNotNull( this->label )) {
HXLINE(1214)			 ::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();
HXLINE(1215)			bool _hx_tmp;
HXDLIN(1215)			if (this->toggled) {
HXLINE(1215)				_hx_tmp = this->over_toggle_visible;
            			}
            			else {
HXLINE(1215)				_hx_tmp = this->over_visible;
            			}
HXDLIN(1215)			theLabel->set_visible(_hx_tmp);
HXLINE(1216)			 ::Dynamic thecol;
HXDLIN(1216)			if (this->toggled) {
HXLINE(1216)				thecol = this->over_toggle_color;
            			}
            			else {
HXLINE(1216)				thecol = this->over_color;
            			}
HXLINE(1217)			if (::hx::IsNotNull( thecol )) {
HXLINE(1219)				theLabel->set_color(( (int)(thecol) ));
            			}
            		}
HXLINE(1222)		if (this->broadcastToFlxUI) {
HXLINE(1224)			::flixel::addons::ui::FlxUI_obj::event(HX_("over_button",bd,74,d0,7c),::hx::ObjectPtr<OBJ_>(this),null(),this->params);
            		}
            	}


void FlxUITypedButton_obj::onOutHandler(){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1229_onOutHandler)
HXLINE(1230)		this->super::onOutHandler();
HXLINE(1231)		this->inputOver->release();
HXLINE(1232)		if (::hx::IsNotNull( this->label )) {
HXLINE(1234)			 ::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();
HXLINE(1235)			bool _hx_tmp;
HXDLIN(1235)			if (this->toggled) {
HXLINE(1235)				_hx_tmp = this->up_toggle_visible;
            			}
            			else {
HXLINE(1235)				_hx_tmp = this->up_visible;
            			}
HXDLIN(1235)			theLabel->set_visible(_hx_tmp);
HXLINE(1236)			 ::Dynamic thecol;
HXDLIN(1236)			if (this->toggled) {
HXLINE(1236)				thecol = this->up_toggle_color;
            			}
            			else {
HXLINE(1236)				thecol = this->up_color;
            			}
HXLINE(1237)			if (::hx::IsNotNull( thecol )) {
HXLINE(1239)				theLabel->set_color(( (int)(thecol) ));
            			}
            		}
HXLINE(1242)		if (this->broadcastToFlxUI) {
HXLINE(1244)			::flixel::addons::ui::FlxUI_obj::event(HX_("out_button",c3,20,d2,fb),::hx::ObjectPtr<OBJ_>(this),null(),this->params);
            		}
            	}


Float FlxUITypedButton_obj::set_x(Float NewX){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1249_set_x)
HXLINE(1250)		this->super::set_x(NewX);
HXLINE(1252)		if (::hx::IsNotNull( this->_spriteLabel )) {
HXLINE(1254)			this->_spriteLabel->set_x(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxPoint >()->x));
HXLINE(1256)			if (this->round_labels) {
HXLINE(1258)				 ::flixel::FlxSprite _hx_tmp = this->_spriteLabel;
HXDLIN(1258)				_hx_tmp->set_x(( (Float)(::Std_obj::_hx_int((this->_spriteLabel->x + ((Float)0.5)))) ));
            			}
HXLINE(1260)			bool _hx_tmp;
HXDLIN(1260)			if (this->has_toggle) {
HXLINE(1260)				_hx_tmp = ::hx::IsNotNull( this->toggle_label );
            			}
            			else {
HXLINE(1260)				_hx_tmp = false;
            			}
HXDLIN(1260)			if (_hx_tmp) {
HXLINE(1262)				this->toggle_label->set_x(this->_spriteLabel->x);
            			}
            		}
HXLINE(1266)		return NewX;
            	}


Float FlxUITypedButton_obj::set_y(Float NewY){
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_1270_set_y)
HXLINE(1271)		this->super::set_y(NewY);
HXLINE(1273)		if (::hx::IsNotNull( this->label )) {
HXLINE(1275)			this->_spriteLabel->set_y(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast<  ::flixel::math::FlxPoint >()->y));
HXLINE(1277)			if (this->round_labels) {
HXLINE(1279)				 ::flixel::FlxSprite _hx_tmp = this->_spriteLabel;
HXDLIN(1279)				_hx_tmp->set_y(( (Float)(::Std_obj::_hx_int((this->_spriteLabel->y + ((Float)0.5)))) ));
            			}
HXLINE(1281)			bool _hx_tmp;
HXDLIN(1281)			if (this->has_toggle) {
HXLINE(1281)				_hx_tmp = ::hx::IsNotNull( this->toggle_label );
            			}
            			else {
HXLINE(1281)				_hx_tmp = false;
            			}
HXDLIN(1281)			if (_hx_tmp) {
HXLINE(1283)				this->toggle_label->set_y(this->_spriteLabel->y);
            			}
            		}
HXLINE(1286)		return NewY;
            	}


::String FlxUITypedButton_obj::CLICK_EVENT;

::String FlxUITypedButton_obj::OVER_EVENT;

::String FlxUITypedButton_obj::DOWN_EVENT;

::String FlxUITypedButton_obj::OUT_EVENT;


::hx::ObjectPtr< FlxUITypedButton_obj > FlxUITypedButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick) {
	::hx::ObjectPtr< FlxUITypedButton_obj > __this = new FlxUITypedButton_obj();
	__this->__construct(__o_X,__o_Y,OnClick);
	return __this;
}

::hx::ObjectPtr< FlxUITypedButton_obj > FlxUITypedButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic OnClick) {
	FlxUITypedButton_obj *__this = (FlxUITypedButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITypedButton_obj), true, "flixel.addons.ui.FlxUITypedButton"));
	*(void **)__this = FlxUITypedButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,OnClick);
	return __this;
}

FlxUITypedButton_obj::FlxUITypedButton_obj()
{
}

void FlxUITypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITypedButton);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(has_toggle,"has_toggle");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(inputOver,"inputOver");
	HX_MARK_MEMBER_NAME(up_color,"up_color");
	HX_MARK_MEMBER_NAME(over_color,"over_color");
	HX_MARK_MEMBER_NAME(down_color,"down_color");
	HX_MARK_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_MARK_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_MARK_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_MARK_MEMBER_NAME(up_visible,"up_visible");
	HX_MARK_MEMBER_NAME(over_visible,"over_visible");
	HX_MARK_MEMBER_NAME(down_visible,"down_visible");
	HX_MARK_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_MARK_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_MARK_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_MARK_MEMBER_NAME(toggle_label,"toggle_label");
	HX_MARK_MEMBER_NAME(round_labels,"round_labels");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(autoResizeLabel,"autoResizeLabel");
	HX_MARK_MEMBER_NAME(_autoCleanup,"_autoCleanup");
	HX_MARK_MEMBER_NAME(_assetsToCleanup,"_assetsToCleanup");
	HX_MARK_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_MARK_MEMBER_NAME(_src_w,"_src_w");
	HX_MARK_MEMBER_NAME(_src_h,"_src_h");
	HX_MARK_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_MARK_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_MARK_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_MARK_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	 ::flixel::ui::FlxTypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_ratio_axis,"resize_ratio_axis");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(has_toggle,"has_toggle");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(inputOver,"inputOver");
	HX_VISIT_MEMBER_NAME(up_color,"up_color");
	HX_VISIT_MEMBER_NAME(over_color,"over_color");
	HX_VISIT_MEMBER_NAME(down_color,"down_color");
	HX_VISIT_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_VISIT_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_VISIT_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_VISIT_MEMBER_NAME(up_visible,"up_visible");
	HX_VISIT_MEMBER_NAME(over_visible,"over_visible");
	HX_VISIT_MEMBER_NAME(down_visible,"down_visible");
	HX_VISIT_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_VISIT_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_VISIT_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_VISIT_MEMBER_NAME(toggle_label,"toggle_label");
	HX_VISIT_MEMBER_NAME(round_labels,"round_labels");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(autoResizeLabel,"autoResizeLabel");
	HX_VISIT_MEMBER_NAME(_autoCleanup,"_autoCleanup");
	HX_VISIT_MEMBER_NAME(_assetsToCleanup,"_assetsToCleanup");
	HX_VISIT_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_VISIT_MEMBER_NAME(_src_w,"_src_w");
	HX_VISIT_MEMBER_NAME(_src_h,"_src_h");
	HX_VISIT_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_VISIT_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_VISIT_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_VISIT_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	 ::flixel::ui::FlxTypedButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUITypedButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"tile") ) { return ::hx::Val( tile ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBmp") ) { return ::hx::Val( getBmp_dyn() ); }
		if (HX_FIELD_EQ(inName,"_src_w") ) { return ::hx::Val( _src_w ); }
		if (HX_FIELD_EQ(inName,"_src_h") ) { return ::hx::Val( _src_h ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { return ::hx::Val( toggled ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { return ::hx::Val( up_color ); }
		if (HX_FIELD_EQ(inName,"doResize") ) { return ::hx::Val( doResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputOver") ) { return ::hx::Val( inputOver ); }
		if (HX_FIELD_EQ(inName,"copyStyle") ) { return ::hx::Val( copyStyle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { return ::hx::Val( has_toggle ); }
		if (HX_FIELD_EQ(inName,"mouseIsOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseIsOut() ); }
		if (HX_FIELD_EQ(inName,"over_color") ) { return ::hx::Val( over_color ); }
		if (HX_FIELD_EQ(inName,"down_color") ) { return ::hx::Val( down_color ); }
		if (HX_FIELD_EQ(inName,"up_visible") ) { return ::hx::Val( up_visible ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return ::hx::Val( set_toggled_dyn() ); }
		if (HX_FIELD_EQ(inName,"mouseIsOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseIsOver() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyGraphic") ) { return ::hx::Val( copyGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return ::hx::Val( onUpHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { return ::hx::Val( _no_graphic ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return ::hx::Val( resize_ratio ); }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return ::hx::Val( resize_point ); }
		if (HX_FIELD_EQ(inName,"over_visible") ) { return ::hx::Val( over_visible ); }
		if (HX_FIELD_EQ(inName,"down_visible") ) { return ::hx::Val( down_visible ); }
		if (HX_FIELD_EQ(inName,"toggle_label") ) { return ::hx::Val( toggle_label ); }
		if (HX_FIELD_EQ(inName,"round_labels") ) { return ::hx::Val( round_labels ); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return ::hx::Val( updateButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"addToCleanup") ) { return ::hx::Val( addToCleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return ::hx::Val( onOutHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"_autoCleanup") ) { return ::hx::Val( _autoCleanup ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"justMousedOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justMousedOut() ); }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return ::hx::Val( onDownHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return ::hx::Val( onOverHandler_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"justMousedOver") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justMousedOver() ); }
		if (HX_FIELD_EQ(inName,"get_mouseIsOut") ) { return ::hx::Val( get_mouseIsOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { return ::hx::Val( _frame_indeces ); }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { return ::hx::Val( _slice9_arrays ); }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { return ::hx::Val( _slice9_assets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_mouseIsOver") ) { return ::hx::Val( get_mouseIsOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { return ::hx::Val( up_toggle_color ); }
		if (HX_FIELD_EQ(inName,"autoResizeLabel") ) { return ::hx::Val( autoResizeLabel ); }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return ::hx::Val( autoCenterLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"grabButtonFrame") ) { return ::hx::Val( grabButtonFrame_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
		if (HX_FIELD_EQ(inName,"set_toggle_label") ) { return ::hx::Val( set_toggle_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return ::hx::Val( skipButtonUpdate ); }
		if (HX_FIELD_EQ(inName,"_assetsToCleanup") ) { return ::hx::Val( _assetsToCleanup ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { return ::hx::Val( resize_ratio_axis ); }
		if (HX_FIELD_EQ(inName,"get_justMousedOut") ) { return ::hx::Val( get_justMousedOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { return ::hx::Val( over_toggle_color ); }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { return ::hx::Val( down_toggle_color ); }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { return ::hx::Val( up_toggle_visible ); }
		if (HX_FIELD_EQ(inName,"loadGraphicSlice9") ) { return ::hx::Val( loadGraphicSlice9_dyn() ); }
		if (HX_FIELD_EQ(inName,"forceStateHandler") ) { return ::hx::Val( forceStateHandler_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_justMousedOver") ) { return ::hx::Val( get_justMousedOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"setAllLabelOffsets") ) { return ::hx::Val( setAllLabelOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { return ::hx::Val( _centerLabelOffset ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { return ::hx::Val( over_toggle_visible ); }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { return ::hx::Val( down_toggle_visible ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return ::hx::Val( set_skipButtonUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphicsMultiple") ) { return ::hx::Val( loadGraphicsMultiple_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCenterLabelOffset") ) { return ::hx::Val( setCenterLabelOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCenterLabelOffset") ) { return ::hx::Val( getCenterLabelOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"combineToggleBitmaps") ) { return ::hx::Val( combineToggleBitmaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"assembleButtonFrames") ) { return ::hx::Val( assembleButtonFrames_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return ::hx::Val( updateStatusAnimation_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicsUpOverDown") ) { return ::hx::Val( loadGraphicsUpOverDown_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"fetchAndShowCorrectLabel") ) { return ::hx::Val( fetchAndShowCorrectLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUITypedButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_w") ) { _src_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { _src_h=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toggled(inValue.Cast< bool >()) );toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { up_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputOver") ) { inputOver=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { has_toggle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_color") ) { over_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_color") ) { down_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { up_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { _no_graphic=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { resize_point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { over_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { down_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggle_label") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toggle_label(inValue.Cast<  ::flixel::FlxSprite >()) );toggle_label=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { round_labels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoCleanup") ) { _autoCleanup=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { _frame_indeces=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { _slice9_arrays=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { _slice9_assets=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { up_toggle_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoResizeLabel") ) { autoResizeLabel=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_assetsToCleanup") ) { _assetsToCleanup=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resize_ratio_axis") ) { resize_ratio_axis=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { over_toggle_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { down_toggle_color=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { up_toggle_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { _centerLabelOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { over_toggle_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { down_toggle_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("resize_ratio",40,c5,84,8f));
	outFields->push(HX_("resize_ratio_axis",40,6b,72,8a));
	outFields->push(HX_("resize_point",85,44,f0,71));
	outFields->push(HX_("tile",2e,cb,fc,4c));
	outFields->push(HX_("has_toggle",19,91,1d,bb));
	outFields->push(HX_("toggled",50,e2,03,cc));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("inputOver",7e,4e,e3,10));
	outFields->push(HX_("justMousedOver",df,00,79,b4));
	outFields->push(HX_("mouseIsOver",63,8a,a7,5c));
	outFields->push(HX_("mouseIsOut",5f,be,1f,df));
	outFields->push(HX_("justMousedOut",63,ab,7d,99));
	outFields->push(HX_("up_color",3f,d5,b5,9b));
	outFields->push(HX_("over_color",f8,00,4a,f7));
	outFields->push(HX_("down_color",86,26,b3,4e));
	outFields->push(HX_("up_toggle_color",dc,6e,0c,dd));
	outFields->push(HX_("over_toggle_color",43,1c,98,aa));
	outFields->push(HX_("down_toggle_color",75,e4,c8,06));
	outFields->push(HX_("up_visible",4e,8b,83,08));
	outFields->push(HX_("over_visible",47,d7,44,92));
	outFields->push(HX_("down_visible",55,fc,6c,72));
	outFields->push(HX_("up_toggle_visible",2b,86,e9,3f));
	outFields->push(HX_("over_toggle_visible",52,9b,c8,49));
	outFields->push(HX_("down_toggle_visible",04,54,e1,a9));
	outFields->push(HX_("toggle_label",c9,fb,1b,dd));
	outFields->push(HX_("round_labels",10,07,1c,bd));
	outFields->push(HX_("skipButtonUpdate",ba,02,f2,13));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("autoResizeLabel",31,30,ad,1c));
	outFields->push(HX_("_autoCleanup",76,5e,2f,f7));
	outFields->push(HX_("_assetsToCleanup",67,75,f7,5a));
	outFields->push(HX_("_no_graphic",89,8a,f5,96));
	outFields->push(HX_("_src_w",5d,c2,a1,7e));
	outFields->push(HX_("_src_h",4e,c2,a1,7e));
	outFields->push(HX_("_frame_indeces",9a,a3,e4,57));
	outFields->push(HX_("_slice9_arrays",d3,49,74,a4));
	outFields->push(HX_("_slice9_assets",9c,19,87,38));
	outFields->push(HX_("_centerLabelOffset",93,75,ab,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUITypedButton_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUITypedButton_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(FlxUITypedButton_obj,resize_ratio),HX_("resize_ratio",40,c5,84,8f)},
	{::hx::fsInt,(int)offsetof(FlxUITypedButton_obj,resize_ratio_axis),HX_("resize_ratio_axis",40,6b,72,8a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUITypedButton_obj,resize_point),HX_("resize_point",85,44,f0,71)},
	{::hx::fsInt,(int)offsetof(FlxUITypedButton_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,has_toggle),HX_("has_toggle",19,91,1d,bb)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,toggled),HX_("toggled",50,e2,03,cc)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxUITypedButton_obj,inputOver),HX_("inputOver",7e,4e,e3,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,up_color),HX_("up_color",3f,d5,b5,9b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,over_color),HX_("over_color",f8,00,4a,f7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,down_color),HX_("down_color",86,26,b3,4e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,up_toggle_color),HX_("up_toggle_color",dc,6e,0c,dd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,over_toggle_color),HX_("over_toggle_color",43,1c,98,aa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITypedButton_obj,down_toggle_color),HX_("down_toggle_color",75,e4,c8,06)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_visible),HX_("up_visible",4e,8b,83,08)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_visible),HX_("over_visible",47,d7,44,92)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_visible),HX_("down_visible",55,fc,6c,72)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_toggle_visible),HX_("up_toggle_visible",2b,86,e9,3f)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_toggle_visible),HX_("over_toggle_visible",52,9b,c8,49)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_toggle_visible),HX_("down_toggle_visible",04,54,e1,a9)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxUITypedButton_obj,toggle_label),HX_("toggle_label",c9,fb,1b,dd)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,round_labels),HX_("round_labels",10,07,1c,bd)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,skipButtonUpdate),HX_("skipButtonUpdate",ba,02,f2,13)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUITypedButton_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,autoResizeLabel),HX_("autoResizeLabel",31,30,ad,1c)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,_autoCleanup),HX_("_autoCleanup",76,5e,2f,f7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxUITypedButton_obj,_assetsToCleanup),HX_("_assetsToCleanup",67,75,f7,5a)},
	{::hx::fsBool,(int)offsetof(FlxUITypedButton_obj,_no_graphic),HX_("_no_graphic",89,8a,f5,96)},
	{::hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_w),HX_("_src_w",5d,c2,a1,7e)},
	{::hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_h),HX_("_src_h",4e,c2,a1,7e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxUITypedButton_obj,_frame_indeces),HX_("_frame_indeces",9a,a3,e4,57)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUITypedButton_obj,_slice9_arrays),HX_("_slice9_arrays",d3,49,74,a4)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUITypedButton_obj,_slice9_assets),HX_("_slice9_assets",9c,19,87,38)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUITypedButton_obj,_centerLabelOffset),HX_("_centerLabelOffset",93,75,ab,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUITypedButton_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUITypedButton_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{::hx::fsString,(void *) &FlxUITypedButton_obj::OVER_EVENT,HX_("OVER_EVENT",8f,57,27,e0)},
	{::hx::fsString,(void *) &FlxUITypedButton_obj::DOWN_EVENT,HX_("DOWN_EVENT",1d,7d,90,37)},
	{::hx::fsString,(void *) &FlxUITypedButton_obj::OUT_EVENT,HX_("OUT_EVENT",29,8a,e4,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUITypedButton_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("resize_ratio",40,c5,84,8f),
	HX_("resize_ratio_axis",40,6b,72,8a),
	HX_("resize_point",85,44,f0,71),
	HX_("tile",2e,cb,fc,4c),
	HX_("has_toggle",19,91,1d,bb),
	HX_("toggled",50,e2,03,cc),
	HX_("set_toggled",73,49,6b,5c),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("inputOver",7e,4e,e3,10),
	HX_("get_justMousedOver",a8,e1,12,50),
	HX_("get_justMousedOut",ba,b6,ed,9f),
	HX_("get_mouseIsOver",fa,41,89,1d),
	HX_("get_mouseIsOut",a8,46,15,55),
	HX_("up_color",3f,d5,b5,9b),
	HX_("over_color",f8,00,4a,f7),
	HX_("down_color",86,26,b3,4e),
	HX_("up_toggle_color",dc,6e,0c,dd),
	HX_("over_toggle_color",43,1c,98,aa),
	HX_("down_toggle_color",75,e4,c8,06),
	HX_("up_visible",4e,8b,83,08),
	HX_("over_visible",47,d7,44,92),
	HX_("down_visible",55,fc,6c,72),
	HX_("up_toggle_visible",2b,86,e9,3f),
	HX_("over_toggle_visible",52,9b,c8,49),
	HX_("down_toggle_visible",04,54,e1,a9),
	HX_("toggle_label",c9,fb,1b,dd),
	HX_("set_toggle_label",c6,d5,fc,37),
	HX_("set_visible",95,df,8b,33),
	HX_("round_labels",10,07,1c,bd),
	HX_("skipButtonUpdate",ba,02,f2,13),
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("params",46,fb,7a,ed),
	HX_("set_params",83,09,80,e1),
	HX_("destroy",fa,2c,86,24),
	HX_("autoResizeLabel",31,30,ad,1c),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("copyGraphic",73,d7,1b,ca),
	HX_("copyStyle",3c,c9,18,0a),
	HX_("setAllLabelOffsets",2b,4f,fa,85),
	HX_("update",09,86,05,87),
	HX_("updateStatusAnimation",69,25,c1,4d),
	HX_("draw",04,2c,70,42),
	HX_("resize",f4,59,7b,08),
	HX_("doResize",df,df,92,9c),
	HX_("getBmp",4f,f5,19,a3),
	HX_("loadGraphicsMultiple",41,7c,04,85),
	HX_("loadGraphicsUpOverDown",c2,ad,54,5b),
	HX_("loadGraphicSlice9",69,16,70,91),
	HX_("autoCenterLabel",b0,b4,79,af),
	HX_("setCenterLabelOffset",d0,be,c2,c4),
	HX_("getCenterLabelOffset",5c,07,0b,f8),
	HX_("forceStateHandler",44,68,8f,7c),
	HX_("grabButtonFrame",6f,bc,04,74),
	HX_("combineToggleBitmaps",71,66,eb,36),
	HX_("assembleButtonFrames",6a,cf,53,98),
	HX_("updateButton",db,08,a4,d9),
	HX_("addToCleanup",88,65,2a,da),
	HX_("cleanup",24,0c,42,ab),
	HX_("fetchAndShowCorrectLabel",a4,e2,12,ed),
	HX_("onUpHandler",90,a5,d0,a3),
	HX_("onDownHandler",a9,ac,21,cf),
	HX_("onOverHandler",f7,f5,89,aa),
	HX_("onOutHandler",db,26,e5,9e),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("_autoCleanup",76,5e,2f,f7),
	HX_("_assetsToCleanup",67,75,f7,5a),
	HX_("_no_graphic",89,8a,f5,96),
	HX_("_src_w",5d,c2,a1,7e),
	HX_("_src_h",4e,c2,a1,7e),
	HX_("_frame_indeces",9a,a3,e4,57),
	HX_("_slice9_arrays",d3,49,74,a4),
	HX_("_slice9_assets",9c,19,87,38),
	HX_("_centerLabelOffset",93,75,ab,a3),
	::String(null()) };

static void FlxUITypedButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUITypedButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#endif

::hx::Class FlxUITypedButton_obj::__mClass;

static ::String FlxUITypedButton_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	HX_("OVER_EVENT",8f,57,27,e0),
	HX_("DOWN_EVENT",1d,7d,90,37),
	HX_("OUT_EVENT",29,8a,e4,aa),
	::String(null())
};

void FlxUITypedButton_obj::__register()
{
	FlxUITypedButton_obj _hx_dummy;
	FlxUITypedButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUITypedButton",a7,67,15,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUITypedButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUITypedButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUITypedButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUITypedButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUITypedButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITypedButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITypedButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUITypedButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_120_boot)
HXDLIN( 120)		CLICK_EVENT = HX_("click_button",49,90,30,6d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_121_boot)
HXDLIN( 121)		OVER_EVENT = HX_("over_button",bd,74,d0,7c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_122_boot)
HXDLIN( 122)		DOWN_EVENT = HX_("down_button",6f,2b,68,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bf08eba80b23956_123_boot)
HXDLIN( 123)		OUT_EVENT = HX_("out_button",c3,20,d2,fb);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
