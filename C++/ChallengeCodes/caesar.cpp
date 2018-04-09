#include<iostream>
#include<string>

using namespace std;

string caesar(string s, int n)
{
	string answer = "";
	int size = s.size();
	answer.resize(size);
	for (int i = 0; i < size; i++)
	{
		if (isupper(s[i]))
			answer[i] = (((s[i] - 'A') + n) % 26) + 'A';
		else if (islower(s[i]))
			answer[i] = (((s[i] - 'a') + n) % 26) + 'a';
		else
			answer[i] = s[i];

	}
	return answer;
}

int main()
{
	string text = "a B z";
	int testNo = 4;

	string testAnswer = caesar(text, testNo);

	cout << testAnswer;
}