#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DialogueCharacter
#include <DialogueCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5932b697384537c_56_new,"DialogueCharacter","new",0x232608c3,"DialogueCharacter.new","DialogueBoxPsych.hx",56,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_89_reloadCharacterJson,"DialogueCharacter","reloadCharacterJson",0x855c59bb,"DialogueCharacter.reloadCharacterJson","DialogueBoxPsych.hx",89,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_112_reloadAnimations,"DialogueCharacter","reloadAnimations",0xc9b79b65,"DialogueCharacter.reloadAnimations","DialogueBoxPsych.hx",112,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_123_playAnim,"DialogueCharacter","playAnim",0x25fc6ae2,"DialogueCharacter.playAnim","DialogueBoxPsych.hx",123,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_158_animationIsLoop,"DialogueCharacter","animationIsLoop",0x9ed1aa75,"DialogueCharacter.animationIsLoop","DialogueBoxPsych.hx",158,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_58_boot,"DialogueCharacter","boot",0x963aa26f,"DialogueCharacter.boot","DialogueBoxPsych.hx",58,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_59_boot,"DialogueCharacter","boot",0x963aa26f,"DialogueCharacter.boot","DialogueBoxPsych.hx",59,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_d5932b697384537c_60_boot,"DialogueCharacter","boot",0x963aa26f,"DialogueCharacter.boot","DialogueBoxPsych.hx",60,0xf6ef1736)

void DialogueCharacter_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d5932b697384537c_56_new)
HXLINE(  73)		this->skipping = 0;
HXLINE(  72)		this->skiptimer = 0;
HXLINE(  71)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  70)		this->isGhost = false;
HXLINE(  69)		this->startingPos = ((Float)0);
HXLINE(  64)		this->dialogueAnimations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  62)		this->jsonFile = null();
HXLINE(  76)		super::__construct(x,y,null());
HXLINE(  78)		if (::hx::IsNull( character )) {
HXLINE(  78)			character = ::DialogueCharacter_obj::DEFAULT_CHARACTER;
            		}
HXLINE(  79)		this->curCharacter = character;
HXLINE(  81)		this->reloadCharacterJson(character);
HXLINE(  82)		::String key = ( (::String)((HX_("dialogue/",17,48,13,fa) + this->jsonFile->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic))) );
HXDLIN(  82)		::String library = null();
HXDLIN(  82)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN(  82)		bool xmlExists = false;
HXDLIN(  82)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  82)			xmlExists = true;
            		}
HXDLIN(  82)		 ::Dynamic _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  82)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  82)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN(  82)			_hx_tmp = returnAsset;
            		}
HXDLIN(  82)		::String _hx_tmp1;
HXDLIN(  82)		if (xmlExists) {
HXLINE(  82)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  82)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  83)		this->reloadAnimations();
HXLINE(  85)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  86)		if (::hx::IsEq( this->jsonFile->__Field(HX_("no_antialiasing",f2,74,67,98),::hx::paccDynamic),true )) {
HXLINE(  86)			this->set_antialiasing(false);
            		}
            	}

Dynamic DialogueCharacter_obj::__CreateEmpty() { return new DialogueCharacter_obj; }

void *DialogueCharacter_obj::_hx_vtable = 0;

Dynamic DialogueCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueCharacter_obj > _hx_result = new DialogueCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DialogueCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fc7f3a5;
	}
}

void DialogueCharacter_obj::reloadCharacterJson(::String character){
            	HX_GC_STACKFRAME(&_hx_pos_d5932b697384537c_89_reloadCharacterJson)
HXLINE(  90)		::String characterPath = ((HX_("images/dialogue/",c0,b0,32,12) + character) + HX_(".json",56,f1,d6,c2));
HXLINE(  91)		::String rawJson = null();
HXLINE(  94)		::String path = ::Paths_obj::modFolders(characterPath);
HXLINE(  95)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  96)			::String file = characterPath;
HXDLIN(  96)			if (::hx::IsNull( file )) {
HXLINE(  96)				file = HX_("",00,00,00,00);
            			}
HXDLIN(  96)			path = (HX_("assets/",4c,2a,dc,36) + file);
            		}
