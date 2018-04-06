/*
최대공약수와 최소공배수
두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환해주는 gcdlcm 함수를 완성해 보세요.배열의 맨 앞에 최대공약수, 
그 다음 최소공배수를 넣어 반환하면 됩니다.
예를 들어 gcdlcm(3, 12) 가 입력되면, [3, 12]를 반환해주면 됩니다.
*/
#include<vector>
#include<iostream>
using namespace std;

vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;

	int c = a > b ? a : b;
	int d = a > b ? b : a;

	int t = 1;
	while (t > 0)
	{
		t = c % d;
		c = d;
		d = t;
	}

	answer.resize(2);
	answer[0] = c;
	answer[1] = int(a*b / c);

	return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}