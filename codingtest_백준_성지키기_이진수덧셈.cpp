#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;

//10 -> 2���� 
void Convert2Bin(int result)
{
	if (result <= 0)
		return;

	Convert2Bin(result / 2);

	cout << result % 2;
}

int main()
{
	string s, t;
	cin >> s >> t;
	string sum = s + t;
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	int e = 1;
	int zari = 0;

	//string s�� 10�������� ��.
	for (int i = s.length() - 1; i >= 0; i--)
	{
		for (int k = 0; k < s.length() - i - 1; k++)
		{
			e *= 2;
		}
		if (s[i] == '1')
		{
			result1 += e;
		}
		e = 1;
	}

	//string t�� 10�������� ��.
	for (int i = t.length() - 1; i >= 0; i--)
	{
		for (int k = 0; k < t.length() - i - 1; k++)
		{
			e *= 2;
		}
		if (t[i] == '1')
		{
			result2 += e;
		}
		e = 1;
	}

	result3 = result1 + result2;

	//result �� string s �� t�� 10������, result�� �ٽ� 2�������� 
	Convert2Bin(result3);
	return 0;
}