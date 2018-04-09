/*
약수의 합
어떤 수를 입력받아 그 수의 약수를 모두 더한 수 sumDivisor 함수를 완성해 보세요.
예를 들어 12가 입력된다면 12의 약수는[1, 2, 3, 4, 6, 12]가 되고, 총 합은 28이 되므로 28을 반환해 주면 됩니다.
*/
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