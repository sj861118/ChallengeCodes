/*
�߱� ����
ȸ����� �����̴� ���� ���� �׿� �ֽ��ϴ�. �����̴� �߱��� �ּ�ȭ�ϱ� ���� ���� ���� �۾����� ���ڷ� �ޱ��, �Ͽ� ���� �߱� ������ ���̱�� �����߽��ϴ�. 
�߱� ������ ���� ���� �۾����� �����Ͽ� ���� ���� �ǹ��մϴ�. �����̴� 1�ð� ���� ���� �� �� �ϳ��� ��� �۾��� 1��ŭ ó���� �� �ֽ��ϴ�. 
�������� ��ٱ��� ���� N �ð��� �� �Ͽ� ���� �۾����� ���� ��, noOvertime �Լ��� �����Ͽ� �������� �߱� ������ �ּ�ȭ �� ����� ����� �ּ���. 
���� ���, N=4 �� ��, ���� ���� �۾����� [4, 3, 3] �̶�� �߱� ������ �ּ�ȭ�ϱ� ���� ���� �� ����� [2, 2, 2]�� �ǰ� �߱� ������ 22 + 22 + 22 = 12�� �Ǿ� 12�� ��ȯ�� �ݴϴ�.
*/
/*
���
�ּ� �ڽ��� ����.
�ڽ����� �� ���� ������ ���� ���� �ּڰ��� ���´�.
*/

#include<iostream>
#include<vector>
#include <functional>
#include<algorithm>

using namespace std;


int noOvertime(int no, vector<int> works)
{
	int answer = 0;
	
	int size = works.size();
	sort(works.begin(), works.end(), greater<int>());
	
	for (int i = 0, j = 0; i < no; i++)
	{
		if (j + 1 > size-1)
			j = 0;

		if (works[j] < works[j + 1])
		{
			j++;
		}
		works[j] --;
	}
	for (int i = 0; i < size; i++)
		answer += (works[i] * works[i]);

	return answer;
}

int main()
{
	vector<int> works{ 4,3,3 };
	int testNo = 4;

	int testAnswer = noOvertime(testNo, works);

	cout << testAnswer;
}