#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// MINIMUM SPANNING TREE

struct node
{
    int par_1;
    int par_2;
    int weight;
};

int find(vector<int> &A, int u, int v) // when value is equal, returning 0 when unequeal returning 1
{
    if (A[u] == A[v])
    {
        return (0);
    }
    else
    {
        return (1); // if the values at those indexes are not equal return 1 and call union funtion
    }
}

void Union(vector<int> &A, int size, int u, int v)
{
    int temp = A[u];
    for (int k = 0; k < size; k++)
    {
        if (A[k] == temp)
        {
            A[k] = A[v];
        }
    }
}

void Merge(vector<struct node> &B, vector<struct node> &C, vector<struct node> &A) // Merge 2 sorted arrays
{
    int p = B.size();
    int q = C.size();

    int i = 0, j = 0, k = 0;

    while (i < p && j < q)
    {
        if (B[i].weight <= C[j].weight)
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

void mergeSort(vector<struct node> &A) // Divides an array in 2 from middle
{
    int n = A.size();
    if (n <= 1)
    {
        return;
    }

    int mid = n / 2;

    vector<struct node> B(A.begin(), A.begin() + mid); // Copy first half in B    //A.begin()+mid-->exclusive
    vector<struct node> C(A.begin() + mid, A.end());   // copy second half in C

    mergeSort(B);
    mergeSort(C);

    Merge(B, C, A);
};

int main()
{

    void Merge(vector<struct node> & B, vector<struct node> & C, vector<struct node> & A);
    void mergeSort(vector<struct node> & A);

    int vertices; // Number of vertices
    cout << "Enter the number of nodes" << endl;
    cin >> vertices;

    int nodes; // number of edges
    cout << "Enter the number of Edges" << endl;

    cin >> nodes;

    vector<struct node> tree; // Array of vertices and the weight of the edge between them
    vector<int> nodes_array;  // Value array

    cout << "INPUT THE NODES" << endl;
    node edge;

    for (int n = 0; n < nodes; n++)
    {
        cout << "Enter" << n << "th Edge";
        cin >> edge.par_1;
        cin >> edge.par_2;
        cin >> edge.weight;
        tree.push_back(edge);
    }

    for (int n = 0; n < vertices; n++)
    {
        nodes_array.push_back(n);
    }

    mergeSort(tree);

    // Output sorted array
    cout << "Sorted array: ";
    for (int k = 0; k < tree.size(); k++)
    {
        cout << tree[k].par_1 << "\t" << tree[k].par_2 << "\t" << tree[k].weight << endl;
    }
    cout << endl;

    int u;
    int v;
    int i = 0;
    int edge_counter = 0;
    int sum = 0;
    cout << "Minimum spanning set Can be created by having these edges:" << endl;
    while (i + 1 && edge_counter < vertices - 1)
    {

        u = tree[i].par_1;
        v = tree[i].par_2;

        if (find(nodes_array, u, v) == 1)
        {
            cout << " EDGE: " << u << " - " << v << endl;
            Union(nodes_array, nodes_array.size(), u, v);
            edge_counter++;
            sum += tree[i].weight;
        }
        i++;
    }
    cout << "Net weight of the tree" << sum << endl;
}
