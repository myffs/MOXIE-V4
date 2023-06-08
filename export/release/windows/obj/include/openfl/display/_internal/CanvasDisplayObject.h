#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObject
#define INCLUDED_openfl_display__internal_CanvasDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasDisplayObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasDisplayObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasDisplayObject_obj OBJ_;
		CanvasDisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x5717e8bb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasDisplayObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasDisplayObject"); }

		inline static ::hx::ObjectPtr< CanvasDisplayObject_obj > __new() {
			::hx::ObjectPtr< CanvasDisplayObject_obj > __this = new CanvasDisplayObject_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasDisplayObject_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasDisplayObject_obj *__this = (CanvasDisplayObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasDisplayObject_obj), false, "openfl.display._internal.CanvasDisplayObject"));
			*(void **)__this = CanvasDisplayObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasDisplayObject_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasDisplayObject",89,86,07,65); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasDisplayObject */ 
