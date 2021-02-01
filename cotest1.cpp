#include<iostream>
using namespace std;

int main()
{
	//int hour, minute;
	//cin >> hour >> minute;
	//if (minute < 45)
	//{
	//	minute += 15;
	//	hour--;
	//}
	//else
	//{
	//	minute -= 45;
	//}
	//if (hour < 0)
	//	hour = 23;
	//cout << hour << " : " << minute << endl;
	//return 0;

	//int hour, minute;
	//cin >> hour >> minute;
	//if (minute < 45)
	//{
	//	minute += 15;
	//	if (--hour < 0)
	//		hour = 23;
	//}
	//else
	//{
	//	minute -= 45;
	//}
	//cout << hour << " : " << minute << endl;
	//return 0;

	int hour;
	int minute;

	cin >> hour >> minute;

	minute -= 45;
	if (minute < 0) {
		minute += 60;
		hour--;
	}
	if (hour < 0) {
		hour = 23;
	}
	cout << hour << " " << minute;

	return 0;
}