
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cout << "Resturant Bill";
    cout << "\n==============";
    cout << endl;

    cout << "Meal charge: R";
    int charge;
    cin >> charge;
    cout << endl;

    double Tax = charge * 0.0675;
    double Total = charge + Tax;
    double tip = Total * 0.2;

    cout << "Meal charge: R" << charge;
    cout << "\nTax amount: R" << Tax;
    cout << "\nTip amount: R" << tip;
    cout << "\nTotal bill: R" << Total;
    cout << endl;

    cout << "Press any key to exit...";

    cout << endl;

    cout << endl;
    cout << "Enter initial velocity(m/s): ";
    int velocity;
    cin >> velocity;

    cout << "Enter time of flight(seconds): ";
    int time;
    cin >> time;

    cout << endl;
    double maximumHeight = pow(velocity, 2) / (2 * 9.8);
    double Distance = velocity * time;

    cout << "Projectile Results";
    cout << "\n--------------------------";
    cout << "\nMaximum Height: " << maximumHeight << "m";
    cout << "\nHorizontal Distance: " << Distance << "m";


    cout << "\nPress any key to exit...";
    cout << endl;



}

