#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int grade;
	cout << "输入分数："<<endl;
	cin >> grade;
	if (grade==100)
	{
		cout << "等级成绩为：A++" << endl;
	}
	if(grade<0||grade>100)
	{
		cout << "成绩无效！" << endl;
		return false;
	}
	if (grade < 60)
	{
		cout << "等级成绩为：F" << endl;
	}
	int iu = grade / 10;//十位数
	int it = grade % 10;//个位数
	std::string score,level, letterscore;
	if (iu == 9)//90<Score<100
		score = "A";
	else if (iu == 8)
		score = "B";
	else if (iu == 7)
		score = "C";
	else
		score = "D";
	if (it < 3)
		level = "-";
	else if (it > 7)
		level = "+";
	else
		level = " ";

	letterscore=score+level;
	cout << letterscore << endl;

}