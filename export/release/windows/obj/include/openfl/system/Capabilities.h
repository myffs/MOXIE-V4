#ifndef INCLUDED_openfl_system_Capabilities
#define INCLUDED_openfl_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_hx_system,Capabilities)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Capabilities_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();

	public:
		enum { _hx_ClassId = 0x1bca9d55 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system.Capabilities")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.system.Capabilities"); }

		inline static ::hx::ObjectPtr< Capabilities_obj > __new() {
			::hx::ObjectPtr< Capabilities_obj > __this = new Capabilities_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Capabilities_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Capabilities_obj *__this = (Capabilities_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Capabilities_obj), false, "openfl.system.Capabilities"));
			*(void **)__this = Capabilities_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Capabilities_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Capabilities",56,9a,a5,fb); }

		static void __boot();
		static bool avHardwareDisable;
		static bool hasAccessibility;
		static bool hasAudio;
		static bool hasAudioEncoder;
		static bool hasEmbeddedVideo;
		static bool hasIME;
		static bool hasMP3;
		static bool hasPrinting;
		static bool hasScreenBroadcast;
		static bool hasScreenPlayback;
		static bool hasStreamingAudio;
		static bool hasStreamingVideo;
		static bool hasTLS;
		static bool hasVideoEncoder;
		static bool isDebugger;
		static bool isEmbeddedInAcrobat;
		static bool localFileReadDisable;
		static int maxLevelIDC;
		static ::String playerType;
		static ::String screenColor;
		static ::String serverString;
		static bool supports32BitProcesses;
		static bool supports64BitProcesses;
		static  ::Dynamic touchscreenType;
		static ::Array< int > _hx___standardDensities;
		static bool hasMultiChannelAudio(::String type);
		static ::Dynamic hasMultiChannelAudio_dyn();

		static ::String get_cpuArchitecture();
		static ::Dynamic get_cpuArchitecture_dyn();

		static ::String get_language();
		static ::Dynamic get_language_dyn();

		static ::String get_manufacturer();
		static ::Dynamic get_manufacturer_dyn();

		static ::String get_os();
		static ::Dynamic get_os_dyn();

		static Float get_pixelAspectRatio();
		static ::Dynamic get_pixelAspectRatio_dyn();

		static Float get_screenDPI();
		static ::Dynamic get_screenDPI_dyn();

		static Float get_screenResolutionX();
		static ::Dynamic get_screenResolutionX_dyn();

		static Float get_screenResolutionY();
		static ::Dynamic get_screenResolutionY_dyn();

		static ::String get_version();
		static ::Dynamic get_version_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_Capabilities */ 
