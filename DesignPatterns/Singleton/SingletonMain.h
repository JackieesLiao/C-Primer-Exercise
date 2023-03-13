#ifndef DESIGNPATTERN_SINGLETONMAIN_H
#define DESIGNPATTERN_SINGLETONMAIN_H

#include"Singleton.h"
void printSingletonMain()
{
	std::cout<<newSingleton::Get().doSomething();
}
#endif //DESIGNPATTERN_SINGLETONMAIN_H