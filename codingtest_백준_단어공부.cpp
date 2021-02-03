#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;
int main()
{
	int a[26] = { 0 , };


	string s;
	cin >> s;

	transform(s.cbegin(), s.cend(), s.begin(), tolower);
	for (int i = 0; i < s.length(); i++)
	{
		a[(int)s[i] - 'a']++;
	}
	int max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (a[max] < a[i]) {
			max = i;
		}
	}
	for (int k = 0; k < 26; k++)
	{
		if (max != k)
		{
			if (a[max] == a[k])
			{
				cout << '?';
				return 0;
			}
		}

	}
	cout << (char)(max + 'A');
}