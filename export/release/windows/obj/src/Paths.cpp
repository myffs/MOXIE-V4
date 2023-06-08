#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_53_excludeAsset,"Paths","excludeAsset",0x536bc616,"Paths.excludeAsset","Paths.hx",53,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_64_clearUnusedMemory,"Paths","clearUnusedMemory",0xc76b6c84,"Paths.clearUnusedMemory","Paths.hx",64,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_87_clearStoredMemory,"Paths","clearStoredMemory",0xf472dc91,"Paths.clearStoredMemory","Paths.hx",87,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_118_setCurrentLevel,"Paths","setCurrentLevel",0x8a8c27ed,"Paths.setCurrentLevel","Paths.hx",118,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_122_getPath,"Paths","getPath",0x5f104ffb,"Paths.getPath","Paths.hx",122,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_145_getLibraryPath,"Paths","getLibraryPath",0xe56efeaa,"Paths.getLibraryPath","Paths.hx",145,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_149_getLibraryPathForce,"Paths","getLibraryPathForce",0xe1e5bae1,"Paths.getLibraryPathForce","Paths.hx",149,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_156_getPreloadPath,"Paths","getPreloadPath",0x2fdd9e78,"Paths.getPreloadPath","Paths.hx",156,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_161_file,"Paths","file",0x8f872fdc,"Paths.file","Paths.hx",161,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_166_txt,"Paths","txt",0x5a3a5910,"Paths.txt","Paths.hx",166,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_171_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",171,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_176_json,"Paths","json",0x9233a388,"Paths.json","Paths.hx",176,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_181_shaderFragment,"Paths","shaderFragment",0x1089e175,"Paths.shaderFragment","Paths.hx",181,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_185_shaderVertex,"Paths","shaderVertex",0x334c39c9,"Paths.shaderVertex","Paths.hx",185,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_189_lua,"Paths","lua",0x5a344458,"Paths.lua","Paths.hx",189,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_193_video,"Paths","video",0x3d25e71b,"Paths.video","Paths.hx",193,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_204_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",204,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_211_soundRandom,"Paths","soundRandom",0x8e79b2d2,"Paths.soundRandom","Paths.hx",211,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_215_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",215,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_221_voices,"Paths","voices",0xbbb84fe1,"Paths.voices","Paths.hx",221,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_228_inst,"Paths","inst",0x9186a526,"Paths.inst","Paths.hx",228,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_235_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",235,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_242_getTextFromFile,"Paths","getTextFromFile",0xab54cb29,"Paths.getTextFromFile","Paths.hx",242,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_270_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",270,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_281_fileExists,"Paths","fileExists",0x907b0ed8,"Paths.fileExists","Paths.hx",281,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_295_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",295,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_311_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",311,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_326_formatToSongPath,"Paths","formatToSongPath",0xb1c0282c,"Paths.formatToSongPath","Paths.hx",326,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_331_returnGraphic,"Paths","returnGraphic",0xc1c34678,"Paths.returnGraphic","Paths.hx",331,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_359_returnSound,"Paths","returnSound",0xb166e49f,"Paths.returnSound","Paths.hx",359,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_386_mods,"Paths","mods",0x942c34d1,"Paths.mods","Paths.hx",386,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_390_modsFont,"Paths","modsFont",0x75aefb40,"Paths.modsFont","Paths.hx",390,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_394_modsJson,"Paths","modsJson",0x7856df99,"Paths.modsJson","Paths.hx",394,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_398_modsVideo,"Paths","modsVideo",0xb5d739ea,"Paths.modsVideo","Paths.hx",398,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_402_modsSounds,"Paths","modsSounds",0xb3144475,"Paths.modsSounds","Paths.hx",402,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_406_modsImages,"Paths","modsImages",0x7f77ec69,"Paths.modsImages","Paths.hx",406,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_410_modsXml,"Paths","modsXml",0x38d50986,"Paths.modsXml","Paths.hx",410,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_414_modsTxt,"Paths","modsTxt",0x38d20a1f,"Paths.modsTxt","Paths.hx",414,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_419_modsShaderFragment,"Paths","modsShaderFragment",0xd0553cc6,"Paths.modsShaderFragment","Paths.hx",419,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_423_modsShaderVertex,"Paths","modsShaderVertex",0x0b136eda,"Paths.modsShaderVertex","Paths.hx",423,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_426_modsAchievements,"Paths","modsAchievements",0x804e9795,"Paths.modsAchievements","Paths.hx",426,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_429_modFolders,"Paths","modFolders",0xd05558c3,"Paths.modFolders","Paths.hx",429,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_438_getModDirectories,"Paths","getModDirectories",0x27c7a23f,"Paths.getModDirectories","Paths.hx",438,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_29_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",29,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_30_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",30,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_33_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",33,0x309ea470)
static const ::String _hx_array_data_50847b0e_50[] = {
	HX_("characters",aa,58,ce,55),HX_("custom_events",27,a1,9e,e1),HX_("custom_notetypes",f9,35,37,af),HX_("data",2a,56,63,42),HX_("songs",fe,36,c7,80),HX_("music",a5,d0,5a,10),HX_("sounds",c4,a8,2e,32),HX_("shaders",ae,81,86,5f),HX_("videos",98,d7,95,e5),HX_("images",b8,50,92,fe),HX_("stages",f5,fb,f1,05),HX_("weeks",ff,95,be,c7),HX_("fonts",c4,b7,91,04),HX_("scripts",08,fc,e3,2c),HX_("achievements",24,a1,6b,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_58_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",58,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_86_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",86,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_114_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",114,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_330_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",330,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_358_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",358,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::VIDEO_EXT;

::Array< ::String > Paths_obj::ignoreModFolders;

void Paths_obj::excludeAsset(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_53_excludeAsset)
HXDLIN(  53)		if (!(::Paths_obj::dumpExclusions->contains(key))) {
HXLINE(  54)			::Paths_obj::dumpExclusions->push(key);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,excludeAsset,(void))

::Array< ::String > Paths_obj::dumpExclusions;

void Paths_obj::clearUnusedMemory(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_64_clearUnusedMemory)
HXLINE(  66)		{
HXLINE(  66)			 ::Dynamic key = ::Paths_obj::currentTrackedAssets->keys();
HXDLIN(  66)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  66)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  68)				bool _hx_tmp;
HXDLIN(  68)				if (!(::Paths_obj::localTrackedAssets->contains(key1))) {
HXLINE(  68)					_hx_tmp = !(::Paths_obj::dumpExclusions->contains(key1));
            				}
            				else {
HXLINE(  68)					_hx_tmp = false;
            				}
HXDLIN(  68)				if (_hx_tmp) {
HXLINE(  71)					 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(key1)) );
HXLINE(  73)					if (::hx::IsNotNull( obj )) {
HXLINE(  74)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  75)						::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  76)						obj->destroy();
HXLINE(  77)						::Paths_obj::currentTrackedAssets->remove(key1);
            					}
            				}
            			}
            		}
