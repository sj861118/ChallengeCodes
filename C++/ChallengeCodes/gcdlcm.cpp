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