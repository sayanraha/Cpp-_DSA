//Adjacency list code 2
#include<iostream>
#include<cstring>
#include<list>
#include<vector>
#include<unordered_map>
using namespace std;
class Node
{
    public:
    string name;
    list<string> nbrs;
    Node(string name)
    {
        this->name = name;
    }
};
class Graph
{
    unordered_map<string,Node *> m;
    public:
    Graph(vector<string> cities)
    {
        for(auto city:cities)
        {
            m[city]= new Node(city);
        }
    }
    void addEdge(string x,string y,bool undir = false)
    {
        m[x] -> nbrs.push_back(y);
        if(undir)
        {
            m[y] -> nbrs.push_back(x);
        }
    }
    void printAdjlist()
    {
        for(auto cityPair:m)
        {
            auto city  = cityPair.first;
            cout<<city<<"----->";
            Node *node = cityPair.second;
            for(auto nbr:node->nbrs)
            {
                cout<<nbr<<" , ";
            }
            cout<<endl;
        }
    }
};
int main(){
	vector<string> cities = {"Delhi","London","Paris","New York"};
	Graph g(cities);

	g.addEdge("Delhi","London");
	g.addEdge("New York","London");
	g.addEdge("Delhi","Paris");
	g.addEdge("Paris","New York");

	g.printAdjlist();
	

	return 0;
}
