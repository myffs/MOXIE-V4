#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_12_toLua,"llua.Convert","toLua",0x3fb91700,"llua.Convert.toLua","llua/Convert.hx",12,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_40_arrayToLua,"llua.Convert","arrayToLua",0x07e2abc1,"llua.Convert.arrayToLua","llua/Convert.hx",40,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_53_objectToLua,"llua.Convert","objectToLua",0xf6f99801,"llua.Convert.objectToLua","llua/Convert.hx",53,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_67_fromLua,"llua.Convert","fromLua",0x7fff7d31,"llua.Convert.fromLua","llua/Convert.hx",67,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_103_fromLuaTable,"llua.Convert","fromLuaTable",0xf549391d,"llua.Convert.fromLuaTable","llua/Convert.hx",103,0x49e36a6e)
namespace llua{

void Convert_obj::__construct() { }

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70578207;
}

bool Convert_obj::toLua( cpp::Reference<lua_State> l, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_12_toLua)
HXLINE(  14)		{
HXLINE(  14)			 ::ValueType _g = ::Type_obj::_hx_typeof(val);
HXDLIN(  14)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  16)					lua_pushnil(l);
            				}
            				break;
            				case (int)1: {
HXLINE(  20)					lua_pushinteger(l,::hx::TCast< int >::cast(val));
            				}
            				break;
            				case (int)2: {
HXLINE(  22)					lua_pushnumber(l,( (Float)(val) ));
            				}
            				break;
            				case (int)3: {
HXLINE(  18)					int _hx_tmp;
HXDLIN(  18)					if ((( (bool)(val) ) == true)) {
HXLINE(  18)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  18)						_hx_tmp = 0;
            					}
HXDLIN(  18)					lua_pushboolean(l,_hx_tmp);
            				}
            				break;
            				case (int)4: {
HXLINE(  28)					lua_createtable(l,0,0);
HXDLIN(  28)					{
HXLINE(  28)						int _g = 0;
HXDLIN(  28)						::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  28)						while((_g < _g1->length)){
HXLINE(  28)							::String n = _g1->__get(_g);
HXDLIN(  28)							_g = (_g + 1);
HXDLIN(  28)							lua_pushstring(l,n);
HXDLIN(  28)							::llua::Convert_obj::toLua(l,::Reflect_obj::field(val,n));
HXDLIN(  28)							lua_settable(l,-3);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  25)					::hx::Class _hx_switch_0 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
            					if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  26)						::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(val) );
HXDLIN(  26)						int size = arr->get_length();
HXDLIN(  26)						lua_createtable(l,size,0);
HXDLIN(  26)						{
HXLINE(  26)							int _g = 0;
HXDLIN(  26)							int _g1 = size;
HXDLIN(  26)							while((_g < _g1)){
HXLINE(  26)								_g = (_g + 1);
HXDLIN(  26)								int i = (_g - 1);
HXDLIN(  26)								lua_pushnumber(l,( (Float)((i + 1)) ));
HXDLIN(  26)								::llua::Convert_obj::toLua(l,arr->__get(i));
HXDLIN(  26)								lua_settable(l,-3);
            							}
            						}
HXDLIN(  26)						goto _hx_goto_1;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  24)						lua_pushstring(l,::hx::TCast< ::String >::cast(val));
HXDLIN(  24)						goto _hx_goto_1;
            					}
            					/* default */{
HXLINE(  32)						::haxe::Log_obj::trace(HX_("haxe value not supported\n",12,9a,82,3a),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),32,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  33)						return false;
            					}
            					_hx_goto_1:;
            				}
            				break;
            				default:{
HXLINE(  32)					::haxe::Log_obj::trace(HX_("haxe value not supported\n",12,9a,82,3a),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),32,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  33)					return false;
            				}
            			}
            		}
HXLINE(  36)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toLua,return )

