#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Merge(vector<int> &B, vector<int> &C, vector<int> &A) // Merge 2 sorted arrays
{
    int p = B.size();
    int q = C.size();

    int i = 0, j = 0, k = 0;

    while (i < p && j < q)
    {
        if (B[i] <= C[j])
        {
            A[k] = B[i];
            k++;
            i++;
        }
        else
        {
            A[k] = C[j];
            k++;
            j++;
        }
    }

    while (i < p)
    {
        A[k] = B[i];
        k++;
        i++;
    }

    while (j < q)
    {
        A[k] = C[j];
        k++;
        j++;
    }
};

void mergeSort(vector<int> &A) // Divides an array in 2 from middle
{
    int n = A.size();
    if (n <= 1)
    {
        return;
    }

    int mid = n / 2;

    vector<int> B(A.begin(), A.begin() + mid); // Copy first half in B    //A.begin()+mid-->exclusive
    vector<int> C(A.begin() + mid, A.end());   // copy second half in C

    mergeSort(B);
    mergeSort(C);

    Merge(B, C, A);
};

int main()
{
    void mergeSort(vector<int> & A);
    void Merge(vector<int> & B, vector<int> & C, vector<int> & A);

    vector<int> A;

    int elements;
    cout << "ENTER THE TOTAL NUMBER OF ELEMENTS" << endl;
    cin >> elements;
    int input;
    for (int i = 0; i < elements; i++)
    {
        cin >> input;
        A.push_back(input);
    }

    cout << "Original array: ";
    for (int k = 0; k < A.size(); k++)
    {
        cout << A[k] << "\t";
    }
    cout << endl;

    // Perform merge sort
    mergeSort(A);

    // Output sorted array
    cout << "Sorted array: ";
    for (int k = 0; k < A.size(); k++)
    {
        cout << setw(5) << A[k];
    }
    cout << endl;
    return 0;
}
