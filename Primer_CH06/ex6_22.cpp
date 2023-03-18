#include<iostream>
void swap_pointers(int* &ptr1,int* &ptr2)
{
 
     auto temp=ptr1;
     ptr1=ptr2;
     ptr2=temp;
}
int main()
{
     int i=3,j=5;
     auto ltr=&i;
     auto rtr=&j;
     std::cout<<*ltr<<","<<*rtr<<std::endl;
     swap_pointers(ltr,rtr);
     std::cout<<*ltr<<","<<*rtr<<std::endl;
}
