#include <exception>
using namespace std;

#ifndef __Emergency2_h__
#define __Emergency2_h__

// #include "Voice_Activation2.h"

class Voice_Activation2;
class Emergency2;

class Emergency2
{
	private: bool _gps;
	public: Voice_Activation2* _unnamed_Voice_Activation2_;

	public: void callHelp();

	public: void sendLocation();

	public: void sendTest();
};

#endif
