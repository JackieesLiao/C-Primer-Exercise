#ifndef DESIGNPATTERN_ADAPTEE_H
#define DESIGNPATTERN_ADAPTEE_H
#include<iostream>
//���������ģʽ
//Adaptee�࣬��ʾ���������
class Adaptee
{
public :
	void specialRequest()
	{
		std::cout << "С���ӣ�����Ϊ�ڵ���Request()?ʵ�������� specialRequest()��" << std::endl;
	}
};
#endif DESIGNPATTERN_ADAPTEE_H