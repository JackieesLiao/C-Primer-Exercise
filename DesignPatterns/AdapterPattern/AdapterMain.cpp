#include<iostream>
#include"Adapter.h"
int main()
{
	Adaptee* adaptee = new Adaptee;
	//创建Adapter对象的同时也将被适配器对象包装到adapter里面
	Target* adapter = new Adapter(adaptee);
	//因此adapter调用Request方法时实际上调用的是specialRequest方法
	adapter->Request();
	//使用new是在堆上分配内存，如果不使用delete，那么已经分配给对象的内存不会归还给操作系统，俗称内存泄漏(memory leaks)
	delete adaptee;
	delete adapter;
}