// wl3343_hw2_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int daysJohn, hoursJohn, minutesJohn;
	int daysBill, hoursBill, minutesBill;
	int totalDays, totalHours, totalMinutes;

	cout << "Please enter the number of days John has worked: ";
	cin >> daysJohn;
	cout << "Please	enter the number of hours John has worked: ";
	cin >> hoursJohn;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> minutesJohn;


	cout << "\n\n" << "Please	enter the number of days Bill has worked: ";
	cin >> daysBill;
	cout << "Please	enter the number of hours Bill has worked: ";
	cin >> hoursBill;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> minutesBill;

	// 1 day = 24 hrs
	totalHours = ((daysJohn + daysBill) * 24) + hoursJohn + hoursBill;
	// 1 hr = 60 minutes
	totalMinutes = (totalHours * 60) + minutesJohn + minutesBill;
	// 1 day = 1440 minutes
	totalDays = totalMinutes / 1440;
	// total minutes mod minuate is still in minute
	totalHours = (totalMinutes % 1440) / 60;
	// totalHours = totalDays / 24;	
	totalMinutes = totalMinutes % 60;
	
	cout << "\n\n" << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours and " << totalMinutes << " minutes." << endl;

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
