#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > sumMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> > answer;

	int row = A.size();
	int col = A[0].size();

	answer.assign(row, vector<int>(col, 0));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			answer[i][j] = A[i][j] + B[i][j];
		}
	}

	return answer;
}
int main()
{
	vector<vector<int> > a{ { 1,2 },{ 2,3 } }, b{ { 3,4 },{ 5,6 } };
	vector<vector<int> > answer = sumMatrix(a, b);

	for (int i = 0; i<answer.size(); i++)
	{
		for (int j = 0; j<answer[0].size(); j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << "\n";
	}
}
