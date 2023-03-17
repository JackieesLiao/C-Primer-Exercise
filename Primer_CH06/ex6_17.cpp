 include<iostream>
 #include<cctype>
 #include<string>
 bool judgeUpperWord(const std::string&str)
 {
     for(auto ch:str)
     {
         if(isupper(ch))
             return true;
     }
     return false;
 }

 void  changeStringToLower(std::string &str)
 {
     for(auto &ch:str)
        ch = tolower(ch);
 }
 int main()
 {
   std::string str1="LINUX are a incredible OS.";
   bool rex=judgeUpperWord(str1);
   std::cout<<" If rex=1 means there are right:"<<rex<<std::endl;
   std::string str2="HUNAN PROVINCE ,i love u";
   changeStringToLower(str2);
   std::cout<<"After changed."<<str2<<std::endl;
   return 0;
 }

