#include "Clock.h"

Clock::Clock(){
	setStart();
}

void Clock::setStart(){
	start_t = clock();
}

double Clock::getTime(){
	return static_cast<double>(clock()-start_t)/CLOCKS_PER_SEC;
}

