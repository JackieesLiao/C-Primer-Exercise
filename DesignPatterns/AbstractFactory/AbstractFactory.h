#include"Product.h"
class IAbstractFactory
{
public:
	virtual IShape* createShape() = 0;
	virtual IColor* createColor() = 0;
};
