// Reverse an Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int n, reversed = 0, rem;
	cout << "Enter an integer: ";
	cin >> n;

	while (n != 0)
	{
		rem = n % 10;
		reversed = reversed * 10 + rem;
		n /= 10;
	}
	cout << "Reversed Number = " << reversed << endl;

    return 0;
}

