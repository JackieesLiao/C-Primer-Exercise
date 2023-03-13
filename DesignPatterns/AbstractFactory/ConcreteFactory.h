#ifndef DESIGNPATTERN_CONCRETE_FACTORY_H
#define DESIGNPATTERN_CONCRETE_FACTORY_H
#include "AbstractFactory.h"
#include"ConcreteProduct.h"
//�����ɫ�����εĳ��󹤳�
class PurpleRectangleFactory :public IAbstractFactory
{
public:
	IShape* createShape()
	{
		return new Rectangle();//�����������ʵ��
	}
	IColor* createColor()
	{
		return new Purple();//�����ɫ��ʵ��
	}
};
//�����ɫԲ����ĳ��󹤳�
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
