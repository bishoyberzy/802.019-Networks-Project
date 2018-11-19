#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

bool remindercheck(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			return false;
	}
	return true;
}

int main()
{
	string s = "111";
	string s2 = "000";
	cout << remindercheck(s) << endl;
	cout << remindercheck(s2) << endl;
	system("pause");
}
