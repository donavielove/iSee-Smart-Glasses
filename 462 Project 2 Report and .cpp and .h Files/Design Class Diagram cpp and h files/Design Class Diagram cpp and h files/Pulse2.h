#include <exception>
using namespace std;

#ifndef __Pulse2_h__
#define __Pulse2_h__

// #include "Voice_Activation2.h"

class Voice_Activation2;
class Pulse2;

class Pulse2
{
	private: int _pulse;
	public: Voice_Activation2* _unnamed_Voice_Activation2_;

	public: void calculatePulse();

	public: void sendInfo();
};

#endif
