#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, key;

    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {

            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    cout << "sorted array :  ";
    for (int k = 0; k < n; k++)
    {

        cout << a[k] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n];

    int ele;
    cout << "Enter the elements " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        a[i] = ele;
    }

    insertion_sort(a, n);
}
