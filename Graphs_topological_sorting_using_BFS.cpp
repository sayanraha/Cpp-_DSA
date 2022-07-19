#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int x, int y)
    {
        // Directed graph
        l[x].push_back(y);
    }
    void topological_sort()
    {
        vector<int> indegree(V, 0);
        // Iterate over all the edges to find the right indegree
        for (int i = 0; i < V; i++)
        {
            for (auto nbr : l[i])
            {
                indegree[nbr]++;
            }
        }
        // BFS
        queue<int> q;
        // Initialize the q with nodes having 0 indegrees
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        // Start popping
        while (!q.empty())
        {
            int f = q.front();
            cout << f<<" , ";
            q.pop();
            /*Iterate over all the neighbours of this node and reduce the
             their degree by 1*/
            for (auto nbr : l[f])
            {
                indegree[nbr]--;
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(1, 2);

    g.topological_sort();
    return 0;
}