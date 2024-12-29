
// The below code takes input records from a text file usinf fstrem class.
// Records are a pair of string(location name) and an integer(NEED-FACTOR)
// The code stores the records in a vector
// The function heapify heapifies the vector


#include <iostream>
#include <string.h>
#include <fstream>
#include <utility>

using namespace std;

struct station
{
    string name;
    int factor;
};

void heapify(vector<station> &A, int n)
{

    for (int i = n / 2; i >= 1; i--)
    {
        int k = i;        // index of parent
        station u = A[k]; // value of parent

        bool heap = false;
        int j;
        while (not heap && n >= 2 * k)
        {
            j = 2 * k; // first child
            if (j < n)
            {
                if (A[j].factor < A[j + 1].factor)
                {
                    j = j + 1;
                }
            }

            if (u.factor >= A[j].factor)
            {
                heap = true;
            }
            else
            {
                A[k] = A[j];
                k = j;
            }
        }
        A[k] = u;
    }
}

int main()
{
    int number;
    cout << "enter the number of locations you have" << endl;

    cin >> number;

    vector<station> heap;

    // Populating the zeroth index with NULL values as we need the records to start occupying fom first index
    station initialiser;
    initialiser.name = "no_name";
    initialiser.factor = 0;
    heap.push_back(initialiser);

    // Opening the file locations.txt

    ifstream open("locations.txt");

    int counter = 1;
    while (counter <= number && (open >> initialiser.name >> initialiser.factor))
    {
        heap.push_back(initialiser);
        counter++;
    }

    cout << "ORIGINAL ARRAY" << endl;
    cout << setw(15) << "NAME" << setw(15) << "FACTOR" << endl;
    for (int i = 1; i <= number; i++)
    {
        cout << setw(15) << heap[i].name << setw(15) << heap[i].factor << endl;
    }

    heapify(heap, number);

    // the Tree has been heapified

    // Now printing the sorted array
    // step-1 Swap the most prior node(root node) with the last leaf node
    // step-2 Display and delete the the swapped node
    // step-3 Heapify the tree again
    // step-4 Repeat untill the tree has been emptied

    cout << setw(15) << "NAME" << setw(15) << "FACTOR" << endl;
    while (heap.size() > 1)
    {
        heapify(heap, heap.size() - 1);
        cout << setw(15) << heap[1].name << setw(15) << heap[1].factor << endl;
        swap(heap[1], heap[heap.size() - 1]);
        heap.pop_back();
    }
}
