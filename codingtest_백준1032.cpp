#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string> v;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	for (int t = 0; t < v[0].length(); t++)
	{
		for (int k = 0; k < v.size(); k++)
		{
			if (v[0][t] != v[k][t])
			{
				v[0][t] = '?';
				break;
			}
		}
	}
	cout << v[0] << endl;
	return 0;
}