HXLINE(  82)		::openfl::_hx_system::System_obj::gc();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,clearUnusedMemory,(void))

::Array< ::String > Paths_obj::localTrackedAssets;

void Paths_obj::clearStoredMemory( ::Dynamic __o_cleanUnused){
            		 ::Dynamic cleanUnused = __o_cleanUnused;
            		if (::hx::IsNull(__o_cleanUnused)) cleanUnused = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_87_clearStoredMemory)
HXLINE(  90)		{
HXLINE(  90)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN(  90)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  90)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  92)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  93)				bool _hx_tmp;
HXDLIN(  93)				if (::hx::IsNotNull( obj )) {
HXLINE(  93)					_hx_tmp = !(::Paths_obj::currentTrackedAssets->exists(key1));
            				}
            				else {
HXLINE(  93)					_hx_tmp = false;
            				}
HXDLIN(  93)				if (_hx_tmp) {
HXLINE(  94)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  95)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  96)					obj->destroy();
            				}
            			}
            		}
HXLINE( 101)		{
HXLINE( 101)			 ::Dynamic key1 = ::Paths_obj::currentTrackedSounds->keys();
HXDLIN( 101)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 101)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 102)				bool _hx_tmp;
HXDLIN( 102)				bool _hx_tmp1;
HXDLIN( 102)				if (!(::Paths_obj::localTrackedAssets->contains(key))) {
HXLINE( 102)					_hx_tmp1 = !(::Paths_obj::dumpExclusions->contains(key));
            				}
            				else {
HXLINE( 102)					_hx_tmp1 = false;
            				}
