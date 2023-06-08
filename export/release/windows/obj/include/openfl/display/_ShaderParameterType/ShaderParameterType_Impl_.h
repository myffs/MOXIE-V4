#ifndef INCLUDED_openfl_display__ShaderParameterType_ShaderParameterType_Impl_
#define INCLUDED_openfl_display__ShaderParameterType_ShaderParameterType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_ShaderParameterType,ShaderParameterType_Impl_)

namespace openfl{
namespace display{
namespace _ShaderParameterType{


class HXCPP_CLASS_ATTRIBUTES ShaderParameterType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderParameterType_Impl__obj OBJ_;
		ShaderParameterType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6628ebb9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._ShaderParameterType.ShaderParameterType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._ShaderParameterType.ShaderParameterType_Impl_"); }

		inline static ::hx::ObjectPtr< ShaderParameterType_Impl__obj > __new() {
			::hx::ObjectPtr< ShaderParameterType_Impl__obj > __this = new ShaderParameterType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderParameterType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderParameterType_Impl__obj *__this = (ShaderParameterType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderParameterType_Impl__obj), false, "openfl.display._ShaderParameterType.ShaderParameterType_Impl_"));
			*(void **)__this = ShaderParameterType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderParameterType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderParameterType_Impl_",9e,c1,8a,62); }

		static void __boot();
		static  ::Dynamic BOOL;
		static  ::Dynamic BOOL2;
		static  ::Dynamic BOOL3;
		static  ::Dynamic BOOL4;
		static  ::Dynamic FLOAT;
		static  ::Dynamic FLOAT2;
		static  ::Dynamic FLOAT3;
		static  ::Dynamic FLOAT4;
		static  ::Dynamic INT;
		static  ::Dynamic INT2;
		static  ::Dynamic INT3;
		static  ::Dynamic INT4;
		static  ::Dynamic MATRIX2X2;
		static  ::Dynamic MATRIX2X3;
		static  ::Dynamic MATRIX2X4;
		static  ::Dynamic MATRIX3X2;
		static  ::Dynamic MATRIX3X3;
		static  ::Dynamic MATRIX3X4;
		static  ::Dynamic MATRIX4X2;
		static  ::Dynamic MATRIX4X3;
		static  ::Dynamic MATRIX4X4;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderParameterType

#endif /* INCLUDED_openfl_display__ShaderParameterType_ShaderParameterType_Impl_ */ 
