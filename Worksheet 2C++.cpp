
#include <iostream>
#include <cmath>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    cout << "Enter number of units consumed: ";
    int numberofunits;
    cin >> numberofunits;

    cout << "Enter cost per unit: ";
    double cost;
    cin >> cost;

    double subtotal = numberofunits * cost;
    double VAT = subtotal * 0.15;
    double Total = subtotal + VAT;
    cout << endl;

    cout << "Electicity Bill Summary \n";
    cout << "--------------------------";
    cout << "\n Subtotal: R" << subtotal;
    cout << "\n VAT(15%): R" << VAT;
    cout << "\n Total Amount Due: R" << Total;
    cout << endl;

    cout << "Press any key to exit...";
    cout << endl;

}

