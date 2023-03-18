#include<iostream>
 void print(const int *ptr)
 {
     if(ptr)
         std::cout<<*ptr<<std::endl;
 }
 void print(const char *cp)
 {
     if(cp)
         while(*cp)
             std::cout<<*cp++<<std::endl;
 }
 void print(const int *beg,const int * end)
 {
     while(beg!=end)//输出beg到end（不含end）的所有元素
     {
         std::cout<<*beg++<<std::endl;//输出当前元素并将当前指针向前移动一个元素
     }
 }
void print(const int ia[],size_t size)
 {
     for(size_t i=0;i!=size;i++)
         std::cout<<ia[i]<<std::endl;
 }
 void print(int (&arr)[10])//arr是具有10个整数的整型数组的引用
 {
     for(auto elem:arr)//遍历输出数组
         std::cout<<elem<<std::endl;
 }
 int main()
 {
     int i=0,j[2]={0,1};
     char ch[13]="JunjianLiao";
     print(&i);
     print(ch);
     print(std::begin(j),std::end(j));
     print(j,std::end(j)-std::begin(j));
     print(j);
 }
