/*
n = 8
0 0
0 1
1 1
1 0
2 1
2 0
3 1
3 0
*/

#include <bits/stdc++.h>
using namespace std;
class Points
{
public:
    int x, y;
    Points()
    {
    }
    Points(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
class Compare
{
public:
    bool operator()(const Points p1, const Points p2)
    {
        if (p1.x == p2.x)
        {
            return p1.y < p2.y;
        }
        return p1.x < p2.x;
    }
};
int Count_Rectangle(vector<Points> p)
{
    set<Points, Compare> s;
    // 1-> Insert all points into the set
    for (auto x : p)
    {
        s.insert(x);
    }
    int ans = 0;
    // 2-> Iterate over the 2 points and search for the other two points
    // T.C -> O(n^2 log(n))
    for (auto it = s.begin(); it != prev(s.end()); it++)
    {
        for (auto jt = next(it); jt != s.end(); jt++)
        {
            Points p1, p2;
            p1 = *it;
            p2 = *jt;

            if (p1.x == p2.x or p1.y == p2.y)
            {
                continue;
            }
            Points p3(p1.x, p2.y);
            Points p4(p2.x, p1.y);
            if (s.find(p3) != s.end() and s.find(p4) != s.end())
            {
                ans += 1;
            }
        }
    }
    return ans/2;
}
int main()
{
    int n,x,y;
    cin>>n;
    vector<Points> p;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y;
        Points w(x,y);
        p.push_back(w);
    }
    cout<<"Number of rectangles that can be formed is = "<<Count_Rectangle(p)<<endl;
    return 0;
}