HXDLIN( 102)				if (_hx_tmp1) {
HXLINE( 102)					_hx_tmp = ::hx::IsNotNull( key );
            				}
            				else {
HXLINE( 102)					_hx_tmp = false;
            				}
HXDLIN( 102)				if (_hx_tmp) {
HXLINE( 105)					::lime::utils::Assets_obj::cache->clear(key);
HXLINE( 106)					::Paths_obj::currentTrackedSounds->remove(key);
            				}
            			}
            		}
HXLINE( 110)		::Paths_obj::localTrackedAssets = ::Array_obj< ::String >::__new(0);
HXLINE( 111)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,clearStoredMemory,(void))

::String Paths_obj::currentModDirectory;

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_118_setCurrentLevel)
HXDLIN( 118)		::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_122_getPath)
HXLINE( 123)		if (::hx::IsNotNull( library )) {
HXLINE( 124)			return ::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE( 126)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE( 128)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 129)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 130)				::String library = ::Paths_obj::currentLevel;
HXDLIN( 130)				::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 130)				levelPath = returnPath;
HXLINE( 131)				if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 132)					return levelPath;
            				}
            			}
HXLINE( 135)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 135)			levelPath = returnPath;
HXLINE( 136)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE( 137)				return levelPath;
            			}
            		}
HXLINE( 140)		::String file1 = file;
HXDLIN( 140)		if (::hx::IsNull( file1 )) {
HXLINE( 140)			file1 = HX_("",00,00,00,00);
            		}
HXDLIN( 140)		return (HX_("assets/",4c,2a,dc,36) + file1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_145_getLibraryPath)
HXDLIN( 145)		bool _hx_tmp;
HXDLIN( 145)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN( 145)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN( 145)			_hx_tmp = true;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXDLIN( 145)			::String file1 = file;
HXDLIN( 145)			if (::hx::IsNull( file1 )) {
HXDLIN( 145)				file1 = HX_("",00,00,00,00);
            			}
HXDLIN( 145)			return (HX_("assets/",4c,2a,dc,36) + file1);
            		}
            		else {
HXDLIN( 145)			::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXDLIN( 145)			return returnPath;
            		}
HXDLIN( 145)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_149_getLibraryPathForce)
HXLINE( 150)		::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE( 151)		return returnPath;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String __o_file){
            		::String file = __o_file;
            		if (::hx::IsNull(__o_file)) file = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_156_getPreloadPath)
HXDLIN( 156)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::file(::String file,::String __o_type,::String library){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_161_file)
HXDLIN( 161)		return ::Paths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,file,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_166_txt)
HXDLIN( 166)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_171_xml)
HXDLIN( 171)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_176_json)
HXDLIN( 176)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::shaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_181_shaderFragment)
HXDLIN( 181)		return ::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderFragment,return )

::String Paths_obj::shaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_185_shaderVertex)
HXDLIN( 185)		return ::Paths_obj::getPath(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,shaderVertex,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_189_lua)
HXDLIN( 189)		return ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_193_video)
HXLINE( 195)		::String file = ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
HXLINE( 196)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 197)			return file;
            		}
HXLINE( 200)		return (((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )

 ::openfl::media::Sound Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_204_sound)
HXLINE( 205)		 ::openfl::media::Sound sound = ::Paths_obj::returnSound(HX_("sounds",c4,a8,2e,32),key,library);
HXLINE( 206)		return sound;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

 ::openfl::media::Sound Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_211_soundRandom)
HXDLIN( 211)		return ::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

 ::openfl::media::Sound Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_215_music)
HXLINE( 216)		 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),key,library);
HXLINE( 217)		return file;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

 ::Dynamic Paths_obj::voices(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_221_voices)
