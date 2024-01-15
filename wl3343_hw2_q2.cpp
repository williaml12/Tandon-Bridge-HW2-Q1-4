// wl3343_hw2_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int dollars, cents;
	int quarters, dimes, nickels, pennies;
	int total_cents, remaining_cents;

	cout << "Please enter your amount in the format	of dollars and cents separated by a space: " << endl;
	cin >> dollars >> cents;

	cout << dollars << " dollars and " << cents << " cents are: " << endl;

	total_cents = (dollars*100) + cents;
	// cout << "Total cents: " << total_cents << " cents." << endl;

	quarters = total_cents / 25;
	remaining_cents = total_cents % 25;
	dimes = remaining_cents / 10;
	remaining_cents %= 10;
	nickels = remaining_cents / 5;
	pennies = remaining_cents % 5;

	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies." << endl;
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
