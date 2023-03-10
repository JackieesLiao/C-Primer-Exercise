#include<iostream>
int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
        ret *= val--;
	}
	return ret;
}
int main()
{
	std::cout <<"阶乘结果："<< fact(5) << std::endl;
}
