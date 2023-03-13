#include<iostream>
#include"ConcreteFactory.h"
#include"ConcreteProduct.h"
int main()
{
	//实现创建具体产品对象
	IAbstractFactory* iabs1 = new PurpleRectangleFactory();
	IShape* rec = iabs1->createShape();
	IColor* pr = iabs1->createColor();
	rec->draw();
	pr->fill();

	IAbstractFactory* iabs2 = new RedCylinderFactory();
	IShape* cy = iabs2->createShape();
	IColor* re = iabs2->createColor();
	cy->draw();
	re->fill();

	delete iabs1;
	delete rec;
	delete pr;
	delete iabs2;
	delete cy;
	delete re;

}
