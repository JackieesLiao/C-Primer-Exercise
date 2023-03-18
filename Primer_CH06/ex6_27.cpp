#include<iostream>
 #include<initializer_list>
 int sum_list(std::initializer_list<int> &lst)
 {
     int sum=0;
     for(auto lst1:lst)
         sum+=lst1;
     return sum;
 }
 int main()
 {
     auto list={2,4,5,6,9,34,6};
     std::cout<< sum_list(list)<<std::endl;
 }
