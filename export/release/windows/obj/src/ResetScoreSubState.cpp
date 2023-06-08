#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_ResetScoreSubState
#include <ResetScoreSubState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4abb795b407cd203_8_new,"ResetScoreSubState","new",0xa3d89da6,"ResetScoreSubState.new","ResetScoreSubState.hx",8,0x6a59588a)
HX_LOCAL_STACK_FRAME(_hx_pos_4abb795b407cd203_74_update,"ResetScoreSubState","update",0x9d03c883,"ResetScoreSubState.update","ResetScoreSubState.hx",74,0x6a59588a)
HX_LOCAL_STACK_FRAME(_hx_pos_4abb795b407cd203_106_updateOptions,"ResetScoreSubState","updateOptions",0xb4a4f91b,"ResetScoreSubState.updateOptions","ResetScoreSubState.hx",106,0x6a59588a)
static const Float _hx_array_data_9ecb92b4_4[] = {
	0.75,(Float)1,
};
static const Float _hx_array_data_9ecb92b4_5[] = {
	0.6,1.25,
};

void ResetScoreSubState_obj::__construct(::String song,int difficulty,::String character,::hx::Null< int >  __o_week){
            		int week = __o_week.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_4abb795b407cd203_8_new)
HXLINE(  13)		this->onYes = false;
HXLINE(  11)		this->alphabetArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		this->song = song;
HXLINE(  25)		this->difficulty = difficulty;
HXLINE(  26)		this->week = week;
HXLINE(  28)		super::__construct();
HXLINE(  30)		::String name = song;
HXLINE(  31)		if ((week > -1)) {
HXLINE(  32)			name = ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(week))) )->weekName;
            		}
HXLINE(  34)		name = (name + ((HX_(" (",08,1c,00,00) + ::CoolUtil_obj::difficulties->__get(difficulty)) + HX_(")?",f6,23,00,00)));
HXLINE(  36)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  37)		this->bg->set_alpha(( (Float)(0) ));
HXLINE(  38)		this->bg->scrollFactor->set(null(),null());
HXLINE(  39)		this->add(this->bg);
HXLINE(  41)		Float tooLong;
HXDLIN(  41)		if ((name.length > 18)) {
HXLINE(  41)			tooLong = ((Float)0.8);
            		}
            		else {
HXLINE(  41)			tooLong = ( (Float)(1) );
            		}
HXLINE(  42)		 ::Alphabet text =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(180) ),HX_("Reset the score of",c5,93,fa,2d),true,null(),null(),null());
HXLINE(  43)		{
HXLINE(  43)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  43)			if (::hx::IsNull( axes )) {
HXLINE(  43)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  43)			bool _hx_tmp;
HXDLIN(  43)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  43)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  43)					_hx_tmp = false;
            				}
            			}
HXDLIN(  43)			if (_hx_tmp) {
HXLINE(  43)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  43)				text->set_x(((( (Float)(_hx_tmp) ) - text->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  43)			bool _hx_tmp1;
HXDLIN(  43)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  43)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  43)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  43)			if (_hx_tmp1) {
HXLINE(  43)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  43)				text->set_y(((( (Float)(_hx_tmp) ) - text->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  44)		this->alphabetArray->push(text);
HXLINE(  45)		text->set_alpha(( (Float)(0) ));
HXLINE(  46)		this->add(text);
HXLINE(  47)		 ::Alphabet text1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text->y + 90),name,true,false,((Float)0.05),tooLong);
HXLINE(  48)		{
HXLINE(  48)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  48)			if (::hx::IsNull( axes1 )) {
HXLINE(  48)				axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  48)			bool _hx_tmp2;
HXDLIN(  48)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  48)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  48)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  48)			if (_hx_tmp2) {
HXLINE(  48)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)				text1->set_x(((( (Float)(_hx_tmp) ) - text1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  48)			bool _hx_tmp3;
HXDLIN(  48)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  48)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  48)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  48)			if (_hx_tmp3) {
HXLINE(  48)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)				text1->set_y(((( (Float)(_hx_tmp) ) - text1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  49)		if ((week == -1)) {
HXLINE(  49)			text1->set_x((text1->x + (( (Float)(60) ) * tooLong)));
            		}
HXLINE(  50)		this->alphabetArray->push(text1);
HXLINE(  51)		text1->set_alpha(( (Float)(0) ));
HXLINE(  52)		this->add(text1);
HXLINE(  53)		if ((week == -1)) {
HXLINE(  54)			this->icon =  ::HealthIcon_obj::__alloc( HX_CTX ,character,null());
HXLINE(  55)			 ::HealthIcon _hx_tmp = this->icon;
HXDLIN(  55)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->icon->get_width() * tooLong)),null());
HXLINE(  56)			this->icon->updateHitbox();
HXLINE(  57)			 ::HealthIcon _hx_tmp1 = this->icon;
HXDLIN(  57)			Float text = text1->x;
HXDLIN(  57)			Float _hx_tmp2 = ((text - this->icon->get_width()) + (( (Float)(10) ) * tooLong));
HXDLIN(  57)			_hx_tmp1->setPosition(_hx_tmp2,(text1->y - ( (Float)(30) )));
HXLINE(  58)			this->icon->set_alpha(( (Float)(0) ));
HXLINE(  59)			this->add(this->icon);
            		}
