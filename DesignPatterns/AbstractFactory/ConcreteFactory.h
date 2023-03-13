#ifndef DESIGNPATTERN_CONCRETE_FACTORY_H
#define DESIGNPATTERN_CONCRETE_FACTORY_H
#include "AbstractFactory.h"
#include"ConcreteProduct.h"
//输出紫色三角形的抽象工厂
class PurpleRectangleFactory :public IAbstractFactory
{
public:
	IShape* createShape()
	{
		return new Rectangle();//获得三角形类实例
	}
	IColor* createColor()
	{
		return new Purple();//获得紫色类实例
	}
};
//输出红色圆柱体的抽象工厂
class RedCylinderFactory :public IAbstractFactory
{
public:
	IShape* createShape()
	{
		return new Cylinder();
	}
	IColor* createColor()
	{
		return new Red();
	}
};
#endif DESIGNPATTERN_CONCRETE_FACTORY_H
