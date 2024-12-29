#include <iostream>
using namespace std;
#define size 5
int swapper;
int minimum;
int main()
{
    int arr[size];
    cout << "Elements" << endl;
    for (int k = 0; k < size; k++)
    {
        cin >> arr[k];
    }
    cout << "UN-SORTED ARRAY" << endl;
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << "\t";
    }

    // SORTING USING SELECTION SORT

    for (int i = 0; i <= size - 2; i++)
    {
        minimum = i;

        for (int j = i + 1; j <= size - 1; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        // SWAPPING
        swapper = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = swapper;
    }

    // PRINTING THE SORTED ARRAY

    cout << endl
         << "SORTED ARRAY" << endl;
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << "\t";
    }
}
