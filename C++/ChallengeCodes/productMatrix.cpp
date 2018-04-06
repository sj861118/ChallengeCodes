/*
����� ����
����� ������, ���Ϸ��� �� ����� � ��� ���� ��������, ������ ����� �ش�Ǵ� ��, 
������ ����� �ش�Ǵ� ���� ������� ���� ���� ���� ���� ���ϴ�. 
����� ���ϱ� ���ؼ� ���� ����� ���� ������ ���� ����� ���� ������ ���ƾ� �մϴ�. 
���� �� �ִ� �� ��� A,B�� �־��� ��, ����� ���� ���� ����ϴ� productMatrix �Լ��� �ϼ��� ������.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >productMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> >answer;

	int row = A.size();
	int col = B[0].size();
	int n = A[0].size();

	answer.assign(row, vector<int>(col, 0));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < n; k++)
			{
				answer[i][j] += (A[i][k] * B[k][j]);
			}
		}
	}
	return answer;
}

int main()
{
	vector<vector<int> >A{ { 1,2 },{ 2,3 } };
	vector<vector<int> >B{ { 2,3 },{ 3,4 } };
	vector<vector<int> > testAnswer = productMatrix(A, B);

	for (int i = 0; i<testAnswer.size(); i++)
	{
		for (int j = 0; j<testAnswer[i].size(); j++)
			cout << testAnswer[i][j] << " ";
		cout << "\n";
	}
}