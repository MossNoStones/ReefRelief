// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#define INCLUDED_flixel_util__FlxColor_FlxColor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(flixel,util,_FlxColor,FlxColor_Impl_)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace util{
namespace _FlxColor{


class HXCPP_CLASS_ATTRIBUTES FlxColor_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxColor_Impl__obj OBJ_;
		FlxColor_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxColor.FlxColor_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util._FlxColor.FlxColor_Impl_"); }
		static hx::ObjectPtr< FlxColor_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxColor_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxColor_Impl_","\x11","\x13","\xa5","\x30"); }

		static void __boot();
		static Int TRANSPARENT;
		static Int WHITE;
		static Int GRAY;
		static Int BLACK;
		static Int GREEN;
		static Int LIME;
		static Int YELLOW;
		static Int ORANGE;
		static Int RED;
		static Int PURPLE;
		static Int BLUE;
		static Int BROWN;
		static Int PINK;
		static Int MAGENTA;
		static Int CYAN;
		static  ::haxe::ds::StringMap colorLookup;
		static  ::EReg COLOR_REGEX;
		static Int fromInt(Int Value);
		static ::Dynamic fromInt_dyn();

		static Int fromRGB(Int Red,Int Green,Int Blue,hx::Null< Int >  Alpha);
		static ::Dynamic fromRGB_dyn();

		static Int fromRGBFloat(Float Red,Float Green,Float Blue,hx::Null< Float >  Alpha);
		static ::Dynamic fromRGBFloat_dyn();

		static Int fromCMYK(Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  Alpha);
		static ::Dynamic fromCMYK_dyn();

		static Int fromHSB(Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  Alpha);
		static ::Dynamic fromHSB_dyn();

		static Int fromHSL(Float Hue,Float Saturation,Float Lightness,hx::Null< Float >  Alpha);
		static ::Dynamic fromHSL_dyn();

		static  ::Dynamic fromString(::String str);
		static ::Dynamic fromString_dyn();

		static ::Array< Int > getHSBColorWheel(hx::Null< Int >  Alpha);
		static ::Dynamic getHSBColorWheel_dyn();

		static Int interpolate(Int Color1,Int Color2,hx::Null< Float >  Factor);
		static ::Dynamic interpolate_dyn();

		static ::Array< Int > gradient(Int Color1,Int Color2,Int Steps, ::Dynamic Ease);
		static ::Dynamic gradient_dyn();

		static Int multiply(Int lhs,Int rhs);
		static ::Dynamic multiply_dyn();

		static Int add(Int lhs,Int rhs);
		static ::Dynamic add_dyn();

		static Int subtract(Int lhs,Int rhs);
		static ::Dynamic subtract_dyn();

		static Int getComplementHarmony(Int this1);
		static ::Dynamic getComplementHarmony_dyn();

		static  ::Dynamic getAnalogousHarmony(Int this1,hx::Null< Int >  Threshold);
		static ::Dynamic getAnalogousHarmony_dyn();

		static  ::Dynamic getSplitComplementHarmony(Int this1,hx::Null< Int >  Threshold);
		static ::Dynamic getSplitComplementHarmony_dyn();

		static  ::Dynamic getTriadicHarmony(Int this1);
		static ::Dynamic getTriadicHarmony_dyn();

		static Int to24Bit(Int this1);
		static ::Dynamic to24Bit_dyn();

		static ::String toHexString(Int this1,hx::Null< Bool >  Alpha,hx::Null< Bool >  Prefix);
		static ::Dynamic toHexString_dyn();

		static ::String toWebString(Int this1);
		static ::Dynamic toWebString_dyn();

		static ::String getColorInfo(Int this1);
		static ::Dynamic getColorInfo_dyn();

		static Int getDarkened(Int this1,hx::Null< Float >  Factor);
		static ::Dynamic getDarkened_dyn();

		static Int getLightened(Int this1,hx::Null< Float >  Factor);
		static ::Dynamic getLightened_dyn();

		static Int getInverted(Int this1);
		static ::Dynamic getInverted_dyn();

		static Int setRGB(Int this1,Int Red,Int Green,Int Blue,hx::Null< Int >  Alpha);
		static ::Dynamic setRGB_dyn();

		static Int setRGBFloat(Int this1,Float Red,Float Green,Float Blue,hx::Null< Float >  Alpha);
		static ::Dynamic setRGBFloat_dyn();

