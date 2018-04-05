#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	int size = A.size();
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i = 0; i < size; i++)
		answer += (A[i] * B[size - i - 1]);
	
	return answer;
}
int main()
{
	vector<int> tA{ 204, 8254, 5684, 9902, 8815, 3689, 764, 1910, 2447, 8579 }, tB{ 8791, 3903, 9928, 1469, 3807, 9333, 72, 7178, 6715, 1219 };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getMinSum(tA, tB);
}