#include <exception>
using namespace std;

#ifndef __Gluecose2_h__
#define __Gluecose2_h__

// #include "Voice_Activation2.h"

class Voice_Activation2;
class Gluecose2;

class Gluecose2
{
	private: int _gluecose;
	public: Voice_Activation2* _unnamed_Voice_Activation2_;

	public: void calculateGluecose();

	public: void sendInfo();
};

#endif
