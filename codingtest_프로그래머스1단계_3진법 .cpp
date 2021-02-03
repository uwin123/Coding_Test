#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;
string solution(int n) {
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			answer += "¼ö";
		else if (i % 2 != 0)
			answer += "¹Ú";
	}
	return answer;
}