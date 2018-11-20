#include <stdio.h>
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

char Xor(char a, char b)
{
	char c;
	if (a == b)
		return c = '0';
	else if (a == '1' && b == '0')
		return c = '1';
	else if (a == '0' && b == '1')
		return c = '1';

}

string binarydiv(string gx, string mx)
{
	string rim;
	string newrim;
	int generatordegree;
	generatordegree = gx.length();
	int l;			//iterator for mx
	string zeros;		//divisor in case bit equalls 0
	string zerosadded;      //zeros added equal to degree
	
	//parsing first rim from mx
	for (l = 0; l < generatordegree; l++)
		rim += mx[l];

	//zeros for xor
	for (int i = 0; i < generatordegree; i++)
		zeros += "0";
	// adding zeros equall to generator degree gx to message mx
	for (int i = 0; i < generatordegree-1; i++)
		zerosadded += "0";
	mx += zerosadded; //  message plus generator degree


	while (l <= mx.length())		// stop when l reach end of msg
	{
		int j = 0;

		if (rim[j] == '1')
		{
			j++;
			for (int i = 1; i < gx.length(); i++)
			{
				newrim += Xor(rim[j], gx[i]);
				j++;

			}
			if (l <= mx.length())
			{
				newrim += mx[l];
				l++;
			}
			rim = newrim;
			newrim = "";
		}
		else if (rim[j] == '0')
		{
			j++;
			for (int i = 1; i < gx.length(); i++)
			{
				newrim += Xor(rim[j], zeros[i]);
				j++;

			}
			if (l <= mx.length())
			{
				newrim += mx[l];
				l++;
			}
			rim = newrim;
			newrim = "";
		}
	}
	return rim;
}

