#include <exception>
using namespace std;

#ifndef __Camera_Shutter_Button2_h__
#define __Camera_Shutter_Button2_h__

// #include "Control_Panel_2.h"

class Control_Panel_2;
class Camera_Shutter_Button2;

class Camera_Shutter_Button2
{
	private: bool _pressed;
	public: Control_Panel_2* _unnamed_Control_Panel_2_;

	public: void capture();

	public: void distance();

	public: void New_Method_Created();
};

#endif
