#include<iostream>
 size_t count_calls()
 {
      static size_t crr=0;
      return crr++;//The first call returns 0, and each subsequent call increments by one
 }
 int main()
 {
     for(size_t i=0;i!=5;i++)
        std::cout<<count_calls()<<std::endl;
 }