void Convert_obj::arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_40_arrayToLua)
HXLINE(  42)		int size = arr->get_length();
HXLINE(  43)		lua_createtable(l,size,0);
HXLINE(  45)		{
HXLINE(  45)			int _g = 0;
HXDLIN(  45)			int _g1 = size;
HXDLIN(  45)			while((_g < _g1)){
HXLINE(  45)				_g = (_g + 1);
HXDLIN(  45)				int i = (_g - 1);
HXLINE(  46)				lua_pushnumber(l,( (Float)((i + 1)) ));
HXLINE(  47)				::llua::Convert_obj::toLua(l,arr->__get(i));
HXLINE(  48)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,arrayToLua,(void))

void Convert_obj::objectToLua( cpp::Reference<lua_State> l, ::Dynamic res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_53_objectToLua)
HXLINE(  55)		lua_createtable(l,0,0);
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			::Array< ::String > _g1 = ::Reflect_obj::fields(res);
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				::String n = _g1->__get(_g);
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  57)				lua_pushstring(l,n);
HXLINE(  58)				::llua::Convert_obj::toLua(l,::Reflect_obj::field(res,n));
HXLINE(  59)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,objectToLua,(void))

 ::Dynamic Convert_obj::fromLua( cpp::Reference<lua_State> l,int v){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_67_fromLua)
HXLINE(  69)		 ::Dynamic ret = null();
HXLINE(  71)		switch((int)(lua_type(l,v))){
            			case (int)0: {
HXLINE(  73)				ret = null();
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				ret = (lua_toboolean(l,v) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE(  77)				ret = lua_tonumber(l,v);
            			}
            			break;
            			case (int)4: {
HXLINE(  79)				ret = linc::lua::tostring(l,v);
            			}
            			break;
            			case (int)5: {
HXLINE(  81)				bool array = true;
HXDLIN(  81)				 ::Dynamic ret1 = null();
HXDLIN(  81)				lua_pushnil(l);
HXDLIN(  81)				while((lua_next(l,-2) != 0)){
HXLINE(  81)					if ((lua_type(l,-2) != 3)) {
HXLINE(  81)						array = false;
HXDLIN(  81)						lua_pop(l,2);
HXDLIN(  81)						goto _hx_goto_8;
            					}
HXDLIN(  81)					Float n = lua_tonumber(l,-2);
HXDLIN(  81)					if ((n != ::Std_obj::_hx_int(n))) {
HXLINE(  81)						array = false;
HXDLIN(  81)						lua_pop(l,2);
HXDLIN(  81)						goto _hx_goto_8;
            					}
HXDLIN(  81)					lua_pop(l,1);
            				}
            				_hx_goto_8:;
HXDLIN(  81)				if (array) {
HXLINE(  81)					::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  81)					lua_pushnil(l);
HXDLIN(  81)					while((lua_next(l,-2) != 0)){
HXLINE(  81)						int index = (lua_tointeger(l,-2) - 1);
HXDLIN(  81)						arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN(  81)						lua_pop(l,1);
            					}
HXDLIN(  81)					ret1 = arr;
            				}
            				else {
HXLINE(  81)					 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN(  81)					lua_pushnil(l);
HXDLIN(  81)					while((lua_next(l,-2) != 0)){
HXLINE(  81)						::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN(  81)						obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN(  81)						lua_pop(l,1);
            					}
HXDLIN(  81)					ret1 = obj;
            				}
HXDLIN(  81)				ret = ret1;
            			}
            			break;
            			default:{
HXLINE(  95)				ret = null();
HXLINE(  96)				::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            			}
            		}
HXLINE(  99)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,fromLua,return )

 ::Dynamic Convert_obj::fromLuaTable( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_103_fromLuaTable)
HXLINE( 105)		bool array = true;
HXLINE( 106)		 ::Dynamic ret = null();
HXLINE( 108)		lua_pushnil(l);
HXLINE( 109)		while((lua_next(l,-2) != 0)){
HXLINE( 111)			if ((lua_type(l,-2) != 3)) {
HXLINE( 112)				array = false;
HXLINE( 113)				lua_pop(l,2);
HXLINE( 114)				goto _hx_goto_12;
            			}
HXLINE( 118)			Float n = lua_tonumber(l,-2);
HXLINE( 119)			if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 120)				array = false;
HXLINE( 121)				lua_pop(l,2);
HXLINE( 122)				goto _hx_goto_12;
            			}
HXLINE( 125)			lua_pop(l,1);
            		}
            		_hx_goto_12:;
