#include<iostream>
 int compare(const int num,const int* const num1)
 {
    return  (num>*num1) ?  num:  *num1;
 }
 int main()
 {
     int a=66,b=87;
     int result;
     result=compare(a,&b);
     std::cout<<"Which one more bigger?"<<result<<std::endl;
 
 }
