

#include <iostream>
using namespace std;

int main()
{
	cout << "===========================";
	cout << "\n    CLOTHING STORE SALE    ";
	cout << "\n===========================";
	cout << "\n Enter total amount of clothes purchased (R): ";
	int totalamount;
	cin >> totalamount;
	cout << endl;
	cout << endl;

	string discount = "";
	double Discountamount = 0;

	if (totalamount >= 500) 
	{
		discount = "25%";
	    Discountamount = totalamount * 0.25;

	}
	else if (totalamount >= 300 && totalamount < 500) 
	{
		discount = "15%";
		Discountamount = totalamount * 0.15;
	}
	else 
	{
		discount = "No discount";
		Discountamount = 0;
	}
	

	double finalamount = totalamount  - Discountamount;
		

	cout << "========= RECIEPT ==========";
	cout << "\nTotal Amount         : R" << totalamount;
	cout << "\nDiscount Applied     : " << discount;
	cout << "\nDiscount Amount      : R" << Discountamount;
	cout << "\nFinal Amount Payable : R" << finalamount;
	cout << "\n=================================";


	cout << endl;
	cout << "\nPress any key to exit...";
	cout << endl;

}

