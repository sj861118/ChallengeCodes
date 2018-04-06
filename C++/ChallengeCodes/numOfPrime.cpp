/*
�Ҽ� ã��
numberOfPrime �޼ҵ�� ���� n�� �Ű������� �Է¹޽��ϴ�.
1���� �Է¹��� ���� n ���̿� �ִ� �Ҽ��� ������ ��ȯ�ϵ��� numberOfPrime �޼ҵ带 ����� ������.
�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���� �ǹ��մϴ�. (1�� �Ҽ��� �ƴմϴ�.)
10�� �Է¹޾Ҵٸ�, 1���� 10 ������ �Ҽ��� [2,3,5,7] 4���� �����ϹǷ� 4�� ��ȯ
5�� �Է¹޾Ҵٸ�, 1���� 5 ������ �Ҽ��� [2,3,5] 3���� �����ϹǷ� 3�� ��ȯ
*/
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
