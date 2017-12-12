// Assign06-LoopCalculations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int input;
	int counter = 0;
	int sum = 0;
	double average = 0;
	int maximum = -1;
	int minimum = -1;
	int evenCount = 0;
	int oddCount = 0;

	cout << endl << "Enter an integer <negative value to Quit>:  ";
	cin >> input;
	maximum = input;
	minimum = input;

	while (input >= 0)
	{
		sum += input;
		counter++;
		average = (sum / static_cast<double>(counter));
		if (input > maximum)
		{
			maximum = input;
		}
		if (input < minimum)
		{
			minimum = input;
		}
		if (input % 2 == 0)
		{
			evenCount++;
		}
		else
		{
			oddCount++;
		}
				cout << endl << "Enter an integer <negative value to Quit>:  ";
		cin >> input;
	}

	cout << endl;
	cout << "Values Entered:  " << setw(8) << counter << endl;
	cout << "Sum of numbers:  " << setw(8) << sum << endl;
	cout << " Average value:  " << setw(8) << average << endl;
	cout << " Maximum value:  " << setw(8) << maximum << endl;
	cout << " Minimum value:  " << setw(8) << minimum << endl;
	cout << "  Even numbers:  " << setw(8) << evenCount << endl;
	cout << "   Odd numbers:  " << setw(8) << oddCount << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

