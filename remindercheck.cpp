#include <stdio.h>
#include <iostream>
#include <string>
#include "Header.h"
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

