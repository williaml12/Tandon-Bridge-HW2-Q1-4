// wl3343_hw2_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int sum, sub, multi, div2, mod;
	float div1;

	cout << "Please enter two positive integers, separated by a space: " << endl;
	cin >> num1 >> num2;
	
	sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;

	sub = num1 - num2;
	cout << num1 << " - " << num2 << " = " << sub << endl;

	multi = num1 * num2;
	cout << num1 << " * " << num2 << " = " << multi << endl;

	div1 = (float)(num1) / (float)(num2);
	cout << num1 << " / " << num2 << " = " << div1 << endl;

	div2 = num1 / num2;
	cout << num1 << " div " << num2 << " = " << div2 << endl;

	mod = num1 % num2;
	cout << num1 << " mod " << num2 << " = " << mod << endl;


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
