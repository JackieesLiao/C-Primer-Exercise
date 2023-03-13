#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H
#include "Target.h"
#include "Adaptee.h"
//适配器设计模式
//Adapter类，表示适配器类,实现目标接口
class Adapter :public Target
{
public:
	//在Adapter类构造函数的参数中包含了被适配器类对象，将Adaptee对象包装在Adapter对象中，将其接口转换为Target所期望的接口形式。
	Adapter(Adaptee* ade)
	{
		adee = ade;
	}
	void Request()
	{
		adee->specialRequest();
	}
private:
	Adaptee* adee;
};
#endif DESIGNPATTERN_ADAPTER_H
