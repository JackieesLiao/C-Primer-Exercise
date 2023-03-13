#ifndef DESIGNPATTERN_ADAPTEE_H
#define DESIGNPATTERN_ADAPTEE_H
#include<iostream>
//适配器设计模式
//Adaptee类，表示待适配的类
class Adaptee
{
public :
	void specialRequest()
	{
		std::cout << "小伙子，你以为在调用Request()?实际上是我 specialRequest()。" << std::endl;
	}
};
#endif DESIGNPATTERN_ADAPTEE_H