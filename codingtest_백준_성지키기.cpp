#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <Vector>
#include <algorithm>
using namespace std;
int main()
{
	//x는 성의 세로크기 
		//y는 성의 가로크기 
	int x, y;
	int row = 0;
	int col = 0;
	char mat[101][101]; //땅과 경비의 정보
	cin >> x >> y;

	for (int i = 0; i < x; i++)
	{
		for (int t = 0; t < y; t++)
		{
			cin >> mat[i][t];
		}
	}

	for (int i = 0; i < x; i++)
	{
		bool check = true;
		for (int t = 0; t < y; t++)
		{
			if ((mat[i][t]) == 'X')
			{
				check = false;
				break;
			}
		}
		if (check)
			row++;
	}

	for (int i = 0; i < y; i++)
	{
		bool check = true;
		for (int t = 0; t < x; t++)
		{
			if ((mat[i][t] == 'X'))
			{
				check = false;
				break;
			}
		}
		if (check)
			col++;
	}

	if (row > col)
	{
		cout << row;
	}
	else
	{
		cout << col;
	}
}