HXLINE(  99)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 100)			::String file = ((HX_("images/dialogue/",c0,b0,32,12) + ::DialogueCharacter_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN( 100)			if (::hx::IsNull( file )) {
HXLINE( 100)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 100)			path = (HX_("assets/",4c,2a,dc,36) + file);
            		}
HXLINE( 102)		rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 109)		this->jsonFile =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogueCharacter_obj,reloadCharacterJson,(void))

void DialogueCharacter_obj::reloadAnimations(){
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_112_reloadAnimations)
HXLINE( 113)		this->dialogueAnimations->clear();
HXLINE( 114)		bool _hx_tmp;
HXDLIN( 114)		if (::hx::IsNotNull( this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic) )) {
HXLINE( 114)			_hx_tmp = (( (::Array< ::Dynamic>)(this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) )->length > 0);
            		}
            		else {
HXLINE( 114)			_hx_tmp = false;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->jsonFile->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) );
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				 ::Dynamic anim = _g1->__get(_g);
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 116)				this->animation->addByPrefix(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ),( (::String)(anim->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) ),24,this->isGhost,null(),null());
HXLINE( 117)				this->animation->addByPrefix(( (::String)((anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic) + ::DialogueCharacter_obj::IDLE_SUFFIX)) ),( (::String)(anim->__Field(HX_("idle_name",96,be,e2,c5),::hx::paccDynamic)) ),24,true,null(),null());
HXLINE( 118)				this->dialogueAnimations->set(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ),anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueCharacter_obj,reloadAnimations,(void))

void DialogueCharacter_obj::playAnim(::String animName,::hx::Null< bool >  __o_playIdle){
            		bool playIdle = __o_playIdle.Default(false);
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_123_playAnim)
HXLINE( 124)		::String leAnim = animName;
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( animName )) {
HXLINE( 125)			_hx_tmp = !(this->dialogueAnimations->exists(animName));
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 126)			::Array< ::String > arrayAnims = ::Array_obj< ::String >::__new(0);
HXLINE( 127)			{
HXLINE( 127)				 ::Dynamic anim = this->dialogueAnimations->iterator();
HXDLIN( 127)				while(( (bool)(anim->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 127)					 ::Dynamic anim1 = anim->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 128)					arrayAnims->push( ::Dynamic(anim1->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)));
            				}
            			}
HXLINE( 130)			if ((arrayAnims->length > 0)) {
HXLINE( 131)				leAnim = arrayAnims->__get(::flixel::FlxG_obj::random->_hx_int(0,(arrayAnims->length - 1),null()));
            			}
            		}
HXLINE( 135)		bool _hx_tmp1;
HXDLIN( 135)		if (this->dialogueAnimations->exists(leAnim)) {
HXLINE( 136)			bool _hx_tmp;
HXDLIN( 136)			if (::hx::IsNotNull( this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic) )) {
HXLINE( 136)				_hx_tmp = (( (::String)(this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) ).length < 1);
            			}
            			else {
HXLINE( 136)				_hx_tmp = true;
            			}
HXDLIN( 136)			if (!(_hx_tmp)) {
HXLINE( 138)				::String _hx_tmp = ( (::String)(this->dialogueAnimations->get(leAnim)->__Field(HX_("loop_name",46,3d,8f,96),::hx::paccDynamic)) );
HXLINE( 135)				_hx_tmp1 = ::hx::IsEq( _hx_tmp,this->dialogueAnimations->get(leAnim)->__Field(HX_("idle_name",96,be,e2,c5),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 135)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 135)			_hx_tmp1 = false;
            		}
HXDLIN( 135)		if (_hx_tmp1) {
HXLINE( 139)			playIdle = true;
            		}
HXLINE( 141)		::String _hx_tmp2;
HXDLIN( 141)		if (playIdle) {
HXLINE( 141)			_hx_tmp2 = (leAnim + ::DialogueCharacter_obj::IDLE_SUFFIX);
            		}
            		else {
HXLINE( 141)			_hx_tmp2 = leAnim;
            		}
