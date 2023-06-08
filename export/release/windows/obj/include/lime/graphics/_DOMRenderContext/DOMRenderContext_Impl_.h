#ifndef INCLUDED_lime_graphics__DOMRenderContext_DOMRenderContext_Impl_
#define INCLUDED_lime_graphics__DOMRenderContext_DOMRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_DOMRenderContext,DOMRenderContext_Impl_)

namespace lime{
namespace graphics{
namespace _DOMRenderContext{


class HXCPP_CLASS_ATTRIBUTES DOMRenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMRenderContext_Impl__obj OBJ_;
		DOMRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0b6b058d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._DOMRenderContext.DOMRenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._DOMRenderContext.DOMRenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< DOMRenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< DOMRenderContext_Impl__obj > __this = new DOMRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMRenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMRenderContext_Impl__obj *__this = (DOMRenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMRenderContext_Impl__obj), false, "lime.graphics._DOMRenderContext.DOMRenderContext_Impl_"));
			*(void **)__this = DOMRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMRenderContext_Impl_",57,d5,75,22); }

		static  ::Dynamic fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _DOMRenderContext

#endif /* INCLUDED_lime_graphics__DOMRenderContext_DOMRenderContext_Impl_ */ 
