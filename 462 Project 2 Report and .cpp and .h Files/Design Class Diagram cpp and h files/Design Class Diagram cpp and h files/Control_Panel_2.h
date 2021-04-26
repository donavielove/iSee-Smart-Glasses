#include <exception>
using namespace std;

#ifndef __Control_Panel_2_h__
#define __Control_Panel_2_h__

// #include "Volume_Up2.h"
// #include "Camera_Shutter_Button2.h"
// #include "Phone2.h"
// #include "Voice_Activation2.h"

class Volume_Up2;
class Camera_Shutter_Button2;
class Phone2;
class Voice_Activation2;
class Control_Panel_2;

class Control_Panel_2
{
	private: int _volume;
	private: bool _volumnUp;
	private: bool _volumnDown;
	public: Volume_Up2* _unnamed_Volume_Up2_;
	public: Volume_Up2* _unnamed_Volume_Up2_2;
	public: Camera_Shutter_Button2* _unnamed_Camera_Shutter_Button2_;
	public: Phone2* _unnamed_Phone2_;
	public: Voice_Activation2* _unnamed_Voice_Activation2_;

	public: void voiceActivation();

	public: void cameraActivation();
};

#endif
