#ifndef INCLUDED_ModchartSprite
#define INCLUDED_ModchartSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(ModchartSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ModchartSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef ModchartSprite_obj OBJ_;
		ModchartSprite_obj();

	public:
		enum { _hx_ClassId = 0x245adc71 };

		void __construct( ::Dynamic __o_x, ::Dynamic __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ModchartSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ModchartSprite"); }
		static ::hx::ObjectPtr< ModchartSprite_obj > __new( ::Dynamic __o_x, ::Dynamic __o_y);
		static ::hx::ObjectPtr< ModchartSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModchartSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModchartSprite",21,38,77,a5); }

		bool wasAdded;
};


#endif /* INCLUDED_ModchartSprite */ 
