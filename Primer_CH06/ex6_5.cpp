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
	std::cout << "����ʵ��num�ľ���ֵΪ��" << Abs_int(num) << std::endl;
	std::cout << "������ʵ��num_1�ľ���ֵΪ��" << std::fabs(num_1) << std::endl;
}