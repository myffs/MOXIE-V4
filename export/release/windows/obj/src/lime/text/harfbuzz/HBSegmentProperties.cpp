#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBSegmentProperties
#include <lime/text/harfbuzz/HBSegmentProperties.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfdc9bdb1c536a26_6_new,"lime.text.harfbuzz.HBSegmentProperties","new",0x1dc39f38,"lime.text.harfbuzz.HBSegmentProperties.new","lime/text/harfbuzz/HBSegmentProperties.hx",6,0x50e9c799)
namespace lime{
namespace text{
namespace harfbuzz{

void HBSegmentProperties_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cfdc9bdb1c536a26_6_new)
            	}

Dynamic HBSegmentProperties_obj::__CreateEmpty() { return new HBSegmentProperties_obj; }

void *HBSegmentProperties_obj::_hx_vtable = 0;

Dynamic HBSegmentProperties_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBSegmentProperties_obj > _hx_result = new HBSegmentProperties_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBSegmentProperties_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e7caa2a;
}


HBSegmentProperties_obj::HBSegmentProperties_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBSegmentProperties_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBSegmentProperties_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBSegmentProperties_obj::__mClass;

void HBSegmentProperties_obj::__register()
{
	HBSegmentProperties_obj _hx_dummy;
	HBSegmentProperties_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz.HBSegmentProperties",46,e3,cd,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBSegmentProperties_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBSegmentProperties_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBSegmentProperties_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
