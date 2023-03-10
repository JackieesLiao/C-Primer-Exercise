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
	std::cout <<"½×³Ë½á¹û£º"<< fact(3) << std::endl;
}