HXLINE(  62)		this->yesText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text1->y + 150),HX_("Yes",07,e1,43,00),true,null(),null(),null());
HXLINE(  63)		{
HXLINE(  63)			 ::Alphabet _this = this->yesText;
HXDLIN(  63)			 ::flixel::util::FlxAxes axes2 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  63)			if (::hx::IsNull( axes2 )) {
HXLINE(  63)				axes2 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  63)			bool _hx_tmp4;
HXDLIN(  63)			switch((int)(axes2->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  63)					_hx_tmp4 = true;
            				}
            				break;
            				default:{
HXLINE(  63)					_hx_tmp4 = false;
            				}
            			}
HXDLIN(  63)			if (_hx_tmp4) {
HXLINE(  63)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  63)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  63)			bool _hx_tmp5;
HXDLIN(  63)			switch((int)(axes2->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  63)					_hx_tmp5 = true;
            				}
            				break;
            				default:{
HXLINE(  63)					_hx_tmp5 = false;
            				}
            			}
HXDLIN(  63)			if (_hx_tmp5) {
HXLINE(  63)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  63)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  64)		 ::Alphabet fh = this->yesText;
HXDLIN(  64)		fh->set_x((fh->x - ( (Float)(200) )));
HXLINE(  65)		this->add(this->yesText);
HXLINE(  66)		this->noText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(text1->y + 150),HX_("No",61,44,00,00),true,null(),null(),null());
HXLINE(  67)		{
HXLINE(  67)			 ::Alphabet _this1 = this->noText;
HXDLIN(  67)			 ::flixel::util::FlxAxes axes3 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  67)			if (::hx::IsNull( axes3 )) {
HXLINE(  67)				axes3 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  67)			bool _hx_tmp6;
HXDLIN(  67)			switch((int)(axes3->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  67)					_hx_tmp6 = true;
            				}
            				break;
            				default:{
HXLINE(  67)					_hx_tmp6 = false;
            				}
            			}
HXDLIN(  67)			if (_hx_tmp6) {
HXLINE(  67)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  67)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  67)			bool _hx_tmp7;
HXDLIN(  67)			switch((int)(axes3->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  67)					_hx_tmp7 = true;
            				}
            				break;
            				default:{
HXLINE(  67)					_hx_tmp7 = false;
            				}
            			}
HXDLIN(  67)			if (_hx_tmp7) {
HXLINE(  67)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  67)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  68)		 ::Alphabet fh1 = this->noText;
HXDLIN(  68)		fh1->set_x((fh1->x + 200));
HXLINE(  69)		this->add(this->noText);
HXLINE(  70)		this->updateOptions();
            	}

Dynamic ResetScoreSubState_obj::__CreateEmpty() { return new ResetScoreSubState_obj; }

void *ResetScoreSubState_obj::_hx_vtable = 0;

