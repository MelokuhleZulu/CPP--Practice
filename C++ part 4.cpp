

#include <iostream>
#include <string>;
#include <cmath>;
#include <algorithm>;
using namespace std;

int main()
{
    cout<< "==== TAXI FARE PROCESSING SYSTEM ====";

    cout << "\nDo you want to enter a trip? (Y/N): ";
    string response;
    cin >> response;
    double distance;
    double fare;
    double Totalfare = 0;
    int count = 0;
    string name;
    double totalearning = 0;
    string Topname = " ";

    int Tripcount = 0;

    int iCount = 0;
    double Highestvalue = -1;

    while (response == "Y" || response == "y")
    {
        cout << "Enter driver's name: ";
        cin >> name;

        cout << "Enter distance travelled (km): ";
        cin >> distance;

        cout << "Enter fare per Km(R): ";
        cin >> fare;

         Totalfare = distance * fare;

        cout << "Total fare: R" << Totalfare;
        cout << endl;
        
        cout << "\nDo you want to enter another trip ? (Y/N):  ";
        cin >> response;

        
        Tripcount++;
       
        if (Totalfare > 100)
        {
            count++;
        }
        else if(Totalfare <= 100)
        {
            iCount = Tripcount - count;
        }


        totalearning += Totalfare;

        if (Totalfare > Highestvalue)
        {
            Highestvalue = Totalfare;
            Topname = name;
        }

    }
   
    double Average = totalearning / Tripcount;

    cout << "==== SUMMARY ====";
    cout << "\nTotal Earnings: R" << totalearning;
    cout << "\nAverage Fare per Trip: R" << Average;
    
    cout << "\nTop Driver: " << Topname << ", R" << Highestvalue;
    cout << "\nTrips above R100: " << count;

    cout << "\nTrips R100 or below: " << iCount;



    cout << endl;
    cout << "\nPress any key to exit...";


}

