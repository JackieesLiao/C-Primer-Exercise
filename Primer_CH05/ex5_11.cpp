#include<iostream>
#include<cctype>
using namespace std;
int main()
{  
	//ͳ������
	int vowelCount = 0;
	int spaceCount = 0;
	int tabCount = 0;
	int newlineCount = 0;
	int otherCount = 0;//������ĸ
	char str;
	cout << "������һ�ΰ��������ַ����ı���"<<endl;
	/*cin.get(c)����
	���ڶ�ȡ����Ч�ַ�ʱ���ط���ֵ��
	���������������������������ļ�ĩβ���������رգ�ʱ�����㡣
	*/
	while (cin.get(str))
	{
		if (isspace(str))//strΪ�հ�ʱΪ��
		{
			if (str == ' ')//�ո�
				spaceCount++;
		else if (str == '\t')
		    tabCount++;
		else if (str == '\n')
			newlineCount++;
		}
		else {
			if (tolower(str))//��Ϊ��д��ĸתΪСд�����򲻱�
			{
				switch (str)
				{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					++vowelCount;
					break;
				default:
					++otherCount;
					break;
				}
			}
		}
		
	}
	cout << "Ԫ����ĸ�У�" << vowelCount << endl;
	cout << "��Ԫ����ĸ�У�" << otherCount << endl;
	cout << "�ո��У�" << spaceCount << endl;
	cout << "�Ʊ���У�" << tabCount << endl;
	cout << "���з��У�" << newlineCount << endl;
}