#include<iostream>
#include<cmath>
int Abs_int(int val)
{ 
	return abs(val);
}
int main()
{
	int num = -9;
	double num_1 = -3.1456;
	std::cout << "整型实参num的绝对值为：" << Abs_int(num) << std::endl;
	std::cout << "浮点型实参num_1的绝对值为：" << std::fabs(num_1) << std::endl;
}