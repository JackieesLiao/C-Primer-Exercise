#include<iostream>
#include<string>
#include<vector>
void printValue(const int& values)
{
	std::cout << "Values of:"<<values << std::endl;
}
void forEach(const std::vector<int>& values,void(*func)(const int&))
{
	for (int value : values)
		func(value);
}
bool lengthCompare(const std::string& str1,const std::string& str2)
{
	return str1.size() > str2.size() ? true : false;
}
int main()
{
	/*
	* 函数指针
	*/
	//pr指向一个参数值为两个const string的引用,返回值为bool值的函数
	bool (*pr)(const std::string& , const std::string&);
	pr = lengthCompare;

	//三种等价调用
	bool pr1 = pr("Hello Hello World","Hi,Liao");
	bool pr2 = (*pr)("good bye","My dear");
	bool pr3 = lengthCompare("LiFan", "u r genius");
	std::cout << pr1 ;
	std::cout << pr2 ;
	std::cout << pr3 << std::endl;

	std::vector<int> values = { 1,3,5,7,9 };
	forEach(values,printValue);
}
