#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(vector<vector<int>> &graph)
{
    int vertices = graph.size();
    vector<int> colors(vertices, -1);

    for (int i = 0; i < vertices; i++)
    {
        if (colors[i] == -1)
        {
            queue<int> q;
            q.push(i);
            colors[i] = 0;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (int i = 0; i < graph[u].size(); i++)
                {
                    int v = graph[u][i];
                    if (colors[v] == -1)
                    {
                        colors[v] = 1 - colors[u];
                        q.push(v);
                    }
                    else if (colors[v] == colors[u])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> graph = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};

    if (isBipartite(graph))
    {
        cout << "The graph is bipartite." << endl;
    }
    else
    {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
