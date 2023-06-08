#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFireTongue_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("getFont",85,0d,43,16),
	HX_("getFontSize",e6,80,c5,f4),
	HX_("locale",9a,74,bf,59),
	::String(null()) };

::hx::Class IFireTongue_obj::__mClass;

void IFireTongue_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IFireTongue",e0,07,68,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFireTongue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x5661c266 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
