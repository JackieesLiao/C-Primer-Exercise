#include<iostream>
#include<vector>
int main()
{
	char ch;
	unsigned int aCnt=0, iCnt=0, oCnt=0, eCnt=0, uCnt=0;
	unsigned int other_count = 0;
	std::cout << "输入一段文本统计元音字母：[大小写均可]";
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
	std::cout << "a|A元音字母共有：" << aCnt << std::endl;
	std::cout << "i|I元音字母共有：" << iCnt << std::endl;
	std::cout << "e|E元音字母共有：" << eCnt << std::endl;
	std::cout << "o|O元音字母共有：" << oCnt << std::endl;
	std::cout << "u|U元音字母共有：" << uCnt << std::endl;
	std::cout << "非元音字母共有：" << other_count << std::endl;
}