#include<iostream>
using namespace std;

long long fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;

	return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout << testAnswer;
}