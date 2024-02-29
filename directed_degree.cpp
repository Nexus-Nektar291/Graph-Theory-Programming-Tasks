#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[4][2] = {{1, 2}, {2, 1}, {2, 3}, {2, 1}};
    vector<int> inDegree(4, 0);
    vector<int> outDegree(4, 0);

    for (int i = 0; i < 4; i++)
    {
        outDegree[arr[i][0] - 1]++;
        inDegree[arr[i][1] - 1]++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Vertex " << i + 1 << " has in degree of \"" << inDegree[i] << "\" and out degree \"" << outDegree[i] << "\"" << endl;
    }

    return 0;
}
