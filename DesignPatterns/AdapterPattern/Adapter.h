#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H
#include "Target.h"
#include "Adaptee.h"
//���������ģʽ
//Adapter�࣬��ʾ��������,ʵ��Ŀ��ӿ�
class Adapter :public Target
{
public:
	//��Adapter�๹�캯���Ĳ����а����˱�����������󣬽�Adaptee�����װ��Adapter�����У�����ӿ�ת��ΪTarget�������Ľӿ���ʽ��
	Adapter(Adaptee* ade)
	{
		adee = ade;
	}
	void Request()
	{
		adee->specialRequest();
	}
private:
	Adaptee* adee;
};
#endif DESIGNPATTERN_ADAPTER_H
