#include<iostream>
using namespace std;
int main()
{
	char ch;
	int o_count=0;
	cout << "输入一段文本：[按ctrl+Z+enter以结束]";
	while(cin >> ch)
	{
          if (ch == 'a')
            ++o_count;
	  if (ch == 'e')
	    ++o_count;
          if (ch == 'u')
	    ++o_count;
	  if (ch == 'i')
	    ++o_count;
	  if (ch == 'o')
	    ++o_count;
	}
	cout << "共有" << o_count << "个元音字母。" << endl;
}
