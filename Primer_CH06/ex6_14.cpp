//此处函数形参不能为引用，因为v.begin()返回的是一个临时变量，是一个右值，它不能赋值给一个非const的引用： 
#include<iostream>
#include<vector>
#include<iterator>
void print(std::vector<int>::iterator begin,std::vector<int>::iterator end)
{
     for(std::vector<int>::iterator iter=begin;iter!=end;++iter)
     {
         std::cout<<*iter<<std::endl;
     }
}
int main()
{
     std::vector<int> vec={1,2,3,56,6};
     print(vec.begin(),vec.end());
}

