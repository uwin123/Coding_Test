#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int a, b;
	cin >> a >> b;
	cout << a - b;
	return 0;
}