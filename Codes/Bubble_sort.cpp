#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>

using namespace std;

vector<int> visited; // 0 means not-visited , 1 means visited
// we are using only one array which contains both the visited and non-visited nodes, signaled by bool values
vector<int> dist;
vector<int> path;
vector<vector<int>> cost_matrix; // COST MATRIX
int nodes;                       // NUMBER OF NODES IN THE GRAPH
pair<int, int> dijkstras(int u, int dist_of_u);

int u;
int dist_of_u;

int min(int a, int b) // min(previous value , relaxed edge weight + weight of the corresponding edge from cost_matrix)
{
    return (a > b); // if the function returns 1 it means A is greater then B ,that means that the previous weight is higher then the new weight hence the new weight has to to be saved as it is smaller.
}

pair<int, int> dijkstras(int u, int dist_of_u)
{
    for (int i = 0; i < nodes; i++)
    {
        if (visited[i] == 0) // THE NODE IS UNVISITED
        {
            if (min(dist[i], dist_of_u + cost_matrix[u][i])) // RETURN I IF dist_of_u+cost_matrix[u][i] IS SMALLER THAN EXISTING PATH
            {
                dist[i] = dist_of_u + cost_matrix[u][i]; // REPLACES THE PATH
                path[i] = u;
            }
        }
    }

    dist_of_u = 9999;
    u = 9999;

    for (int i = 0; i < nodes; i++)
    {
        if (visited[i] == 0)
        {
            if (dist[i] < dist_of_u)
            {
                dist_of_u = dist[i];
                u = i;
            }
        }
    }

    // returning the newly selected U and DIST_OF_U or the newly selected edge that is to be relaxed in the main

    pair<int, int> p;
    p.first = u;
    p.second = dist_of_u;

    return (p);
}

int main()
{

    cout << "ENTER THE NUMBER OF NODES" << endl;
    cin >> nodes;

    cout << "ENTER THE COST MATRIX, ENTER 9999 FOR INFINITY" << endl;

    vector<int> input;
    int inputter;
    for (int k = 0; k < nodes; k++) // POPULATING THE COST MATRIX
    {
        cout << "ENTER" << k << "th" << "ROW OF COST MATRIX" << endl;
        for (int i = 0; i < nodes; i++)
        {
            cin >> inputter;
            input.push_back(inputter);
        }
        cost_matrix.push_back(input);
        input.clear();
    }

    cout << "COST MATRIX" << endl; // DISPLAYING COST MATRIX;
    for (int k = 0; k < nodes; k++)
    {

        for (int i = 0; i < nodes; i++)
        {
            cout << setw(10) << cost_matrix[k][i] << " ";
        }
        cout << endl;
    }

    // INITIALISING V AND VISITED;
    for (int i = 0; i < nodes; i++)
    {

        visited.push_back(0);
    }

    // INITIALISING DIST AND PATH ARRAYS

    cout << "ENTER THE SOURCE" << endl;
    int source;
    cin >> source;

    // Flagging the source as the VISITED in the visited array
    visited[source] = 1;

    for (int i = 0; i < nodes; i++)
    {
        path.push_back(source);
        dist.push_back(cost_matrix[source][i]);
    }

    // DISPLAYING PATH AND DIST ARRAYS
    cout << "PATH ARRAY\n";
    for (int i = 0; i < nodes; i++)
    {
        cout << path[i] << endl;
    }

    cout << endl;

    cout << "DISTANCE ARRAY\n";
    for (int i = 0; i < nodes; i++)
    {
        cout << dist[i] << endl;
    }

    //  CALCULATING THE VALUE OF U AND DIST[U] TO START THE ITERATION OF DIJKSTRAS

    dist_of_u = dist[0];
    u = 0;
    for (int i = 1; i < nodes; i++)
    {
        if (dist[i] < dist_of_u && visited[i] == 0)
        {
            dist_of_u = dist[i];
            u = i;
        }
    }

    cout << "u" << u << "dist" << dist_of_u << endl;

    visited[u] = 1;

    // NOW WE CALL THE FUNCTION DIJKSTRAS WITH THE CHOSEN U AND DIST[U]

    while (1)
    {
        pair<int, int> result = dijkstras(u, dist_of_u);

        if (result.first == 9999) // if visited.first is 9999 it means that all the nodes have been visited, SEE DIJKSTRAS RETURN VALUES
        {
            break;
        }

        visited[result.first] = 1;

        u = result.first;
        dist_of_u = result.second;
    }

    cout << "DIJKSTRAS COMPLETE" << endl;

    cout << "final dist and path arrays" << endl;

    cout << setw(10) << "DIST" << setw(10) << "PATH" << endl;
    for (int k = 0; k < nodes; k++)
    {
        cout << setw(10) << dist[k] << setw(10) << path[k] << endl;
    }

    return 0;
}
