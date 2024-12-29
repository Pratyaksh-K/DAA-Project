#include <vector>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

// INITIALISING

vector<int> wind_mill;
vector<int> solar_panel;

// FUNCTIONS

int sum_up(vector<int> A)
{
    int return_val = 0;

    for (int i = 0; i < 12; i++)
    {
        return_val += A[i];
    }
    return (return_val);
}

int lookup(vector<int> A, int number)
{
    return (A[number - 1]);
}

void print(vector<int> A)
{
    cout << setw(15) << "JANUARY" << setw(5) << A[0] << endl;
    cout << setw(15) << "FEBRUARY" << setw(5) << A[1] << endl;
    cout << setw(15) << "MARCH" << setw(5) << A[2] << endl;
    cout << setw(15) << "APRIL" << setw(5) << A[3] << endl;
    cout << setw(15) << "MAY" << setw(5) << A[4] << endl;
    cout << setw(15) << "JUNE" << setw(5) << A[5] << endl;
    cout << setw(15) << "JULY" << setw(5) << A[6] << endl;
    cout << setw(15) << "AUGUST" << setw(5) << A[7] << endl;
    cout << setw(15) << "SEPTEMBER" << setw(5) << A[8] << endl;
    cout << setw(15) << "OCTOBER" << setw(5) << A[9] << endl;
    cout << setw(15) << "NOVEMBER" << setw(5) << A[10] << endl;
    cout << setw(15) << "DECEMBER" << setw(5) << A[11] << endl;
}

void update(vector<int> &A, int month, int new_val)
{
    if (A[month - 1] > new_val)
    {
        cout << "INVALID VALUE ENTERED" << endl;
        return;
    }
    A[month - 1] = new_val;
    cout << "READING UPDATED" << endl;
}

int main()
{
    // INSERTION OF THE VALUES ARE ASSUMED, THESE VALUES CAN ALSO BE TAKEN FROM USER

    wind_mill.push_back(1000);
    wind_mill.push_back(1401);
    wind_mill.push_back(1147);
    wind_mill.push_back(1053);
    wind_mill.push_back(1390);
    wind_mill.push_back(1483);
    wind_mill.push_back(1394);
    wind_mill.push_back(1472);
    wind_mill.push_back(1382);
    wind_mill.push_back(1428);
    wind_mill.push_back(1282);
    wind_mill.push_back(930);

    int ch = 1;
    while (ch)
    {
        int windmill;
        cout << "Press 1 to see Electricity production of the WIND MILL park over the year" << endl
             << "PRESS 2 to see the performance during a specific month" << endl
             << "PRESS 3 to get the total amount of electricity produced in the year" << endl
             << "PRESS 4 to update reading of electricity produced in a specific month" << endl;
        cin >> windmill;
        switch (windmill)
        {
        case 1:
            cout << "THE TOTAL ELECTRCITY PRODUCED BY THE WINDMILL PARK OVER THE PERIOD OF 12 MONTHS IS :" << endl;
            print(wind_mill);
            cout << endl;
            break;

        case 2:
        {
            int month;
            cout << "Enter the month number whose performance you want to see" << endl;
            cin >> month;
            cout << "THE AMOUNT OF ELECTRICITY PRODUCED IN THAT MONTH WAS :" << lookup(wind_mill, month) << "kWH" << endl;
            break;
        }
        case 3:
            cout << "THE TOTAL ELECTRCITY PRODUCED BY THE WINDMILL PARK OVER THE PERIOD OF 12 MONTHS IS :" << sum_up(wind_mill) << "kWH" << endl;
            break;
        case 4:
        {
            int number, new_val;
            cout << "ENTER THE MONTH NUMBER WHOSE VALUE YOU WANT TO UPDATE" << endl;
            cin >> number;
            cout << "ENTER THE NEW READING" << endl;
            cin >> new_val;
            update(wind_mill, number, new_val);
            break;
        }
        default:
            cout << "INVALID ENTRY" << endl;
        }

        cout << "1:CONTINUE" << endl
             << "0:EXIT" << endl;
        cin >> ch;
    }
}
