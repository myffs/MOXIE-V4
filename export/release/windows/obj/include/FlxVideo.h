#ifndef INCLUDED_FlxVideo
#define INCLUDED_FlxVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS0(FlxVideo)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(vlc,VlcBitmap)



class HXCPP_CLASS_ATTRIBUTES FlxVideo_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxVideo_obj OBJ_;
		FlxVideo_obj();

	public:
		enum { _hx_ClassId = 0x4f671189 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FlxVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FlxVideo"); }
		static ::hx::ObjectPtr< FlxVideo_obj > __new(::String name);
		static ::hx::ObjectPtr< FlxVideo_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVideo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVideo",c9,1e,d6,f3); }

		static  ::vlc::VlcBitmap vlcBitmap;
		static void onFocus();
		static ::Dynamic onFocus_dyn();

		static void onFocusLost();
		static ::Dynamic onFocusLost_dyn();

		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		::String checkFile(::String fileName);
		::Dynamic checkFile_dyn();

		void fixVolume( ::openfl::events::Event e);
		::Dynamic fixVolume_dyn();

		void onVLCComplete();
		::Dynamic onVLCComplete_dyn();

		void onVLCError();
		::Dynamic onVLCError_dyn();

};


#endif /* INCLUDED_FlxVideo */ 