Dynamic ResetScoreSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetScoreSubState_obj > _hx_result = new ResetScoreSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ResetScoreSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5d837fd8) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x5d837fd8;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ResetScoreSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4abb795b407cd203_74_update)
HXLINE(  75)		 ::flixel::FlxSprite fh = this->bg;
HXDLIN(  75)		fh->set_alpha((fh->alpha + (elapsed * ((Float)1.5))));
HXLINE(  76)		if ((this->bg->alpha > ((Float)0.6))) {
HXLINE(  76)			this->bg->set_alpha(((Float)0.6));
            		}
HXLINE(  78)		{
HXLINE(  78)			int _g = 0;
HXDLIN(  78)			int _g1 = this->alphabetArray->length;
HXDLIN(  78)			while((_g < _g1)){
HXLINE(  78)				_g = (_g + 1);
HXDLIN(  78)				int i = (_g - 1);
HXLINE(  79)				 ::Alphabet spr = this->alphabetArray->__get(i).StaticCast<  ::Alphabet >();
HXLINE(  80)				spr->set_alpha((spr->alpha + (elapsed * ((Float)2.5))));
            			}
            		}
HXLINE(  82)		if ((this->week == -1)) {
HXLINE(  82)			 ::HealthIcon fh = this->icon;
HXDLIN(  82)			fh->set_alpha((fh->alpha + (elapsed * ((Float)2.5))));
            		}
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE(  84)			_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            		}
            		else {
HXLINE(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  85)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),1,null(),null(),null(),null());
HXLINE(  86)			this->onYes = !(this->onYes);
HXLINE(  87)			this->updateOptions();
            		}
HXLINE(  89)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  90)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  90)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),1,null(),null(),null(),null());
HXLINE(  91)			this->close();
            		}
            		else {
HXLINE(  92)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  93)				if (this->onYes) {
HXLINE(  94)					if ((this->week == -1)) {
HXLINE(  95)						::Highscore_obj::resetSong(this->song,this->difficulty);
            					}
            					else {
HXLINE(  97)						::Highscore_obj::resetWeek(::WeekData_obj::weeksList->__get(this->week),this->difficulty);
            					}
            				}
HXLINE( 100)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 100)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),1,null(),null(),null(),null());
HXLINE( 101)				this->close();
            			}
            		}
HXLINE( 103)		this->super::update(elapsed);
            	}


void ResetScoreSubState_obj::updateOptions(){
            	HX_STACKFRAME(&_hx_pos_4abb795b407cd203_106_updateOptions)
HXLINE( 107)		::Array< Float > scales = ::Array_obj< Float >::fromData( _hx_array_data_9ecb92b4_4,2);
HXLINE( 108)		::Array< Float > alphas = ::Array_obj< Float >::fromData( _hx_array_data_9ecb92b4_5,2);
HXLINE( 109)		int confirmInt;
HXDLIN( 109)		if (this->onYes) {
HXLINE( 109)			confirmInt = 1;
            		}
            		else {
HXLINE( 109)			confirmInt = 0;
            		}
HXLINE( 111)		this->yesText->set_alpha(alphas->__get(confirmInt));
HXLINE( 112)		this->yesText->scale->set(scales->__get(confirmInt),scales->__get(confirmInt));
HXLINE( 113)		this->noText->set_alpha(alphas->__get((1 - confirmInt)));
HXLINE( 114)		this->noText->scale->set(scales->__get((1 - confirmInt)),scales->__get((1 - confirmInt)));
HXLINE( 115)		if ((this->week == -1)) {
HXLINE( 115)			this->icon->animation->_curAnim->set_curFrame(confirmInt);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ResetScoreSubState_obj,updateOptions,(void))


::hx::ObjectPtr< ResetScoreSubState_obj > ResetScoreSubState_obj::__new(::String song,int difficulty,::String character,::hx::Null< int >  __o_week) {
	::hx::ObjectPtr< ResetScoreSubState_obj > __this = new ResetScoreSubState_obj();
	__this->__construct(song,difficulty,character,__o_week);
	return __this;
}

::hx::ObjectPtr< ResetScoreSubState_obj > ResetScoreSubState_obj::__alloc(::hx::Ctx *_hx_ctx,::String song,int difficulty,::String character,::hx::Null< int >  __o_week) {
	ResetScoreSubState_obj *__this = (ResetScoreSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetScoreSubState_obj), true, "ResetScoreSubState"));
	*(void **)__this = ResetScoreSubState_obj::_hx_vtable;
	__this->__construct(song,difficulty,character,__o_week);
	return __this;
}

