/*
2016��
2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� A�� B���� ���� �����ϱ��? �� �� A,B�� �Է¹޾� A�� B���� ���� �������� ����ϴ� getDayName �Լ��� �ϼ��ϼ���. 
������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN,MON,TUE,WED,THU,FRI,SAT �� ������ָ� �˴ϴ�. 
���� ��� A=5, B=24�� �Էµȴٸ� 5�� 24���� ȭ�����̹Ƿ� TUE�� ��ȯ�ϸ� �˴ϴ�.
*/
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

string getDayName(int a, int b)
{
	string answer[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int year = 2016;

	struct tm when;
	time_t now;
	
	time(&now);
	_localtime64_s(&when, &now);
	when.tm_year = year-1900;
	when.tm_mon = a-1;
	when.tm_mday = b;

	mktime(&when);

	return answer[when.tm_wday];
}
int main()
{
	int a = 5, b = 24;

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << getDayName(a, b);
}

