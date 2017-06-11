// Generated by Haxe 3.3.0
#ifndef INCLUDED_cpp_vm_Deque
#define INCLUDED_cpp_vm_Deque

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Deque_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Deque_obj OBJ_;
		Deque_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Deque")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Deque"); }
		static hx::ObjectPtr< Deque_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deque_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Deque","\x00","\x24","\x58","\x6a"); }

		 ::Dynamic q;
		void add( ::Dynamic i);
		::Dynamic add_dyn();

		 ::Dynamic pop(Bool block);
		::Dynamic pop_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Deque */ 