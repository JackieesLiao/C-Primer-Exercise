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
	std::cout << "����һ����������";
	std::cin >> cin_interger;
	std::cout << "����������Ľ׳˽����" << fact(cin_interger) << std::endl;
}
