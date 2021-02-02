#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;
string solution(string s, int n) {
	string answer = "";
	char start = ' ';
	for (char c : s) {
		if ('A' <= c && c <= 'Z')
			start = 'A';
		else if ('a' <= c && c <= 'z')
			start = 'a';
		if (c != ' ')
			c = (c + n - start) % 26 + start;
		answer.push_back(c);
	}
	return answer;
}