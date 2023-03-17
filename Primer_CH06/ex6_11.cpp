#include<iostream>
 void reset(int& var)
 {
     var=0;
 }
 int main()
 {
     int i=9;
     std::cout<<"i="<<i<<std::endl;
     reset(i);
     std::cout<<"call the funtion to reset the variable i.And i="<<i<<std::endl;
 }