HXLINE( 222)		::String songKey = ((HX_("",00,00,00,00) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Voices",10,18,4f,34));
HXLINE( 223)		 ::openfl::media::Sound voices = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 224)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

 ::Dynamic Paths_obj::inst(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_228_inst)
HXLINE( 229)		::String songKey = ((HX_("",00,00,00,00) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Inst",95,b3,69,40));
HXLINE( 230)		 ::openfl::media::Sound inst = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXLINE( 231)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

 ::flixel::graphics::FlxGraphic Paths_obj::image(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_235_image)
HXLINE( 237)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXLINE( 238)		return returnAsset;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,image,return )

::String Paths_obj::getTextFromFile(::String key, ::Dynamic __o_ignoreMods){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_242_getTextFromFile)
HXLINE( 245)		bool _hx_tmp;
HXDLIN( 245)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 245)			_hx_tmp = ::sys::FileSystem_obj::exists(::Paths_obj::modFolders(key));
            		}
            		else {
HXLINE( 245)			_hx_tmp = false;
            		}
HXDLIN( 245)		if (_hx_tmp) {
HXLINE( 246)			return ::sys::io::File_obj::getContent(::Paths_obj::modFolders(key));
            		}
HXLINE( 249)		::String file = key;
HXDLIN( 249)		if (::hx::IsNull( file )) {
HXLINE( 249)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 249)		if (::sys::FileSystem_obj::exists((HX_("assets/",4c,2a,dc,36) + file))) {
HXLINE( 250)			::String file = key;
HXDLIN( 250)			if (::hx::IsNull( file )) {
HXLINE( 250)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 250)			return ::sys::io::File_obj::getContent((HX_("assets/",4c,2a,dc,36) + file));
            		}
HXLINE( 252)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE( 254)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 255)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 256)				::String library = ::Paths_obj::currentLevel;
HXDLIN( 256)				::String returnPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 256)				levelPath = returnPath;
HXLINE( 257)				if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 258)					return ::sys::io::File_obj::getContent(levelPath);
            				}
            			}
HXLINE( 261)			::String returnPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + key);
HXDLIN( 261)			levelPath = returnPath;
HXLINE( 262)			if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 263)				return ::sys::io::File_obj::getContent(levelPath);
            			}
            		}
HXLINE( 266)		return ::lime::utils::Assets_obj::getText(::Paths_obj::getPath(key,HX_("TEXT",ad,94,ba,37),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getTextFromFile,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_270_font)
HXLINE( 272)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
HXLINE( 273)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 274)			return file;
            		}
HXLINE( 277)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

bool Paths_obj::fileExists(::String key,::String type, ::Dynamic __o_ignoreMods,::String library){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_281_fileExists)
HXLINE( 283)		bool _hx_tmp;
HXDLIN( 283)		::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 283)		if (::hx::IsNull( key1 )) {
HXLINE( 283)			key1 = HX_("",00,00,00,00);
            		}
HXDLIN( 283)		if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE( 283)			::String key1 = key;
HXDLIN( 283)			if (::hx::IsNull( key1 )) {
HXLINE( 283)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 283)			_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            		}
            		else {
HXLINE( 283)			_hx_tmp = true;
            		}
HXDLIN( 283)		if (_hx_tmp) {
HXLINE( 284)			return true;
            		}
HXLINE( 288)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,type,null()),null())) {
HXLINE( 289)			return true;
            		}
HXLINE( 291)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,fileExists,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_295_getSparrowAtlas)
HXLINE( 297)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXLINE( 298)		bool xmlExists = false;
HXLINE( 299)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 300)			xmlExists = true;
            		}
HXLINE( 303)		 ::Dynamic _hx_tmp;
HXDLIN( 303)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 303)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 303)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 303)			_hx_tmp = returnAsset;
            		}
HXDLIN( 303)		::String _hx_tmp1;
HXDLIN( 303)		if (xmlExists) {
HXLINE( 303)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 303)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 303)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_311_getPackerAtlas)
HXLINE( 313)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXLINE( 314)		bool txtExists = false;
HXLINE( 315)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))))) {
HXLINE( 316)			txtExists = true;
            		}
HXLINE( 319)		 ::Dynamic _hx_tmp;
HXDLIN( 319)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 319)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 319)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 319)			_hx_tmp = returnAsset;
            		}
HXDLIN( 319)		::String _hx_tmp1;
HXDLIN( 319)		if (txtExists) {
HXLINE( 319)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))));
            		}
            		else {
HXLINE( 319)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 319)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getPackerAtlas,return )