		static Int setCMYK(Int this1,Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  Alpha);
		static ::Dynamic setCMYK_dyn();

		static Int setHSB(Int this1,Float Hue,Float Saturation,Float Brightness,Float Alpha);
		static ::Dynamic setHSB_dyn();

		static Int setHSL(Int this1,Float Hue,Float Saturation,Float Lightness,Float Alpha);
		static ::Dynamic setHSL_dyn();

		static Int setHSChromaMatch(Int this1,Float Hue,Float Saturation,Float Chroma,Float Match,Float Alpha);
		static ::Dynamic setHSChromaMatch_dyn();

		static Int _new(hx::Null< Int >  Value);
		static ::Dynamic _new_dyn();

		static Int getThis(Int this1);
		static ::Dynamic getThis_dyn();

		static void validate(Int this1);
		static ::Dynamic validate_dyn();

		static Int get_red(Int this1);
		static ::Dynamic get_red_dyn();

		static Int get_green(Int this1);
		static ::Dynamic get_green_dyn();

		static Int get_blue(Int this1);
		static ::Dynamic get_blue_dyn();

		static Int get_alpha(Int this1);
		static ::Dynamic get_alpha_dyn();

		static Float get_redFloat(Int this1);
		static ::Dynamic get_redFloat_dyn();

		static Float get_greenFloat(Int this1);
		static ::Dynamic get_greenFloat_dyn();

		static Float get_blueFloat(Int this1);
		static ::Dynamic get_blueFloat_dyn();

		static Float get_alphaFloat(Int this1);
		static ::Dynamic get_alphaFloat_dyn();

		static Int set_red(Int this1,Int Value);
		static ::Dynamic set_red_dyn();

		static Int set_green(Int this1,Int Value);
		static ::Dynamic set_green_dyn();

		static Int set_blue(Int this1,Int Value);
		static ::Dynamic set_blue_dyn();

		static Int set_alpha(Int this1,Int Value);
		static ::Dynamic set_alpha_dyn();

		static Float set_redFloat(Int this1,Float Value);
		static ::Dynamic set_redFloat_dyn();

		static Float set_greenFloat(Int this1,Float Value);
		static ::Dynamic set_greenFloat_dyn();

		static Float set_blueFloat(Int this1,Float Value);
		static ::Dynamic set_blueFloat_dyn();

		static Float set_alphaFloat(Int this1,Float Value);
		static ::Dynamic set_alphaFloat_dyn();

		static Float get_cyan(Int this1);
		static ::Dynamic get_cyan_dyn();

		static Float get_magenta(Int this1);
		static ::Dynamic get_magenta_dyn();

		static Float get_yellow(Int this1);
		static ::Dynamic get_yellow_dyn();

		static Float get_black(Int this1);
		static ::Dynamic get_black_dyn();

		static Float set_cyan(Int this1,Float Value);
		static ::Dynamic set_cyan_dyn();

		static Float set_magenta(Int this1,Float Value);
		static ::Dynamic set_magenta_dyn();

		static Float set_yellow(Int this1,Float Value);
		static ::Dynamic set_yellow_dyn();

		static Float set_black(Int this1,Float Value);
		static ::Dynamic set_black_dyn();

		static Float get_hue(Int this1);
		static ::Dynamic get_hue_dyn();

		static Float get_brightness(Int this1);
		static ::Dynamic get_brightness_dyn();

		static Float get_saturation(Int this1);
		static ::Dynamic get_saturation_dyn();

		static Float get_lightness(Int this1);
		static ::Dynamic get_lightness_dyn();

		static Float set_hue(Int this1,Float Value);
		static ::Dynamic set_hue_dyn();

		static Float set_saturation(Int this1,Float Value);
		static ::Dynamic set_saturation_dyn();

		static Float set_brightness(Int this1,Float Value);
		static ::Dynamic set_brightness_dyn();

		static Float set_lightness(Int this1,Float Value);
		static ::Dynamic set_lightness_dyn();

		static Float maxColor(Int this1);
		static ::Dynamic maxColor_dyn();

		static Float minColor(Int this1);
		static ::Dynamic minColor_dyn();

		static Int boundChannel(Int this1,Int Value);
		static ::Dynamic boundChannel_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxColor

#endif /* INCLUDED_flixel_util__FlxColor_FlxColor_Impl_ */ 