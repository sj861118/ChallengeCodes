/*
�Ǻ���ġ ��
�Ǻ���ġ ���� F(0) = 0, F(1) = 1�� ��, 2 �̻��� n�� ���Ͽ� F(n) = F(n - 1) + F(n - 2) �� ����Ǵ� ��ȭ���Դϴ�. 
2 �̻��� n�� �ԷµǾ��� ��, fibonacci �Լ��� �����Ͽ� n��° �Ǻ���ġ ���� ��ȯ�� �ּ���.
���� ��� n = 3�̶�� 2�� ��ȯ���ָ� �˴ϴ�.
*/
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