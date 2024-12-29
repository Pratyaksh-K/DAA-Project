#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int partition(vector<int> &A, int left, int right)
{
    int k = A[left];
    int i = left + 1;
    int j = right;
    int m;

    while (i <= j)
    {
        while (i <= right && A[i] <= k)
        {
            i++;
        }
        while (j >= left && A[j] > k)
        {
            j--;
        }
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
    swap(A[left], A[j]);

    return (j);
}

void quicksort(vector<int> &A, int left, int right)
{
    int s;
    if (left < right)
    {
        s = partition(A, left, right);
        quicksort(A, left, s - 1);
        quicksort(A, s + 1, right);
    }
}

int main()
{
    vector<int> A;

    int inputter;
    int number;
    cout << "ENTER HOW MANY NUMBER OT BE SORTED" << endl;
    cin >> number;
    cout << "ENTER THE NUMBERS ONE BY ONE" << endl;

    for (int i = 0; i < number; i++)
    {

        cin >> inputter;
        A.push_back(inputter);
    }

    quicksort(A, 0, A.size() - 1);

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
