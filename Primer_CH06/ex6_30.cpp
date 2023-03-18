#include<iostream>    
#include<string>    
bool str_subrange(const std::string &str1,const std::string &str2)    
{    
     if(str1.size()==str2.size())    
         return str1==str2;//return bool type    
     auto size=(str1.size()<str2.size())?str1.size():str2.size();    
     for(decltype(size) i=0;i!=size;i++)    
         if(str1[i]!=str2[i])    
             return ;//error    
}   
int main()    
{   
    std::string str1="lioajunjian";    
    std::string str2="love she.";     
    bool result=str_subrange(str1,str2);    
    std::cout<<result<<std::endl;    
}  
/*
总共有两个错误，一个无返回值，另一个是控制流尚未返回任何值就结束函数的执行。后者编译器检查不出。
ex6_30.cpp: In function ‘bool str_subrange(const string&, const string&)’:
ex6_30.cpp:10:13: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
   10 |             return ;//error
      |      
*/
