#ifndef DESIGNPATTERN_CONCRETE_PRODUCT_H
#define DESIGNPATTERN_CONCRETE_PRODUCT_H
#include<iostream>
#include "Product.h"
/*
* ����Ĳ�Ʒ������ʵ�����ֽӿ�
*/
class Rectangle :public IShape
{
public:
	void draw() override
	{
		std::cout << "Rectangle::draw()." << std::endl;
	}
};
class Cylinder :public IShape
{
	void draw() override
	{
		std::cout << "Cylinder::draw()." << std::endl;
	}
};
class Red :public IColor
{
	void fill() override
	{
		std::cout << "Red::fill()." << std::endl;
	}
};
class Purple :public IColor
{
	void fill() override
	{
		std::cout << "Purple::fill()." << std::endl;
	}
};
#endif DESIGNPATTERN_CONCRETE_PRODUCT_H