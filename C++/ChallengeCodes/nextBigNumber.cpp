/*
���� ū ����
� �� N(1��N��1,000,000) �� �־����� ��, N�� ���� ū ���ڴ� ������ �����ϴ�.
N�� ���� ū ���ڴ� N�� 2������ �ٲپ��� ���� 1�� ������ ���� ������ �̷���� ���Դϴ�.
1��° ������ �����ϴ� ���ڵ� �� N���� ū �� �߿��� ���� ���� ���ڸ� ã�ƾ� �մϴ�.
���� ���, 78�� 2������ �ٲٸ� 1001110 �̸�, 78�� ���� ū ���ڴ� 83���� 2������ 1010011 �Դϴ�.
N�� �־��� ��, N�� ���� ū ���ڸ� ã�� nextBigNumber �Լ��� �ϼ��ϼ���.
*/
#include<iostream>
using namespace std;

int nextBigNumber(int n)
{
	int answer = 0;
	int c = 0;
	for (int i = n; i < 1000000; i++)
	{
		int j = i;
		int d = 0;

		while (j)
		{
			j = j & (j - 1);
			d++;
		}

		if (i == n)
			c = d;
		else
		{
			if (c == d)
			{
				return i;
			}
		}
	}
	return answer;
}
int main()
{
	int n = 78;

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << nextBigNumber(n);
}
