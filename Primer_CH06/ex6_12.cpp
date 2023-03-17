//使用引用形参交换两个整数的值
/*
//references instead of pointers to swap the value of two ints. Which
//version do you think would be easier to use and why?
//The version using reference is easier.
*/
#include<iostream>
 void swap(int& num1,int& num2)
 {
     int temp;
     temp=num1;
     num1=num2;
     num2=temp;
 }
 int main()
 {
     int m=9,n=8;
     std::cout<<"Swap before:"<<"m="<<m<<",n="<<n<<std::endl;
     swap(m,n);
     std::cout<<"Swap after:"<<"m="<<m<<",n="<<n<<std::endl;
 }
