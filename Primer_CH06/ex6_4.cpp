#include<iostream>
int fact( int val)
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
	int cin_interger;
	std::cout << "输入一个正整数：";
	std::cin >> cin_interger;
	std::cout << "您输入的数的阶乘结果：" << fact(cin_interger) << std::endl;
}
