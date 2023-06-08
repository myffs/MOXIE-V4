#ifndef INCLUDED_openfl_text_TextLineMetrics
#define INCLUDED_openfl_text_TextLineMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_769ce4a0cb4bebca_89_new)
HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextLineMetrics_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextLineMetrics_obj OBJ_;
		TextLineMetrics_obj();

	public:
		enum { _hx_ClassId = 0x3ebfbfc5 };

		void __construct(Float x,Float width,Float height,Float ascent,Float descent,Float leading);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text.TextLineMetrics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text.TextLineMetrics"); }

		inline static ::hx::ObjectPtr< TextLineMetrics_obj > __new(Float x,Float width,Float height,Float ascent,Float descent,Float leading) {
			::hx::ObjectPtr< TextLineMetrics_obj > __this = new TextLineMetrics_obj();
			__this->__construct(x,width,height,ascent,descent,leading);
			return __this;
		}

		inline static ::hx::ObjectPtr< TextLineMetrics_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float width,Float height,Float ascent,Float descent,Float leading) {
			TextLineMetrics_obj *__this = (TextLineMetrics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextLineMetrics_obj), false, "openfl.text.TextLineMetrics"));
			*(void **)__this = TextLineMetrics_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_769ce4a0cb4bebca_89_new)
HXLINE(  90)		( ( ::openfl::text::TextLineMetrics)(__this) )->x = x;
HXLINE(  91)		( ( ::openfl::text::TextLineMetrics)(__this) )->width = width;
HXLINE(  92)		( ( ::openfl::text::TextLineMetrics)(__this) )->height = height;
HXLINE(  93)		( ( ::openfl::text::TextLineMetrics)(__this) )->ascent = ascent;
HXLINE(  94)		( ( ::openfl::text::TextLineMetrics)(__this) )->descent = descent;
HXLINE(  95)		( ( ::openfl::text::TextLineMetrics)(__this) )->leading = leading;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextLineMetrics_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextLineMetrics",e2,c0,45,7d); }

		Float ascent;
		Float descent;
		Float height;
		Float leading;
		Float width;
		Float x;
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextLineMetrics */ 
