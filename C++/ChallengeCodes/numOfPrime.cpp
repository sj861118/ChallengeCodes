#include<iostream>
#include<vector>

using namespace std;

int numOfPrime(int n)
{
	vector<bool> arr(n - 1, true);

	int answer = 1;

	for (int i = 3; i <= n; i++)
	{
		for (int j = 2; j < i; j++)
		{
			 int mod = i % j;
			 if (mod == 0)
				 break;
			 else if (j == i - 1)
				 answer++;
		}
	}
	return answer;
}

int main()
{
	int testCase = 5;
	int testAnswer = numOfPrime(testCase);

	cout << testAnswer;
}
