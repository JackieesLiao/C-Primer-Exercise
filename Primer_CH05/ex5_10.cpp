#include<iostream>
#include<vector>
int main()
{
	char ch;
	unsigned int aCnt=0, iCnt=0, oCnt=0, eCnt=0, uCnt=0;
	unsigned int other_count = 0;
	std::cout << "����һ���ı�ͳ��Ԫ����ĸ��[��Сд����]";
	while (std::cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt; break;
		case 'i':
		case 'I':
			++iCnt; break;
		case 'o':
		case 'O':
			++oCnt; break;
		case 'e':
		case 'E':
			++eCnt; break;
		case 'u':
		case 'U':
			++uCnt; break;
		default:
			other_count++;
		}
	}
	std::cout << "a|AԪ����ĸ���У�" << aCnt << std::endl;
	std::cout << "i|IԪ����ĸ���У�" << iCnt << std::endl;
	std::cout << "e|EԪ����ĸ���У�" << eCnt << std::endl;
	std::cout << "o|OԪ����ĸ���У�" << oCnt << std::endl;
	std::cout << "u|UԪ����ĸ���У�" << uCnt << std::endl;
	std::cout << "��Ԫ����ĸ���У�" << other_count << std::endl;
}