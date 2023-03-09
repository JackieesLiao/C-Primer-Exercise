#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int grade;
	cout << "输入分数：" << endl;
	cin >> grade;
	if (grade == 100)
	{
		cout << "等级成绩为：A++" << endl;
	}
	if (grade < 0 || grade>100)
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
	std::string score, level, letterscore;
	//90~99=A，80~89=B，70~79=C，60~69=D,<60=F
	score = (iu == 9) ? "A" : (iu == 8) ? "B" : (iu == 7) ? "C" : "D";
	//个位数为0,1,2，如81为B-,若个位数为8，9，如89，则为B+ ，其余仅为等级
	level = (it < 3) ? "-" : (it > 7) ? "+" : " ";
	letterscore = score + level;
	cout << letterscore << endl;

}