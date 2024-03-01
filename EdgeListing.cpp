#include <iostream>
#include <vector>
using namespace std;

void edges(vector<vector<int>> Matrix)
{
    int vertices = Matrix.size();
    cout << "List of edges and their counts:\n";
    for (int i = 0; i < vertices; i++)
    {
        for (int j = i + 1; j < vertices; j++)
        {
            if (Matrix[i][j] == 1)
            {
                int count = 0;
                for (int k = 0; k < vertices; k++)
                {
                    if (Matrix[i][k] && Matrix[k][j])
                    {
                        count++;
                    }
                }
                cout << "Edge (" << i << ", " << j << ") appears " << count << " time(s)." << endl;
            }
        }
    }
}

int main()
{
    vector<vector<int>> Matrix = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}};

    edges(Matrix);

    return 0;
}
