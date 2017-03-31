#ifndef _CLOCK_H_
#define _CLOCK_H_
#include<ctime>
using namespace std;

class Clock{
	public:
		Clock();
		void setStart();
		double getTime();
	private:
		clock_t start_t;
};

#endif
