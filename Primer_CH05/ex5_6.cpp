#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int grade;
	cout << "���������" << endl;
	cin >> grade;
	if (grade == 100)
	{
		cout << "�ȼ��ɼ�Ϊ��A++" << endl;
	}
	if (grade < 0 || grade>100)
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
	std::string score, level, letterscore;
	//90~99=A��80~89=B��70~79=C��60~69=D,<60=F
	score = (iu == 9) ? "A" : (iu == 8) ? "B" : (iu == 7) ? "C" : "D";
	//��λ��Ϊ0,1,2����81ΪB-,����λ��Ϊ8��9����89����ΪB+ �������Ϊ�ȼ�
	level = (it < 3) ? "-" : (it > 7) ? "+" : " ";
	letterscore = score + level;
	cout << letterscore << endl;

}