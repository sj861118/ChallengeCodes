/*
N���� �ּҰ����
�� ���� �ּҰ����(Least Common Multiple)�� �Էµ� �� ���� ��� �� ������ �Ǵ� ���� ���� ���ڸ� �ǹ��մϴ�. 
���� ��� 2�� 7�� �ּҰ������ 14�� �˴ϴ�. ���Ǹ� Ȯ���ؼ�, n���� ���� �ּҰ������ n ���� ������ ��� �� ������ �Ǵ� ���� ���� ���ڰ� �˴ϴ�.
nlcm �Լ��� ���� n���� ���ڰ� �ԷµǾ��� ��, �ּҰ������ ��ȯ�� �ּ���. 
������� [2,6,8,14] �� �Էµȴٸ� 168�� ��ȯ�� �ָ� �˴ϴ�.
*/
#include<iostream>
#include<vector>
using namespace std;

long long lcm(long long a, long long b)
{
	long long c = a > b ? a : b;
	long long d = a > b ? b : a;

	int t = 1;
	while (t > 0)
	{
		t = c % d;
		c = d;
		d = t;
	}

	return a*b / c;
}

long long nlcm(vector<int> num)
{
	long long answer = num[0];
	int size = num.size();
	
	for (int i = 1; i < size; i++)
	{
		answer = lcm(answer, (long long)num[i]);
	}
	
	return answer;
}

int main()
{
	vector<int> test{ 2,6,8,14 };

	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << nlcm(test);
}
