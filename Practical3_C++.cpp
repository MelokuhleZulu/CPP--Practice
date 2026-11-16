
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Do you have a student card (Yes/No): ";
    string studentcard;
    cin >> studentcard;
    cout << "Do you have a VIP invitation (Yes/No): ";
    string invitation;
    cin >> invitation;

    cout << endl;
    cout << endl;

    if (age < 18 && invitation == "No")
    {
        cout << "\nAccess denied. You are not to attend the event.";

    }
    else if (age >= 18 )
    {
        cout << "\nAccess granted.";
        if (studentcard == "YES" || studentcard == "yes"  && age >= 65)
        {
            cout << "\nTicket Type: Discount ticket";
        }
        else if (invitation == "YES" || invitation == "yes")
        {
            cout << "\nTicket Type: VIP Ticket";
        }
        else
        {
            cout << "\nTicket Type: Standard Ticket.";
        }
    }
   

    

   
    cout << endl;
    cout << "\nPress any key to exit..";


}
