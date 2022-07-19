//Adjacency list code 1
#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;//Vertices
    list<int> * l;//Declaration of pointer to an array of list
    public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i,int j,bool undir = true)
    {
        l[i].push_back(j);
        if(undir)
        {
            l[j].push_back(i);
        }
    }
    void printAdjacentList()
    {
        //Iterate over all rows
        for(int i = 0;i<V;i++)
        {
            cout<<i<<" -----> ";
            //Every element of the ith linked list 
            for(auto vertex:l[i])
            {
                cout<<vertex<<" , ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printAdjacentList();
    return 0;
}