#include<iostream>
using namespace std;

int collatz(int num)
{
	int answer = -1;
	
	const int MAX = 500;

	for (int i = 0; i <= MAX; i++)
	{
		num = num % 2 ? num * 3 + 1 : num / 2;
		if (num == 1)
			return i + 1;
	}

	return answer;
}

int main()
{
	int testCase = 483;
	int testAnswer = collatz(testCase);

	cout << testAnswer;
}