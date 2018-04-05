#include<iostream>
#include <vector>

using namespace std;

int sumDivisor(int n)
{
	int sum = 1 + n;

	for (int i = 2; i < n + 1; i++)
	{
		if (n % i)
			continue;

		int a = i;
		int b = n / i;

		if (a > b)
			break;

		if (a == b)
			sum += a;
		else
			sum += (a + b);

	}

	return sum;
}

int main()
{
	int testCase = 50247;
	int testAnswer = sumDivisor(testCase);

	cout << testAnswer;
}