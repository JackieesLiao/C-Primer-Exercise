#include<iostream>
#include"Adapter.h"
int main()
{
	Adaptee* adaptee = new Adaptee;
	//����Adapter�����ͬʱҲ���������������װ��adapter����
	Target* adapter = new Adapter(adaptee);
	//���adapter����Request����ʱʵ���ϵ��õ���specialRequest����
	adapter->Request();
	//ʹ��new���ڶ��Ϸ����ڴ棬�����ʹ��delete����ô�Ѿ������������ڴ治��黹������ϵͳ���׳��ڴ�й©(memory leaks)
	delete adaptee;
	delete adapter;
}