#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int grade;
	cout << "���������"<<endl;
	cin >> grade;
	if (grade==100)
	{
		cout << "�ȼ��ɼ�Ϊ��A++" << endl;
	}
	if(grade<0||grade>100)
	{
		cout << "�ɼ���Ч��" << endl;
		return false;
	}
	if (grade < 60)
	{
		cout << "�ȼ��ɼ�Ϊ��F" << endl;
	}
	int iu = grade / 10;//ʮλ��
	int it = grade % 10;//��λ��
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