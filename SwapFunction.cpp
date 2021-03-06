#include "pch.h"
#include <iostream>
#include <string>

void swap(int *a, int *b, int sz)
{
	for (int i = 0; i < sz; i += 2)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		a += 2;
		b += 2;
	}
}

int main()
{
	int Table[10] = { 2,4,6,8,10,12,14,16,18,20 };
	int Chair[10] = { 5,7,9,11,13,15,17,19,21,23 };

	int aSz = sizeof(Table) / sizeof(Table[0]);
	int bSz = sizeof(Chair) / sizeof(Chair[0]);

	swap(Table, Chair, aSz);

	for (int i = 0; i < aSz; i++)
	{
		std::cout << Table[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < bSz; i++)
	{
		std::cout << Chair[i] << " ";
	}

	std::cout << std::endl;


	return 0;
}
