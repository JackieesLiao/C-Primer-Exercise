#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H
//�����ӿ�
//��״�ӿ�
class IShape
{
public :
	virtual void draw() = 0;//���麯��
};
//��ɫ�ӿ�
class IColor
{
public:
	virtual void fill() = 0;
};
#endif DESIGN_PATTERNS_PRODUCT_H