::String Paths_obj::formatToSongPath(::String path){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_326_formatToSongPath)
HXDLIN( 326)		return ::StringTools_obj::replace(path.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,formatToSongPath,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedAssets;

 ::flixel::graphics::FlxGraphic Paths_obj::returnGraphic(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_331_returnGraphic)
HXLINE( 333)		::String modKey = ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
HXLINE( 334)		if (::sys::FileSystem_obj::exists(modKey)) {
HXLINE( 335)			if (!(::Paths_obj::currentTrackedAssets->exists(modKey))) {
HXLINE( 336)				 ::openfl::display::BitmapData newBitmap = ::openfl::display::BitmapData_obj::fromFile(modKey);
HXLINE( 337)				 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(newBitmap,false,modKey,null());
HXLINE( 338)				::Paths_obj::currentTrackedAssets->set(modKey,newGraphic);
            			}
HXLINE( 340)			::Paths_obj::localTrackedAssets->push(modKey);
HXLINE( 341)			return ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(modKey)) );
            		}
HXLINE( 345)		::String path = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXLINE( 346)		if (::openfl::utils::Assets_obj::exists(path,HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 347)			if (!(::Paths_obj::currentTrackedAssets->exists(path))) {
HXLINE( 348)				 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::FlxG_obj::bitmap->add(path,false,path);
HXLINE( 349)				::Paths_obj::currentTrackedAssets->set(path,newGraphic);
            			}
HXLINE( 351)			::Paths_obj::localTrackedAssets->push(path);
HXLINE( 352)			return ( ( ::flixel::graphics::FlxGraphic)(::Paths_obj::currentTrackedAssets->get(path)) );
            		}
HXLINE( 354)		::haxe::Log_obj::trace(HX_("oh no its returning null NOOOO",93,c9,d3,00),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),354,HX_("Paths",0e,7b,84,50),HX_("returnGraphic",d8,d3,95,0b)));
HXLINE( 355)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,returnGraphic,return )

 ::haxe::ds::StringMap Paths_obj::currentTrackedSounds;

 ::openfl::media::Sound Paths_obj::returnSound(::String path,::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_359_returnSound)
HXLINE( 361)		::String file = ::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 362)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 363)			if (!(::Paths_obj::currentTrackedSounds->exists(file))) {
HXLINE( 364)				::Dynamic this1 = ::Paths_obj::currentTrackedSounds;
HXDLIN( 364)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 366)			::Paths_obj::localTrackedAssets->push(key);
HXLINE( 367)			return ( ( ::openfl::media::Sound)(::Paths_obj::currentTrackedSounds->get(file)) );
            		}
HXLINE( 371)		::String gottenPath = ::Paths_obj::getPath((((((HX_("",00,00,00,00) + path) + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
HXLINE( 372)		int gottenPath1 = (gottenPath.indexOf(HX_(":",3a,00,00,00),null()) + 1);
HXDLIN( 372)		gottenPath = gottenPath.substring(gottenPath1,gottenPath.length);
HXLINE( 374)		if (!(::Paths_obj::currentTrackedSounds->exists(gottenPath))) {
HXLINE( 376)			::Dynamic this1 = ::Paths_obj::currentTrackedSounds;
HXDLIN( 376)			( ( ::haxe::ds::StringMap)(this1) )->set(gottenPath,::openfl::media::Sound_obj::fromFile((HX_("./",41,28,00,00) + gottenPath)));
            		}
HXLINE( 380)		::Paths_obj::localTrackedAssets->push(gottenPath);
HXLINE( 381)		return ( ( ::openfl::media::Sound)(::Paths_obj::currentTrackedSounds->get(gottenPath)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,returnSound,return )

::String Paths_obj::mods(::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_386_mods)
HXDLIN( 386)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,mods,return )

::String Paths_obj::modsFont(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_390_modsFont)
HXDLIN( 390)		return ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsFont,return )

::String Paths_obj::modsJson(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_394_modsJson)
HXDLIN( 394)		return ::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsJson,return )

::String Paths_obj::modsVideo(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_398_modsVideo)
HXDLIN( 398)		return ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsVideo,return )

::String Paths_obj::modsSounds(::String path,::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_402_modsSounds)
HXDLIN( 402)		return ::Paths_obj::modFolders(((((path + HX_("/",2f,00,00,00)) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsSounds,return )

::String Paths_obj::modsImages(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_406_modsImages)
HXDLIN( 406)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsImages,return )

::String Paths_obj::modsXml(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_410_modsXml)
HXDLIN( 410)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsXml,return )

::String Paths_obj::modsTxt(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_414_modsTxt)
HXDLIN( 414)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsTxt,return )

::String Paths_obj::modsShaderFragment(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_419_modsShaderFragment)
HXDLIN( 419)		return ::Paths_obj::modFolders(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".frag",60,48,31,c0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsShaderFragment,return )

::String Paths_obj::modsShaderVertex(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_423_modsShaderVertex)
HXDLIN( 423)		return ::Paths_obj::modFolders(((HX_("shaders/",c1,f6,2a,36) + key) + HX_(".vert",df,e3,ba,ca)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,modsShaderVertex,return )

::String Paths_obj::modsAchievements(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_426_modsAchievements)
HXDLIN( 426)		return ::Paths_obj::modFolders(((HX_("achievements/",8b,5e,c1,17) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsAchievements,return )

::String Paths_obj::modFolders(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_429_modFolders)
HXLINE( 430)		bool _hx_tmp;
HXDLIN( 430)		if (::hx::IsNotNull( ::Paths_obj::currentModDirectory )) {
HXLINE( 430)			_hx_tmp = (::Paths_obj::currentModDirectory.length > 0);
            		}
            		else {
HXLINE( 430)			_hx_tmp = false;
            		}
HXDLIN( 430)		if (_hx_tmp) {
HXLINE( 431)			::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 431)			if (::hx::IsNull( key1 )) {
HXLINE( 431)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 431)			::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 432)			if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 433)				return fileToCheck;
            			}
            		}
HXLINE( 436)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modFolders,return )

