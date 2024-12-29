#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;

//Stucture to store the data of a driver 

struct driver
{
    string name;
    int age;
    int registration_number;
    char gender;
};

vector<driver> store;

//Brute Force String Search Function

int bfss(string A, int size)
{

    for (int i = 0; i < store.size(); i++)
    {
        if (size == store[i].name.size())
        {
            int k = 0;
            while ((store[i].name[k] == A[k]) && k < size)
            {
                k++;
            }
            if (k == size)
            {
                return (i);
            }
        }
    }
    return (-1);
}

int main()
{

    ifstream open("records.txt");

    driver inputter;
    int counter = 0;

    while (open >> inputter.name >> inputter.age >> inputter.registration_number >> inputter.gender)
    {
        store.push_back(inputter);
        counter++;
    }

    int ch = 1;
    while (ch)
    {
        cout << "ENTER 1 TO LOOK FOR A INFORMATION OF A DRIVER" << endl;
        cout << "ENTER 2 TO ADD A NEW DRIVER'S INFORMATION" << endl;
        cout << "ENTER 3 TO DISPLAY ALL RECORDS" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string input;
            cout << "ENTER THE NAME YOU WANT TO SEARCH" << endl;
            cin >> input;
            int size = input.size();
            int flag = bfss(input, size);

            if (flag == -1)
            {
                cout << "THERE IS NO DRIVER WITH NAME : " << input << endl;
            }
            else
            {
                cout << "! FOUND !" << endl
                     << endl;
                cout << setw(15) << "NAME" << setw(15) << "AGE" << setw(25) << "REGISTRATION NUMBER" << setw(15) << "GENDER" << endl;
                cout << setw(15) << store[flag].name << setw(15) << store[flag].age << setw(15) << store[flag].registration_number << setw(20) << store[flag].gender << endl;
            }
            break;
        }
        case 2:
        {
            cout << "ENTER THE DETAILS OF THE NEW DRIVER" << endl;
            driver inputter;
            cout << "NAME : ";
            cin >> inputter.name;
            cout << endl
                 << "AGE : ";
            cin >> inputter.age;
            cout << endl
                 << "REGISTRATION NUMBER : ";
            cin >> inputter.registration_number;
            cout << endl
                 << "GENDER ";
            cin >> inputter.gender;

            store.push_back(inputter);
            cout << "DRIVER ADDED" << endl;
            counter++;
            break;
        }
        case 3:
        {
            cout << setw(15) << "NAME" << setw(15) << "AGE" << setw(25) << "REGISTRATION NUMBER" << setw(15) << "GENDER" << endl;
            for (int i = 0; i < counter; i++)
            {
                cout << setw(15) << store[i].name << setw(15) << store[i].age << setw(15) << store[i].registration_number << setw(20) << store[i].gender << endl;
            }
            break;
        }
        default:
            cout << "INVALID INPUT" << endl;
        }

        cout << "1: CONTINUE  ,   0: EXIT" << endl;
        cin >> ch;
    }
}
