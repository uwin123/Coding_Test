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
	int count = 1;
	cin >> n;
	int sum = n;
	while (true)
	{
		int n1 = sum % 10;
		int n2 = sum / 10;
		sum = n1 + n2;
		int result = (n1 * 10) + (sum % 10);
		if (result == n)
			break;
		else
		{
			sum = result;
			count++;
		}
	}
	cout << count;
	return 0;
}