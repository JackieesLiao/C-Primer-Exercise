//使用指针形参交换两个整数的值
#include<iostream>
 void swap(int *ptr1,int *ptr2)
 {
     int temp;//别声明为int*temp,否则会错误的将一个整数赋给空指针触发段错误
     temp=*ptr1;
     *ptr1=*ptr2;
     *ptr2=temp;
 }
 int main()
 {
     int m=9,n=8;
     std::cout<<"Swap before:"<<"m="<<m<<",n="<<n<<std::endl;
     swap(&m,&n);
     std::cout<<"Swap after:"<<"m="<<m<<",n="<<n<<std::endl;
 }