HXLINE( 129)		if (array) {
HXLINE( 131)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 132)			lua_pushnil(l);
HXLINE( 133)			while((lua_next(l,-2) != 0)){
HXLINE( 134)				int index = (lua_tointeger(l,-2) - 1);
HXLINE( 135)				 ::Dynamic ret = null();
HXDLIN( 135)				switch((int)(lua_type(l,-1))){
            					case (int)0: {
HXLINE( 135)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 135)						ret = (lua_toboolean(l,-1) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 135)						ret = lua_tonumber(l,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 135)						ret = linc::lua::tostring(l,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 135)						bool array = true;
HXDLIN( 135)						 ::Dynamic ret1 = null();
HXDLIN( 135)						lua_pushnil(l);
HXDLIN( 135)						while((lua_next(l,-2) != 0)){
HXLINE( 135)							if ((lua_type(l,-2) != 3)) {
HXLINE( 135)								array = false;
HXDLIN( 135)								lua_pop(l,2);
HXDLIN( 135)								goto _hx_goto_14;
            							}
HXDLIN( 135)							Float n = lua_tonumber(l,-2);
HXDLIN( 135)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 135)								array = false;
HXDLIN( 135)								lua_pop(l,2);
HXDLIN( 135)								goto _hx_goto_14;
            							}
HXDLIN( 135)							lua_pop(l,1);
            						}
            						_hx_goto_14:;
HXDLIN( 135)						if (array) {
HXLINE( 135)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 135)							lua_pushnil(l);
HXDLIN( 135)							while((lua_next(l,-2) != 0)){
HXLINE( 135)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 135)								arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 135)								lua_pop(l,1);
            							}
HXDLIN( 135)							ret1 = arr;
            						}
            						else {
HXLINE( 135)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 135)							lua_pushnil(l);
HXDLIN( 135)							while((lua_next(l,-2) != 0)){
HXLINE( 135)								::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 135)								obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 135)								lua_pop(l,1);
            							}
HXDLIN( 135)							ret1 = obj;
            						}
HXDLIN( 135)						ret = ret1;
            					}
            					break;
            					default:{
HXLINE( 135)						ret = null();
HXDLIN( 135)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 135)				arr->set(index,ret);
HXLINE( 136)				lua_pop(l,1);
            			}
HXLINE( 138)			ret = arr;
            		}
            		else {
HXLINE( 142)			 hx::Anon obj = hx::Anon_obj::Create();
HXLINE( 143)			lua_pushnil(l);
HXLINE( 144)			while((lua_next(l,-2) != 0)){
HXLINE( 145)				 ::Dynamic ret = null();
HXDLIN( 145)				switch((int)(lua_type(l,-2))){
            					case (int)0: {
HXLINE( 145)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 145)						ret = (lua_toboolean(l,-2) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 145)						ret = lua_tonumber(l,-2);
            					}
            					break;
            					case (int)4: {
HXLINE( 145)						ret = linc::lua::tostring(l,-2);
            					}
            					break;
            					case (int)5: {
HXLINE( 145)						bool array = true;
HXDLIN( 145)						 ::Dynamic ret1 = null();
HXDLIN( 145)						lua_pushnil(l);
HXDLIN( 145)						while((lua_next(l,-2) != 0)){
HXLINE( 145)							if ((lua_type(l,-2) != 3)) {
HXLINE( 145)								array = false;
HXDLIN( 145)								lua_pop(l,2);
HXDLIN( 145)								goto _hx_goto_18;
            							}
HXDLIN( 145)							Float n = lua_tonumber(l,-2);
HXDLIN( 145)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 145)								array = false;
HXDLIN( 145)								lua_pop(l,2);
HXDLIN( 145)								goto _hx_goto_18;
            							}
HXDLIN( 145)							lua_pop(l,1);
            						}
            						_hx_goto_18:;
HXDLIN( 145)						if (array) {
HXLINE( 145)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 145)							lua_pushnil(l);
HXDLIN( 145)							while((lua_next(l,-2) != 0)){
HXLINE( 145)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 145)								 ::Dynamic ret = null();
HXDLIN( 145)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 145)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 145)										ret = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 145)										ret = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 145)										ret = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 145)										bool array = true;
HXDLIN( 145)										 ::Dynamic ret1 = null();
HXDLIN( 145)										lua_pushnil(l);
HXDLIN( 145)										while((lua_next(l,-2) != 0)){
HXLINE( 145)											if ((lua_type(l,-2) != 3)) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_20;
            											}
