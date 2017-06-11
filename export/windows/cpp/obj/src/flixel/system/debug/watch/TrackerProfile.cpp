// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void TrackerProfile_obj::__construct(hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions){
            	HX_STACK_FRAME("flixel.system.debug.watch.TrackerProfile","new",0x3f8f952a,"flixel.system.debug.watch.TrackerProfile.new","flixel/system/debug/watch/Tracker.hx",233,0x14368dcf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ObjectClass,"ObjectClass")
            	HX_STACK_ARG(Variables,"Variables")
            	HX_STACK_ARG(Extensions,"Extensions")
HXLINE( 234)		this->objectClass = ObjectClass;
HXLINE( 235)		this->variables = Variables;
HXLINE( 236)		this->extensions = Extensions;
            	}

Dynamic TrackerProfile_obj::__CreateEmpty() { return new TrackerProfile_obj; }

hx::ObjectPtr< TrackerProfile_obj > TrackerProfile_obj::__new(hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions)
{
	hx::ObjectPtr< TrackerProfile_obj > _hx_result = new TrackerProfile_obj();
	_hx_result->__construct(ObjectClass,Variables,Extensions);
	return _hx_result;
}

Dynamic TrackerProfile_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TrackerProfile_obj > _hx_result = new TrackerProfile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

::String TrackerProfile_obj::toString(){
            	HX_STACK_FRAME("flixel.system.debug.watch.TrackerProfile","toString",0x9a236fa2,"flixel.system.debug.watch.TrackerProfile.toString","flixel/system/debug/watch/Tracker.hx",241,0x14368dcf)
            	HX_STACK_THIS(this)
HXLINE( 242)		HX_VARI(  ::flixel::util::LabelValuePair,_this) = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 242)		_this->label = HX_("variables",b7,e2,62,82);
HXDLIN( 242)		_this->value = this->variables;
HXLINE( 243)		HX_VARI_NAME(  ::flixel::util::LabelValuePair,_this1,"_this") = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 243)		_this1->label = HX_("extensions",14,7c,70,89);
HXDLIN( 243)		_this1->value = this->extensions;
HXLINE( 241)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrackerProfile_obj,toString,return )


TrackerProfile_obj::TrackerProfile_obj()
{
}

void TrackerProfile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrackerProfile);
	HX_MARK_MEMBER_NAME(objectClass,"objectClass");
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_END_CLASS();
}

void TrackerProfile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectClass,"objectClass");
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
}

hx::Val TrackerProfile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return hx::Val( variables); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return hx::Val( extensions); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { return hx::Val( objectClass); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TrackerProfile_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { objectClass=inValue.Cast< hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrackerProfile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"));
	outFields->push(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"));
	outFields->push(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TrackerProfile_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(TrackerProfile_obj,objectClass),HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TrackerProfile_obj,variables),HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TrackerProfile_obj,extensions),HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TrackerProfile_obj_sStaticStorageInfo = 0;
#endif

static ::String TrackerProfile_obj_sMemberFields[] = {
	HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"),
	HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"),
	HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void TrackerProfile_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TrackerProfile_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#endif

hx::Class TrackerProfile_obj::__mClass;

void TrackerProfile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.TrackerProfile","\x38","\x78","\x47","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TrackerProfile_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TrackerProfile_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TrackerProfile_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TrackerProfile_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrackerProfile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrackerProfile_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch