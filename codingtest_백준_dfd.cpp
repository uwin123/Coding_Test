#pragma warning(disable  : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <Vector>
#include <algorithm>
using namespace std;

string boyFriend_name;
string girlFriend_name;
string ANS_name;
int girlFriend_num;
int boy_LOVE[4] = { 0, };
int girl_LOVE[4] = { 0, };
int check = 0;
int Max_check = -1; 

void CheckLOVE(string name, int *LOVE)
{
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'L')
			LOVE[0]++;
		else if (name[i] == 'O')
			LOVE[1]++;
		else if (name[i] == 'V')
			LOVE[2]++;
		else if (name[i] == 'E')
			LOVE[3]++;
	}
}

int main()
{
	cin >> boyFriend_name;
	CheckLOVE(boyFriend_name, boy_LOVE);
	cin >> girlFriend_num;
	while (girlFriend_num--)
	{
		//memset(girlFriend_name, 0, sizeof(girl_LOVE));
		girlFriend_name.clear();
		cin >> girlFriend_name;
		CheckLOVE(girlFriend_name, girl_LOVE);

		int L = boy_LOVE[0] + girl_LOVE[0];
		int O = boy_LOVE[1] + girl_LOVE[1];
		int V = boy_LOVE[2] + girl_LOVE[2];
		int E = boy_LOVE[3] + girl_LOVE[3];

		check = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
		if (Max_check < check)
		{
			Max_check = check;
			ANS_name = girlFriend_name;
		}
		else if (Max_check == check)
		{
			if (ANS_name > girlFriend_name)
				ANS_name = girlFriend_name;
		}
	}
	cout << ANS_name;
	return 0;
}