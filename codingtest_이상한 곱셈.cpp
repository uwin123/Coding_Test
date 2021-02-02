#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;

long long q = 0, w = 0, i;
int main()
{
	//1*4 + 1*5 + 2*4 + 2*5 + 3*4 + 3*4
	//1(4 + 5) + 2(4 + 5) + 3(4 + 5)
	//(1 + 2 + 3)(4 + 5)
	//(왼쪽 숫자합) * (오른쪽 숫자합)
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size; i++)
	{
		q += a[i] - '0';
	}
	for (int i = 0; i < b.size; i++)
	{
		w += b[i] - '0';
	}
	cout << q * w << endl;

	return 0;
}

//int a, b, c, d, e, n1, n2;
//int sum2;
//cin >> a >> b;
//
////(b % 10)은 1의 자리 구하기.
//c = (a % 10);
//
//cout << c << endl;
//
////((b % 100) - (b % 10))은 10의 자리 구하기.
//d = ((a % 100) - (a % 10)) / 10;
//cout << d << endl;
//
////(b / 100)은 100의 자리 구하기.
//e = (a / 100);
//cout << e << endl;
//
//// c, d, e 는 각각 b의 1의 자리 숫자, 10의 자리 숫자, 100의 자리숫자.
////==============================
//// 이제 입력한 a의 1의 자리 숫자, 10의 자리 숫자를 구한다.
//n1 = (b % 10);
//cout << n1 << endl;
//n2 = ((b % 100) - (b % 10)) / 10;
//cout << n2 << endl;
//
//sum2 = ((n1 * c) + (n1 * d) + (n1 * e)) + ((n2 * c) + (n2 * d) + (n2 * e));
//cout << sum2 << endl;