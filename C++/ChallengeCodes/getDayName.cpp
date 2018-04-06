/*
2016년
2016년 1월 1일은 금요일입니다. 2016년 A월 B일은 무슨 요일일까요? 두 수 A,B를 입력받아 A월 B일이 무슨 요일인지 출력하는 getDayName 함수를 완성하세요. 
요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT 를 출력해주면 됩니다. 
예를 들어 A=5, B=24가 입력된다면 5월 24일은 화요일이므로 TUE를 반환하면 됩니다.
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

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getDayName(a, b);
}

