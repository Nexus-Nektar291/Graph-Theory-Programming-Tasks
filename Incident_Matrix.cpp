#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createMatrix(vector<pair<int, int>> &edges, int vertices)
{
    vector<vector<int>> incidenceMatrix(vertices, vector<int>(edges.size(), 0));

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        incidenceMatrix[u][i]++;
        incidenceMatrix[v][i]++;
    }

    return incidenceMatrix;
}

int main()
{
    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    int vertices = 4;
    vector<vector<int>> incidenceMatrix = createMatrix(edges, vertices);

    cout << "Incidence Matrix:\n";
    for (auto row : incidenceMatrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
