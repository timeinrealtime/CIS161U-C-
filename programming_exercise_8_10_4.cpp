#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int numerator = 0;
int denominator = 0;
double new_numerator = 0;
double new_denominator = 0;
int quotient = 0;
int m = 0;
double GCF = 0;
char prime_read = '\0';

int main()
{

	cout << "This program will take the fraction entered and reduce it to the lowest form.\n";

	cout << "Would you like to run the program? (Y or N)\n";		//prime read for while loop
	cin >> prime_read;      //prime read for while loop



	while (prime_read == 'Y' || prime_read == 'y') 		//while prime_read = Y, the loop will perform.
	{
		//Enter numerator and denominator
		cout << "Please enter the numerator of the fraction:\n";
		cin >> numerator;

		cout << "Please enter the denominator of the fraction:\n";
		cin >> denominator;



		//if denominator is 0 display an error message
		if (denominator == 0)
		{
			cout << "Error: Can't divide by 0.\n";
			return 0;
		}

		else if (denominator < 0)
		{
			cout << "Error: Negative number in the denominator.";
			return 0;
		}


		quotient = numerator / denominator;
		m = numerator % denominator;

		if (m == 0)
		{
			cout << "Your simplified fraction is equal to: " << quotient << endl;

			cout << "\nWould you like to enter a new fraction?\n";
			cin >> prime_read;
		}

		else if (numerator > denominator)
		{
			cout << m << endl;
			cout << "  " << m << endl;
			cout << quotient << "  --" << endl;
			cout << "  " << denominator << endl;

			cout << "Would you like to enter a new fraction?\n";
			cin >> prime_read;
		}

		else if (m != 0)
		{

			//***Euclids Algorithm***

			new_numerator = numerator / m;
			new_denominator = denominator / m;

			cout << "Your new, simplified fraction is:\n";

			cout << new_numerator << endl;
			cout << "---\n";
			cout << new_denominator << endl;

			cout << "Would you like to enter a new fraction?\n";
			cin >> prime_read;
		}
	}

	return 0;
}