ResetScoreSubState_obj::ResetScoreSubState_obj()
{
}

void ResetScoreSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResetScoreSubState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(alphabetArray,"alphabetArray");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(onYes,"onYes");
	HX_MARK_MEMBER_NAME(yesText,"yesText");
	HX_MARK_MEMBER_NAME(noText,"noText");
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(difficulty,"difficulty");
	HX_MARK_MEMBER_NAME(week,"week");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResetScoreSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(alphabetArray,"alphabetArray");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(onYes,"onYes");
	HX_VISIT_MEMBER_NAME(yesText,"yesText");
	HX_VISIT_MEMBER_NAME(noText,"noText");
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(difficulty,"difficulty");
	HX_VISIT_MEMBER_NAME(week,"week");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResetScoreSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return ::hx::Val( icon ); }
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onYes") ) { return ::hx::Val( onYes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { return ::hx::Val( noText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yesText") ) { return ::hx::Val( yesText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"difficulty") ) { return ::hx::Val( difficulty ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphabetArray") ) { return ::hx::Val( alphabetArray ); }
		if (HX_FIELD_EQ(inName,"updateOptions") ) { return ::hx::Val( updateOptions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResetScoreSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast<  ::HealthIcon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onYes") ) { onYes=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"noText") ) { noText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yesText") ) { yesText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"difficulty") ) { difficulty=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphabetArray") ) { alphabetArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResetScoreSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("alphabetArray",e6,77,24,ff));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("onYes",48,bd,73,32));
	outFields->push(HX_("yesText",74,41,98,78));
	outFields->push(HX_("noText",8e,0d,8f,1c));
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("difficulty",3b,4e,8e,47));
	outFields->push(HX_("week",f4,5f,f5,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResetScoreSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ResetScoreSubState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ResetScoreSubState_obj,alphabetArray),HX_("alphabetArray",e6,77,24,ff)},
	{::hx::fsObject /*  ::HealthIcon */ ,(int)offsetof(ResetScoreSubState_obj,icon),HX_("icon",79,e7,b2,45)},
	{::hx::fsBool,(int)offsetof(ResetScoreSubState_obj,onYes),HX_("onYes",48,bd,73,32)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(ResetScoreSubState_obj,yesText),HX_("yesText",74,41,98,78)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(ResetScoreSubState_obj,noText),HX_("noText",8e,0d,8f,1c)},
	{::hx::fsString,(int)offsetof(ResetScoreSubState_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsInt,(int)offsetof(ResetScoreSubState_obj,difficulty),HX_("difficulty",3b,4e,8e,47)},
	{::hx::fsInt,(int)offsetof(ResetScoreSubState_obj,week),HX_("week",f4,5f,f5,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResetScoreSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetScoreSubState_obj_sMemberFields[] = {
	HX_("bg",c5,55,00,00),
	HX_("alphabetArray",e6,77,24,ff),
	HX_("icon",79,e7,b2,45),
	HX_("onYes",48,bd,73,32),
	HX_("yesText",74,41,98,78),
	HX_("noText",8e,0d,8f,1c),
	HX_("song",d5,23,58,4c),
	HX_("difficulty",3b,4e,8e,47),
	HX_("week",f4,5f,f5,4e),
	HX_("update",09,86,05,87),
	HX_("updateOptions",55,98,6c,ab),
	::String(null()) };

::hx::Class ResetScoreSubState_obj::__mClass;

void ResetScoreSubState_obj::__register()
{
	ResetScoreSubState_obj _hx_dummy;
	ResetScoreSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResetScoreSubState",b4,92,cb,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetScoreSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetScoreSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetScoreSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetScoreSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

