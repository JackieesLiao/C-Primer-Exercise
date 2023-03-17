#include<iostream>
 size_t count_add(int n) //n为形参，为局部变量，在函数参数列表中声明
 {
     static size_t crr=0; //局部静态变量
     crr+=n;
     return crr;
 }
 int main()
 {
     for(size_t i=0;i!=10;i++) //i也为局部变量
         std::cout<<count_add(i)<<std::endl;
 }
