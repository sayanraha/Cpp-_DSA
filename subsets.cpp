#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> allsubsets;
void generate(vector<int> &empty, int i, vector<int> &nums)
{
    if (i == nums.size() )
    {
        allsubsets.push_back(empty);
        return;
    }
    empty.push_back(nums[i]);
    generate(empty, i + 1, nums);
    empty.pop_back();
    generate(empty, i + 1, nums);
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> empty;
    generate(empty, 0, nums);
    for (auto s : allsubsets)
    {
        for (auto ele : s)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}