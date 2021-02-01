#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int n;
	cin >> n;
	int num[26] = { 0, };
	for (int z = 0; z < n; z++)
	{
		string s;
		cin >> s;
		num[s[0] - 97]++;
	}
	bool isOverFive = false;
	for (int i = 0; i < 26; i++)
	{
		if (num[i] >= 5)
		{
			cout << char(i + 97) << endl;
			isOverFive = true;
		}
	}
	if (!isOverFive)
		cout << "PREDAJA" << endl;
	return 0;
}