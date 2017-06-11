// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#define INCLUDED_flixel_system_debug_stats_Stats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,stats,Stats)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,stats,StatsGraph)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{


class HXCPP_CLASS_ATTRIBUTES Stats_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Stats_obj OBJ_;
		Stats_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats.Stats")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.stats.Stats"); }
		static hx::ObjectPtr< Stats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stats_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stats","\xff","\xe5","\x38","\x17"); }

		static void __boot();
		static Int UPDATE_DELAY;
		static Int INITIAL_WIDTH;
		static Int MIN_HEIGHT;
		static Int FPS_COLOR;
		static Int MEMORY_COLOR;
		static Int DRAW_TIME_COLOR;
		static Int UPDATE_TIME_COLOR;
		static Int LABEL_COLOR;
		static Int TEXT_SIZE;
		static Int DECIMALS;
		 ::openfl::_legacy::text::TextField _leftTextField;
		 ::openfl::_legacy::text::TextField _rightTextField;
		Int _itvTime;
		Int _frameCount;
		Int _currentTime;
		 ::flixel::_hx_system::debug::stats::StatsGraph fpsGraph;
		 ::flixel::_hx_system::debug::stats::StatsGraph memoryGraph;
		 ::flixel::_hx_system::debug::stats::StatsGraph drawTimeGraph;
		 ::flixel::_hx_system::debug::stats::StatsGraph updateTimeGraph;
		Float flashPlayerFramerate;
		Int visibleCount;
		Int activeCount;
		Int updateTime;
		Int drawTime;
		Int drawCallsCount;
		Int _lastTime;
		Int _updateTimer;
		::Array< Int > _update;
		Int _updateMarker;
		::Array< Int > _draw;
		Int _drawMarker;
		::Array< Int > _drawCalls;
		Int _drawCallsMarker;
		::Array< Int > _visibleObject;
		Int _visibleObjectMarker;
		::Array< Int > _activeObject;
		Int _activeObjectMarker;
		Bool _paused;
		 ::flixel::_hx_system::ui::FlxSystemButton _toggleSizeButton;
		void start();
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

		void destroy();

		void update();

		void updateTexts();
		::Dynamic updateTexts_dyn();

		Float divide(Float f1,Float f2);
		::Dynamic divide_dyn();

		Float currentFps();
		::Dynamic currentFps_dyn();

		Float intervalTime();
		::Dynamic intervalTime_dyn();

		Float currentMem();
		::Dynamic currentMem_dyn();

		void flixelUpdate(Int Time);
		::Dynamic flixelUpdate_dyn();

		void flixelDraw(Int Time);
		::Dynamic flixelDraw_dyn();

		void activeObjects(Int Count);
		::Dynamic activeObjects_dyn();

		void visibleObjects(Int Count);
		::Dynamic visibleObjects_dyn();

		void drawCalls(Int Drawcalls);
		::Dynamic drawCalls_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void toggleSize();
		::Dynamic toggleSize_dyn();

		void updateSize();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats

#endif /* INCLUDED_flixel_system_debug_stats_Stats */ 