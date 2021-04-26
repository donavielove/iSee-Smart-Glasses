#include <exception>
using namespace std;

#ifndef __Voice_Activation2_h__
#define __Voice_Activation2_h__

// #include "Gluecose2.h"
// #include "Control_Panel_2.h"
// #include "Emergency2.h"
// #include "Pulse2.h"

class Gluecose2;
class Control_Panel_2;
class Emergency2;
class Pulse2;
class Voice_Activation2;

class Voice_Activation2
{
	private: bool _voiceActivation;
	public: Gluecose2* _unnamed_Gluecose2_;
	public: Control_Panel_2* _unnamed_Control_Panel_2_;
	public: Emergency2* _unnamed_Emergency2_;
	public: Pulse2* _unnamed_Pulse2_;

	public: void callPulse();

	public: void callGluecose();

	public: void callEmergency();
};

#endif
