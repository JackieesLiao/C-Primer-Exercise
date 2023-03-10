#include<iostream>
#include<cctype>
using namespace std;
int main()
{  
	//统计数量
	int vowelCount = 0;
	int spaceCount = 0;
	int tabCount = 0;
	int newlineCount = 0;
	int otherCount = 0;//其他字母
	char str;
	cout << "请输入一段包含各种字符的文本："<<endl;
	/*cin.get(c)函数
	会在读取到有效字符时返回非零值，
	而在遇到输入流结束符（例如文件末尾或输入流关闭）时返回零。
	*/
	while (cin.get(str))
	{
		if (isspace(str))//str为空白时为真
		{
			if (str == ' ')//空格
				spaceCount++;
		else if (str == '\t')
		    tabCount++;
		else if (str == '\n')
			newlineCount++;
		}
		else {
			if (tolower(str))//若为大写字母转为小写，否则不变
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
	cout << "元音字母有：" << vowelCount << endl;
	cout << "非元音字母有：" << otherCount << endl;
	cout << "空格有：" << spaceCount << endl;
	cout << "制表符有：" << tabCount << endl;
	cout << "换行符有：" << newlineCount << endl;
}