HXDLIN( 145)											Float n = lua_tonumber(l,-2);
HXDLIN( 145)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_20;
            											}
HXDLIN( 145)											lua_pop(l,1);
            										}
            										_hx_goto_20:;
HXDLIN( 145)										if (array) {
HXLINE( 145)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 145)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret1 = arr;
            										}
            										else {
HXLINE( 145)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 145)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret1 = obj;
            										}
HXDLIN( 145)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 145)										ret = null();
HXDLIN( 145)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 145)								arr->set(index,ret);
HXDLIN( 145)								lua_pop(l,1);
            							}
HXDLIN( 145)							ret1 = arr;
            						}
            						else {
HXLINE( 145)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 145)							lua_pushnil(l);
HXDLIN( 145)							while((lua_next(l,-2) != 0)){
HXLINE( 145)								 ::Dynamic ret = null();
HXDLIN( 145)								switch((int)(lua_type(l,-2))){
            									case (int)0: {
HXLINE( 145)										ret = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 145)										ret = (lua_toboolean(l,-2) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 145)										ret = lua_tonumber(l,-2);
            									}
            									break;
            									case (int)4: {
HXLINE( 145)										ret = linc::lua::tostring(l,-2);
            									}
            									break;
            									case (int)5: {
HXLINE( 145)										bool array = true;
HXDLIN( 145)										 ::Dynamic ret1 = null();
HXDLIN( 145)										lua_pushnil(l);
HXDLIN( 145)										while((lua_next(l,-2) != 0)){
HXLINE( 145)											if ((lua_type(l,-2) != 3)) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_24;
            											}
HXDLIN( 145)											Float n = lua_tonumber(l,-2);
HXDLIN( 145)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_24;
            											}
HXDLIN( 145)											lua_pop(l,1);
            										}
            										_hx_goto_24:;
HXDLIN( 145)										if (array) {
HXLINE( 145)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 145)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret1 = arr;
            										}
            										else {
HXLINE( 145)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 145)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret1 = obj;
            										}
HXDLIN( 145)										ret = ret1;
            									}
            									break;
            									default:{
HXLINE( 145)										ret = null();
HXDLIN( 145)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 145)								::String ret1 = ::Std_obj::string(ret);
HXDLIN( 145)								 ::Dynamic ret2 = null();
HXDLIN( 145)								switch((int)(lua_type(l,-1))){
            									case (int)0: {
HXLINE( 145)										ret2 = null();
            									}
            									break;
            									case (int)1: {
HXLINE( 145)										ret2 = (lua_toboolean(l,-1) != 0);
            									}
            									break;
            									case (int)3: {
HXLINE( 145)										ret2 = lua_tonumber(l,-1);
            									}
            									break;
            									case (int)4: {
HXLINE( 145)										ret2 = linc::lua::tostring(l,-1);
            									}
            									break;
            									case (int)5: {
HXLINE( 145)										bool array = true;
HXDLIN( 145)										 ::Dynamic ret = null();
HXDLIN( 145)										lua_pushnil(l);
HXDLIN( 145)										while((lua_next(l,-2) != 0)){
HXLINE( 145)											if ((lua_type(l,-2) != 3)) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_27;
            											}
HXDLIN( 145)											Float n = lua_tonumber(l,-2);
HXDLIN( 145)											if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 145)												array = false;
HXDLIN( 145)												lua_pop(l,2);
HXDLIN( 145)												goto _hx_goto_27;
            											}
HXDLIN( 145)											lua_pop(l,1);
            										}
            										_hx_goto_27:;
HXDLIN( 145)										if (array) {
HXLINE( 145)											::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 145)												arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret = arr;
            										}
            										else {
HXLINE( 145)											 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 145)											lua_pushnil(l);
HXDLIN( 145)											while((lua_next(l,-2) != 0)){
HXLINE( 145)												::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 145)												obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)												lua_pop(l,1);
            											}
