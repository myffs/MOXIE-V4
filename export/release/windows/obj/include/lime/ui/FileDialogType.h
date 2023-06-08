#ifndef INCLUDED_lime_ui_FileDialogType
#define INCLUDED_lime_ui_FileDialogType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,FileDialogType)
namespace lime{
namespace ui{


class FileDialogType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FileDialogType_obj OBJ_;

	public:
		FileDialogType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.ui.FileDialogType",9f,fa,49,8a); }
		::String __ToString() const { return HX_("FileDialogType.",10,31,8a,00) + _hx_tag; }

		static ::lime::ui::FileDialogType OPEN;
		static inline ::lime::ui::FileDialogType OPEN_dyn() { return OPEN; }
		static ::lime::ui::FileDialogType OPEN_DIRECTORY;
		static inline ::lime::ui::FileDialogType OPEN_DIRECTORY_dyn() { return OPEN_DIRECTORY; }
		static ::lime::ui::FileDialogType OPEN_MULTIPLE;
		static inline ::lime::ui::FileDialogType OPEN_MULTIPLE_dyn() { return OPEN_MULTIPLE; }
		static ::lime::ui::FileDialogType SAVE;
		static inline ::lime::ui::FileDialogType SAVE_dyn() { return SAVE; }
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_FileDialogType */ 
