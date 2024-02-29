#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createMatrix(vector<pair<int, int>> edges, int vertices)
{
    vector<vector<int>> Matrix(vertices, vector<int>(vertices, 0));

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        Matrix[u][v] = 1;
        Matrix[v][u] = 1;
    }

    return Matrix;
}

int main()
{
    vector<pair<int, int>> edges = {{0, 1}, {0, 3}, {1, 2}, {2, 3}};
    int vertices = 4;

    vector<vector<int>> Matrix = createMatrix(edges, vertices);

    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = 0; j < Matrix[i].size(); j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
