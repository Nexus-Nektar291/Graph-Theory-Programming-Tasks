#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4][2] = {{1, 2}, {2, 1}, {2, 3}, {3, 2}};
    vector<int> vertices(4, 0);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            vertices[arr[i][j]]++;
        }
    }

    for (int i = 1; i < vertices.size(); i++)
    {
        cout << "Vertex " << i << " has degree " << vertices[i] << endl;
    }

    return 0;
}
