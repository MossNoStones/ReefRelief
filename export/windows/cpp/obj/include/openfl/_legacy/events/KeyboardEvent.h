// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#define INCLUDED_openfl__legacy_events_KeyboardEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)

namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES KeyboardEvent_obj : public  ::openfl::_legacy::events::Event_obj
{
	public:
		typedef  ::openfl::_legacy::events::Event_obj super;
		typedef KeyboardEvent_obj OBJ_;
		KeyboardEvent_obj();

	public:
		void __construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Int >  __o_charCodeValue,hx::Null< Int >  __o_keyCodeValue,hx::Null< Int >  __o_keyLocationValue,hx::Null< Bool >  __o_ctrlKeyValue,hx::Null< Bool >  __o_altKeyValue,hx::Null< Bool >  __o_shiftKeyValue,hx::Null< Bool >  __o_controlKeyValue,hx::Null< Bool >  __o_commandKeyValue);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events.KeyboardEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.events.KeyboardEvent"); }
		static hx::ObjectPtr< KeyboardEvent_obj > __new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Int >  __o_charCodeValue,hx::Null< Int >  __o_keyCodeValue,hx::Null< Int >  __o_keyLocationValue,hx::Null< Bool >  __o_ctrlKeyValue,hx::Null< Bool >  __o_altKeyValue,hx::Null< Bool >  __o_shiftKeyValue,hx::Null< Bool >  __o_controlKeyValue,hx::Null< Bool >  __o_commandKeyValue);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyboardEvent","\xd3","\x8d","\x88","\x91"); }

		static void __boot();
		static ::String KEY_DOWN;
		static ::String KEY_UP;
		Bool altKey;
		Int charCode;
		Bool ctrlKey;
		Bool controlKey;
		Bool commandKey;
		Int keyCode;
		Int keyLocation;
		Bool shiftKey;
		 ::openfl::_legacy::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_KeyboardEvent */ 