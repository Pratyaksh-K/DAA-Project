#include <iostream>
#include <vector>
#include <vector>

using namespace std;

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

vector<int> edges;

int main()

{
    int nodes;
    cout << "ENTER THE NUMBER OF NODES" << endl;
    cin >> nodes;

    for (int i = 0; i < nodes; i++)
    {
        edges.push_back(i);
    }

    int ch = 1;
    int choice;
    while (ch)
    {

        cout << "1: UNION TWO NODES" << endl;
        cout << "2: FIND IF TWO NODES ARE CONNECTED" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "ENTER THE TWO NODES TO UNION" << endl;
            int u, v;
            cin >> u >> v;
            Union(edges, nodes, u, v);
            break;
        }
        case 2:
        {
            cout << "ENTER THE TWO NODES TO FIND IF THEY ARE CONNECTED" << endl;
            int p, m;
            cin >> p >> m;
            if (find(edges, p, m) == 1)
            {
                cout << "NOT CONNECTED" << endl;
            }
            else
            {
                cout << "CONNECTED" << endl;
            }
            break;
        }
        default:
            cout << "INVALID INPUT" << endl;
        }
        cout << "1: CONTINUE    0: EXIT" << endl;
        cin >> ch;
    }
}
