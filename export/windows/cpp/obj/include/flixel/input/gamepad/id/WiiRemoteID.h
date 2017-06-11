// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#define INCLUDED_flixel_input_gamepad_id_WiiRemoteID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,WiiRemoteID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES WiiRemoteID_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef WiiRemoteID_obj OBJ_;
		WiiRemoteID_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.WiiRemoteID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.WiiRemoteID"); }
		static hx::ObjectPtr< WiiRemoteID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WiiRemoteID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WiiRemoteID","\xf8","\x72","\xa0","\xb4"); }

		static void __boot();
		static Int REMOTE_ONE;
		static Int REMOTE_TWO;
		static Int REMOTE_A;
		static Int REMOTE_B;
		static Int REMOTE_PLUS;
		static Int REMOTE_MINUS;
		static Int REMOTE_HOME;
		static Int NUNCHUK_A;
		static Int NUNCHUK_B;
		static Int NUNCHUK_C;
		static Int NUNCHUK_Z;
		static Int NUNCHUK_ONE;
		static Int NUNCHUK_TWO;
		static Int NUNCHUK_PLUS;
		static Int NUNCHUK_MINUS;
		static Int NUNCHUK_HOME;
		static Int CLASSIC_A;
		static Int CLASSIC_B;
		static Int CLASSIC_Y;
		static Int CLASSIC_X;
		static Int CLASSIC_L;
		static Int CLASSIC_R;
		static Int CLASSIC_ZL;
		static Int CLASSIC_ZR;
		static Int CLASSIC_START;
		static Int CLASSIC_SELECT;
		static Int CLASSIC_HOME;
		static Int CLASSIC_ONE;
		static Int CLASSIC_TWO;
		static Int REMOTE_TILT_PITCH;
		static Int REMOTE_TILT_ROLL;
		static Int NUNCHUK_TILT_PITCH;
		static Int NUNCHUK_TILT_ROLL;
		static Int REMOTE_NULL_AXIS;
		static Int NUNCHUK_NULL_AXIS;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick REMOTE_DPAD;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static Int LEFT_TRIGGER_FAKE;
		static Int RIGHT_TRIGGER_FAKE;
		static Int REMOTE_DPAD_UP;
		static Int REMOTE_DPAD_DOWN;
		static Int REMOTE_DPAD_LEFT;
		static Int REMOTE_DPAD_RIGHT;
		static Int REMOTE_DPAD_X;
		static Int REMOTE_DPAD_Y;
		static Int CLASSIC_DPAD_DOWN;
		static Int CLASSIC_DPAD_UP;
		static Int CLASSIC_DPAD_LEFT;
		static Int CLASSIC_DPAD_RIGHT;
		static Int NUNCHUK_DPAD_DOWN;
		static Int NUNCHUK_DPAD_UP;
		static Int NUNCHUK_DPAD_LEFT;
		static Int NUNCHUK_DPAD_RIGHT;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_WiiRemoteID */ 