#ifndef INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_
#define INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_hx_system,_TouchscreenType,TouchscreenType_Impl_)

namespace openfl{
namespace _hx_system{
namespace _TouchscreenType{


class HXCPP_CLASS_ATTRIBUTES TouchscreenType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TouchscreenType_Impl__obj OBJ_;
		TouchscreenType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3753ff40 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system._TouchscreenType.TouchscreenType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.system._TouchscreenType.TouchscreenType_Impl_"); }

		inline static ::hx::ObjectPtr< TouchscreenType_Impl__obj > __new() {
			::hx::ObjectPtr< TouchscreenType_Impl__obj > __this = new TouchscreenType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TouchscreenType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TouchscreenType_Impl__obj *__this = (TouchscreenType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchscreenType_Impl__obj), false, "openfl.system._TouchscreenType.TouchscreenType_Impl_"));
			*(void **)__this = TouchscreenType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TouchscreenType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TouchscreenType_Impl_",05,2b,d5,75); }

		static void __boot();
		static  ::Dynamic FINGER;
		static  ::Dynamic NONE;
		static  ::Dynamic STYLUS;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace system
} // end namespace _TouchscreenType

#endif /* INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_ */ 
