
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	cout << "A menu driven program for a simple calculator: ";
	cout << "\n================================================";

	int interger1;
	cout << "\nEnter the first interger: ";
	cin >> interger1;
	int interger2;
	cout << "Enter the second interger: ";
	cin >> interger2;

	if (interger1 >= 0 && interger2 >= 0 && interger1 <= 20 && interger2 <= 20)
	{
		cout << "\nHere are the options: ";
		cout << "\n1-Addition.";
		cout << "\n2-Subtraction.";
		cout << "\n3-Multiplication.";
		cout << "\n4-Division.";
		cout << "\n5-Exit.";

		cout << endl;
		int choice;
		cout << "\nInput your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nThe Addition of " << interger1 << " and " << interger2 << " is: " << (interger1 + interger2);
			break;
		case 2:
			cout << "\nThe Subtraction of " << interger1 << " and " << interger2 << " is: " << (interger1 - interger2);
			break;
		case 3:
			cout << "\nThe Multiplication of " << interger1 << " and " << interger2 << " is: " << (interger1 * interger2);
			break;
		case 4:
			if (interger2 > 0)
			{
				cout << "\nThe Division of " << interger1 << " and " << interger2 << " is: " << (interger1 / interger2);
			}
			else (interger2 == 0)
				; {
				cout << "\nCannot divide by Zero!";
			}
			break;


		}


	}
	else 
	{
		cout << "\nInvalid input.";
	}

	

	cout << endl;
	cout << "\nPress any key to exit... ";

	cout << endl;

}
