#ifndef INCLUDED_Alphabet
#define INCLUDED_Alphabet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(AlphaCharacter)
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)



class HXCPP_CLASS_ATTRIBUTES Alphabet_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef Alphabet_obj OBJ_;
		Alphabet_obj();

	public:
		enum { _hx_ClassId = 0x567b2b93 };

		void __construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Alphabet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Alphabet"); }
		static ::hx::ObjectPtr< Alphabet_obj > __new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize);
		static ::hx::ObjectPtr< Alphabet_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alphabet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Alphabet",d3,38,ea,fa); }

		static void __boot();
		static  ::openfl::media::Sound soundDialog;
		static void setDialogueSound(::String name);
		static ::Dynamic setDialogueSound_dyn();

		Float delay;
		bool paused;
		Float forceX;
		Float targetY;
		Float yMult;
		Float xAdd;
		Float yAdd;
		bool isMenuItem;
		Float textSize;
		::String text;
		::String _finalText;
		Float yMulti;
		 ::AlphaCharacter lastSprite;
		bool xPosResetted;
		::Array< ::String > splitWords;
		bool isBold;
		::Array< ::Dynamic> lettersArray;
		bool finishedText;
		bool typed;
		Float typingSpeed;
		void changeText(::String newText,::hx::Null< Float >  newTypingSpeed);
		::Dynamic changeText_dyn();

		void addText();
		::Dynamic addText_dyn();

		void doSplitWords();
		::Dynamic doSplitWords_dyn();

		int loopNum;
		Float xPos;
		int curRow;
		 ::flixel::_hx_system::FlxSound dialogueSound;
		int consecutiveSpaces;
		 ::flixel::util::FlxTimer typeTimer;
		void startTypedText(Float speed);
		::Dynamic startTypedText_dyn();

		Float LONG_TEXT_ADD;
		void timerCheck( ::flixel::util::FlxTimer tmr);
		::Dynamic timerCheck_dyn();

		virtual void update(Float elapsed);

		void killTheTimer();
		::Dynamic killTheTimer_dyn();

};


#endif /* INCLUDED_Alphabet */ 
