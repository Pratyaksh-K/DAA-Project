#include<iostream>
using namespace std;
#define MAX 100

class Warshall {
public:
    int n;
    int D[MAX][MAX];
    Warshall(int vertices);
    void read();
    void display();
    void compute();
};

Warshall::Warshall(int vertices) {
    n = vertices;
}

void Warshall::read() {
    cout << "Enter the adjacency matrix (" << n << "x" << n << "):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> D[i][j];
        }
    }
}

void Warshall::display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << D[i][j] << "\t";
        }
        cout << endl;
    }
}

void Warshall::compute() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                D[i][j] = D[i][j] || (D[i][k] && D[k][j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    Warshall graph(n);
    graph.read();

    cout << "Input matrix:" << endl;
    graph.display();

    graph.compute();

    cout << "Warshall matrix:" << endl;
    graph.display();

    return 0;
}
