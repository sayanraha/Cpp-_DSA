#include <bits/stdc++.h>
using namespace std;
bool canPlaceBirds(int B, int N, vector<int> nest, int seperation)
{
    int birds = 1;
    int location = nest[0];
    for (int i = 1; i <= N - 1; i++)
    {
        int current_loc = nest[i];
        if (current_loc - location >= seperation)
        {
            birds++;
            location = current_loc;
            if (birds == B)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int B = 3;//No of birds
    vector<int> nest = {1, 2, 4, 8, 9}; // nets(coordinates) may not be sorted
    // sort the nest
    sort(nest.begin(), nest.end());
    int N = nest.size();

    // Binary search on the distance
    int s = 0;
    int e = nest[N - 1] - nest[0];
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        bool canPlace = canPlaceBirds(B, N, nest, mid);
        if (canPlace)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans << endl;
}