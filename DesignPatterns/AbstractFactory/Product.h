#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H
//两个接口
//形状接口
class IShape
{
public :
	virtual void draw() = 0;//纯虚函数
};
//颜色接口
class IColor
{
public:
	virtual void fill() = 0;
};
#endif DESIGN_PATTERNS_PRODUCT_H