HXDLIN( 141)		this->animation->play(_hx_tmp2,false,null(),null());
HXLINE( 143)		if (this->dialogueAnimations->exists(leAnim)) {
HXLINE( 144)			 ::Dynamic anim = this->dialogueAnimations->get(leAnim);
HXLINE( 145)			if (playIdle) {
HXLINE( 146)				this->offset->set( ::Dynamic(anim->__Field(HX_("idle_offsets",15,3e,2c,b8),::hx::paccDynamic))->__GetItem(0), ::Dynamic(anim->__Field(HX_("idle_offsets",15,3e,2c,b8),::hx::paccDynamic))->__GetItem(1));
            			}
            			else {
HXLINE( 149)				this->offset->set( ::Dynamic(anim->__Field(HX_("loop_offsets",65,0d,38,58),::hx::paccDynamic))->__GetItem(0), ::Dynamic(anim->__Field(HX_("loop_offsets",65,0d,38,58),::hx::paccDynamic))->__GetItem(1));
            			}
            		}
            		else {
HXLINE( 153)			this->offset->set(0,0);
HXLINE( 154)			::String _hx_tmp;
HXDLIN( 154)			if (playIdle) {
HXLINE( 154)				_hx_tmp = HX_("idle anim",9d,46,16,77);
            			}
            			else {
HXLINE( 154)				_hx_tmp = HX_("loop anim",4d,c5,c2,47);
            			}
HXDLIN( 154)			::haxe::Log_obj::trace((((HX_("Offsets not found! Dialogue character is badly formatted, anim: ",ce,cc,78,b6) + leAnim) + HX_(", ",74,26,00,00)) + _hx_tmp),::hx::SourceInfo(HX_("source/DialogueBoxPsych.hx",c2,b0,33,e8),154,HX_("DialogueCharacter",51,eb,23,69),HX_("playAnim",25,ea,84,30)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DialogueCharacter_obj,playAnim,(void))

bool DialogueCharacter_obj::animationIsLoop(){
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_158_animationIsLoop)
HXLINE( 159)		if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 159)			return false;
            		}
HXLINE( 160)		return !(::StringTools_obj::endsWith(this->animation->_curAnim->name,::DialogueCharacter_obj::IDLE_SUFFIX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueCharacter_obj,animationIsLoop,return )

::String DialogueCharacter_obj::IDLE_SUFFIX;

::String DialogueCharacter_obj::DEFAULT_CHARACTER;

Float DialogueCharacter_obj::DEFAULT_SCALE;


::hx::ObjectPtr< DialogueCharacter_obj > DialogueCharacter_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character) {
	::hx::ObjectPtr< DialogueCharacter_obj > __this = new DialogueCharacter_obj();
	__this->__construct(__o_x,__o_y,character);
	return __this;
}

::hx::ObjectPtr< DialogueCharacter_obj > DialogueCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::String character) {
	DialogueCharacter_obj *__this = (DialogueCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueCharacter_obj), true, "DialogueCharacter"));
	*(void **)__this = DialogueCharacter_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,character);
	return __this;
}

DialogueCharacter_obj::DialogueCharacter_obj()
{
}

void DialogueCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueCharacter);
	HX_MARK_MEMBER_NAME(jsonFile,"jsonFile");
	HX_MARK_MEMBER_NAME(dialogueAnimations,"dialogueAnimations");
	HX_MARK_MEMBER_NAME(startingPos,"startingPos");
	HX_MARK_MEMBER_NAME(isGhost,"isGhost");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(skiptimer,"skiptimer");
	HX_MARK_MEMBER_NAME(skipping,"skipping");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jsonFile,"jsonFile");
	HX_VISIT_MEMBER_NAME(dialogueAnimations,"dialogueAnimations");
	HX_VISIT_MEMBER_NAME(startingPos,"startingPos");
	HX_VISIT_MEMBER_NAME(isGhost,"isGhost");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(skiptimer,"skiptimer");
	HX_VISIT_MEMBER_NAME(skipping,"skipping");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isGhost") ) { return ::hx::Val( isGhost ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jsonFile") ) { return ::hx::Val( jsonFile ); }
		if (HX_FIELD_EQ(inName,"skipping") ) { return ::hx::Val( skipping ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"skiptimer") ) { return ::hx::Val( skiptimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startingPos") ) { return ::hx::Val( startingPos ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationIsLoop") ) { return ::hx::Val( animationIsLoop_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadAnimations") ) { return ::hx::Val( reloadAnimations_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dialogueAnimations") ) { return ::hx::Val( dialogueAnimations ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reloadCharacterJson") ) { return ::hx::Val( reloadCharacterJson_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"IDLE_SUFFIX") ) { outValue = ( IDLE_SUFFIX ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_SCALE") ) { outValue = ( DEFAULT_SCALE ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val DialogueCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isGhost") ) { isGhost=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jsonFile") ) { jsonFile=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipping") ) { skipping=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"skiptimer") ) { skiptimer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startingPos") ) { startingPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dialogueAnimations") ) { dialogueAnimations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"IDLE_SUFFIX") ) { IDLE_SUFFIX=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_SCALE") ) { DEFAULT_SCALE=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void DialogueCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("jsonFile",c4,70,4d,43));
	outFields->push(HX_("dialogueAnimations",27,b4,15,10));
	outFields->push(HX_("startingPos",b4,ab,30,d9));
	outFields->push(HX_("isGhost",05,33,de,2f));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("skiptimer",e6,bc,03,91));
	outFields->push(HX_("skipping",71,b4,d3,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueCharacter_obj,jsonFile),HX_("jsonFile",c4,70,4d,43)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(DialogueCharacter_obj,dialogueAnimations),HX_("dialogueAnimations",27,b4,15,10)},
	{::hx::fsFloat,(int)offsetof(DialogueCharacter_obj,startingPos),HX_("startingPos",b4,ab,30,d9)},
	{::hx::fsBool,(int)offsetof(DialogueCharacter_obj,isGhost),HX_("isGhost",05,33,de,2f)},
	{::hx::fsString,(int)offsetof(DialogueCharacter_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsInt,(int)offsetof(DialogueCharacter_obj,skiptimer),HX_("skiptimer",e6,bc,03,91)},
	{::hx::fsInt,(int)offsetof(DialogueCharacter_obj,skipping),HX_("skipping",71,b4,d3,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DialogueCharacter_obj::IDLE_SUFFIX,HX_("IDLE_SUFFIX",dc,fb,17,9b)},
	{::hx::fsString,(void *) &DialogueCharacter_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{::hx::fsFloat,(void *) &DialogueCharacter_obj::DEFAULT_SCALE,HX_("DEFAULT_SCALE",0c,a9,44,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueCharacter_obj_sMemberFields[] = {
	HX_("jsonFile",c4,70,4d,43),
	HX_("dialogueAnimations",27,b4,15,10),
	HX_("startingPos",b4,ab,30,d9),
	HX_("isGhost",05,33,de,2f),
	HX_("curCharacter",09,86,7c,d7),
	HX_("skiptimer",e6,bc,03,91),
	HX_("skipping",71,b4,d3,d5),
	HX_("reloadCharacterJson",58,eb,4f,24),
	HX_("reloadAnimations",a8,95,85,94),
	HX_("playAnim",25,ea,84,30),
	HX_("animationIsLoop",92,e9,1a,74),
	::String(null()) };

static void DialogueCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::IDLE_SUFFIX,"IDLE_SUFFIX");
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
	HX_MARK_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_SCALE,"DEFAULT_SCALE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::IDLE_SUFFIX,"IDLE_SUFFIX");
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
	HX_VISIT_MEMBER_NAME(DialogueCharacter_obj::DEFAULT_SCALE,"DEFAULT_SCALE");
};

#endif

::hx::Class DialogueCharacter_obj::__mClass;

static ::String DialogueCharacter_obj_sStaticFields[] = {
	HX_("IDLE_SUFFIX",dc,fb,17,9b),
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	HX_("DEFAULT_SCALE",0c,a9,44,ec),
	::String(null())
};

void DialogueCharacter_obj::__register()
{
	DialogueCharacter_obj _hx_dummy;
	DialogueCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueCharacter",51,eb,23,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_58_boot)
HXDLIN(  58)		IDLE_SUFFIX = HX_("-IDLE",c1,89,7c,19);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_59_boot)
HXDLIN(  59)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d5932b697384537c_60_boot)
HXDLIN(  60)		DEFAULT_SCALE = ((Float)0.7);
            	}
}

