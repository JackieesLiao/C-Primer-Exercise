#include<iostream>
using namespace std;
int main()
{
	char ch;
	int o_count=0;
	cout << "����һ���ı���";
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
	cout << "����" << o_count << "��Ԫ����ĸ��" << endl;
	
}