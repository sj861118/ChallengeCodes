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

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getDayName(a, b);
}

