// wl3343_hw2_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int numQuarters, numDimes, numNickels, numPennies;
	float quarter, dime, nickel, penny;
	int dollars, remaining_cents;
	float cents;

	cout << "Please enter number of coins: " << endl;
	cout << "# of quarters: ";
	cin >> numQuarters;
	cout << "# of dimes: " ;
	cin >> numDimes;
	cout << "# of nickels: ";
	cin >> numNickels;
	cout << "# of pennies: ";
	cin >> numPennies;

	quarter = 0.25;
	dime = 0.10;
	nickel = 0.05;
	penny = 0.01;
	cents = quarter*numQuarters + dime*numDimes + nickel*numNickels + penny*numPennies;

	// cout << "The total amount is: " << cents << endl;
	dollars = (int)(cents);
	remaining_cents = ((int)(cents * 100) % 100);
	cout << "The total is " << dollars << " dollars and " << remaining_cents << " cents." << endl;

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