HXDLIN( 145)											ret = obj;
            										}
HXDLIN( 145)										ret2 = ret;
            									}
            									break;
            									default:{
HXLINE( 145)										ret2 = null();
HXDLIN( 145)										::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            									}
            								}
HXDLIN( 145)								obj->hx::Anon_obj::Add(ret1,ret2);
HXDLIN( 145)								lua_pop(l,1);
            							}
HXDLIN( 145)							ret1 = obj;
            						}
HXDLIN( 145)						ret = ret1;
            					}
            					break;
            					default:{
HXLINE( 145)						ret = null();
HXDLIN( 145)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 145)				::String _hx_tmp = ::Std_obj::string(ret);
HXDLIN( 145)				 ::Dynamic ret1 = null();
HXDLIN( 145)				switch((int)(lua_type(l,-1))){
            					case (int)0: {
HXLINE( 145)						ret1 = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 145)						ret1 = (lua_toboolean(l,-1) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 145)						ret1 = lua_tonumber(l,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 145)						ret1 = linc::lua::tostring(l,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 145)						bool array = true;
HXDLIN( 145)						 ::Dynamic ret = null();
HXDLIN( 145)						lua_pushnil(l);
HXDLIN( 145)						while((lua_next(l,-2) != 0)){
HXLINE( 145)							if ((lua_type(l,-2) != 3)) {
HXLINE( 145)								array = false;
HXDLIN( 145)								lua_pop(l,2);
HXDLIN( 145)								goto _hx_goto_30;
            							}
HXDLIN( 145)							Float n = lua_tonumber(l,-2);
HXDLIN( 145)							if ((n != ::Std_obj::_hx_int(n))) {
HXLINE( 145)								array = false;
HXDLIN( 145)								lua_pop(l,2);
HXDLIN( 145)								goto _hx_goto_30;
            							}
HXDLIN( 145)							lua_pop(l,1);
            						}
            						_hx_goto_30:;
HXDLIN( 145)						if (array) {
HXLINE( 145)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 145)							lua_pushnil(l);
HXDLIN( 145)							while((lua_next(l,-2) != 0)){
HXLINE( 145)								int index = (lua_tointeger(l,-2) - 1);
HXDLIN( 145)								arr->set(index,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)								lua_pop(l,1);
            							}
HXDLIN( 145)							ret = arr;
            						}
            						else {
HXLINE( 145)							 hx::Anon obj = hx::Anon_obj::Create();
HXDLIN( 145)							lua_pushnil(l);
HXDLIN( 145)							while((lua_next(l,-2) != 0)){
HXLINE( 145)								::String ret = ::Std_obj::string(::llua::Convert_obj::fromLua(l,-2));
HXDLIN( 145)								obj->hx::Anon_obj::Add(ret,::llua::Convert_obj::fromLua(l,-1));
HXDLIN( 145)								lua_pop(l,1);
            							}
HXDLIN( 145)							ret = obj;
            						}
HXDLIN( 145)						ret1 = ret;
            					}
            					break;
            					default:{
HXLINE( 145)						ret1 = null();
HXDLIN( 145)						::haxe::Log_obj::trace(HX_("return value not supported\n",48,41,fb,c8),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),96,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 145)				obj->hx::Anon_obj::Add(_hx_tmp,ret1);
HXLINE( 146)				lua_pop(l,1);
            			}
HXLINE( 148)			ret = obj;
            		}
HXLINE( 152)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,fromLuaTable,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLua") ) { outValue = toLua_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromLua") ) { outValue = fromLua_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToLua") ) { outValue = arrayToLua_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectToLua") ) { outValue = objectToLua_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromLuaTable") ) { outValue = fromLuaTable_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Convert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Convert_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("toLua",fd,0a,14,14),
	HX_("arrayToLua",a4,22,41,0e),
	HX_("objectToLua",be,27,43,83),
	HX_("fromLua",6e,2a,fd,57),
	HX_("fromLuaTable",c0,6e,5d,29),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Convert",31,b8,44,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace llua