::Array< ::String > Paths_obj::getModDirectories(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_438_getModDirectories)
HXLINE( 439)		::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXLINE( 440)		::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXLINE( 441)		if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE( 442)			int _g = 0;
HXDLIN( 442)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN( 442)			while((_g < _g1->length)){
HXLINE( 442)				::String folder = _g1->__get(_g);
HXDLIN( 442)				_g = (_g + 1);
HXLINE( 443)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXLINE( 444)				bool _hx_tmp;
HXDLIN( 444)				bool _hx_tmp1;
HXDLIN( 444)				if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 444)					_hx_tmp1 = !(::Paths_obj::ignoreModFolders->contains(folder));
            				}
            				else {
HXLINE( 444)					_hx_tmp1 = false;
            				}
HXDLIN( 444)				if (_hx_tmp1) {
HXLINE( 444)					_hx_tmp = !(list->contains(folder));
            				}
            				else {
HXLINE( 444)					_hx_tmp = false;
            				}
HXDLIN( 444)				if (_hx_tmp) {
HXLINE( 445)					list->push(folder);
            				}
            			}
            		}
HXLINE( 449)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,getModDirectories,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mods") ) { outValue = mods_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsXml") ) { outValue = modsXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsTxt") ) { outValue = modsTxt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modsFont") ) { outValue = modsFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsJson") ) { outValue = modsJson_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modsVideo") ) { outValue = modsVideo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSounds") ) { outValue = modsSounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsImages") ) { outValue = modsImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modFolders") ) { outValue = modFolders_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnSound") ) { outValue = returnSound_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"excludeAsset") ) { outValue = excludeAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		if (HX_FIELD_EQ(inName,"shaderVertex") ) { outValue = shaderVertex_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"returnGraphic") ) { outValue = returnGraphic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { outValue = ( dumpExclusions ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shaderFragment") ) { outValue = shaderFragment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextFromFile") ) { outValue = getTextFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { outValue = ( ignoreModFolders ); return true; }
		if (HX_FIELD_EQ(inName,"formatToSongPath") ) { outValue = formatToSongPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsShaderVertex") ) { outValue = modsShaderVertex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsAchievements") ) { outValue = modsAchievements_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearUnusedMemory") ) { outValue = clearUnusedMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clearStoredMemory") ) { outValue = clearStoredMemory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getModDirectories") ) { outValue = getModDirectories_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { outValue = ( localTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"modsShaderFragment") ) { outValue = modsShaderFragment_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { outValue = ( currentModDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { outValue = ( currentTrackedAssets ); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { outValue = ( currentTrackedSounds ); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dumpExclusions") ) { dumpExclusions=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { ignoreModFolders=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localTrackedAssets") ) { localTrackedAssets=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { currentModDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"currentTrackedAssets") ) { currentTrackedAssets=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"currentTrackedSounds") ) { currentTrackedSounds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::VIDEO_EXT,HX_("VIDEO_EXT",5d,03,77,8a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::ignoreModFolders,HX_("ignoreModFolders",15,37,dd,7e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::dumpExclusions,HX_("dumpExclusions",39,38,dc,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::localTrackedAssets,HX_("localTrackedAssets",62,77,3a,fc)},
	{::hx::fsString,(void *) &Paths_obj::currentModDirectory,HX_("currentModDirectory",24,ad,ec,de)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedAssets,HX_("currentTrackedAssets",d4,7b,e5,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::currentTrackedSounds,HX_("currentTrackedSounds",15,dc,10,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_MARK_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_MARK_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_MARK_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_VISIT_MEMBER_NAME(Paths_obj::dumpExclusions,"dumpExclusions");
	HX_VISIT_MEMBER_NAME(Paths_obj::localTrackedAssets,"localTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedAssets,"currentTrackedAssets");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentTrackedSounds,"currentTrackedSounds");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("VIDEO_EXT",5d,03,77,8a),
	HX_("ignoreModFolders",15,37,dd,7e),
	HX_("excludeAsset",b6,04,50,31),
	HX_("dumpExclusions",39,38,dc,ef),
	HX_("clearUnusedMemory",e4,29,80,28),
	HX_("localTrackedAssets",62,77,3a,fc),
	HX_("clearStoredMemory",f1,99,87,55),
	HX_("currentModDirectory",24,ad,ec,de),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("shaderFragment",15,08,f3,5e),
	HX_("shaderVertex",69,78,30,11),
	HX_("lua",b8,59,52,00),
	HX_("video",7b,14,fc,36),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("image",5b,1f,69,bd),
	HX_("getTextFromFile",89,70,ed,f8),
	HX_("font",cf,5d,c0,43),
	HX_("fileExists",78,65,64,a0),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("formatToSongPath",cc,36,b8,49),
	HX_("currentTrackedAssets",d4,7b,e5,0f),
	HX_("returnGraphic",d8,d3,95,0b),
	HX_("currentTrackedSounds",15,dc,10,f6),
	HX_("returnSound",ff,59,a9,8d),
	HX_("mods",71,d3,60,48),
	HX_("modsFont",e0,69,a7,c3),
	HX_("modsJson",39,4e,4f,c6),
	HX_("modsVideo",4a,97,3f,a1),
	HX_("modsSounds",15,9b,fd,c2),
	HX_("modsImages",09,43,61,8f),
	HX_("modsXml",e6,4e,99,f6),
	HX_("modsTxt",7f,4f,96,f6),
	HX_("modsShaderFragment",66,33,66,61),
	HX_("modsShaderVertex",7a,7d,0b,a3),
	HX_("modsAchievements",35,a6,46,18),
	HX_("modFolders",63,af,3e,e0),
	HX_("getModDirectories",9f,5f,dc,88),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_29_boot)
HXDLIN(  29)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_30_boot)
HXDLIN(  30)		VIDEO_EXT = HX_("mp4",71,17,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_33_boot)
HXDLIN(  33)		ignoreModFolders = ::Array_obj< ::String >::fromData( _hx_array_data_50847b0e_50,15);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_58_boot)
HXDLIN(  58)		dumpExclusions = ::Array_obj< ::String >::__new(3)->init(0,(HX_("assets/music/freakyMenu.",03,7e,c4,03) + HX_("ogg",4f,94,54,00)))->init(1,(HX_("assets/shared/music/breakfast.",7b,5a,11,eb) + HX_("ogg",4f,94,54,00)))->init(2,(HX_("assets/shared/music/tea-time.",7c,11,5c,52) + HX_("ogg",4f,94,54,00)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_86_boot)
HXDLIN(  86)		localTrackedAssets = ::Array_obj< ::String >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_114_boot)
HXDLIN( 114)		currentModDirectory = HX_("",00,00,00,00);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_330_boot)
HXDLIN( 330)		currentTrackedAssets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_358_boot)
HXDLIN( 358)		currentTrackedSounds =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

