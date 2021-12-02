// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Factorial
{
public:
	long double FactorialCalculator(int);
};

long double Factorial::FactorialCalculator(int n) {
	long double factorial = 1.0;
	if (n < 0)
		cout << "Error! Factorial of a negative number doesn't exist.";
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
	}
	return factorial;
}

int main()
{
	Factorial objFactorial;
	int number;

	cout << "\n\n Calculate the factorial of a number :\n";
	cout << "---------------------------------------\n";
	cout << " Input the number : ";
	cin >> number;
	
	cout << " The factorial of " << number << " is " << objFactorial.FactorialCalculator(number) << "." << endl;
	cout << endl;
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
