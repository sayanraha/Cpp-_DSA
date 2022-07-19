#include<bits/stdc++.h>
using namespace std;
int highest_peak(vector<int> a)
{
    int n = a.size();
    int largest = 0;
    for(int i = 1;i<=n-2;)
    {
        //check a[i] is peak or not
        if(a[i]>a[i-1] and a[i]>a[i+1])
        {
            int cnt = 1;
            int j = i;
            //cnt backward (left)
            while(j>=1 and a[j]>a[j-1])
            {
                j--;
                cnt++;
            }
            //cnt forward(right)
            while(i<=n-2 and a[i]>a[i+1])
            {
                i++;
                cnt++;
            }
            largest = max(largest,cnt);
        }
        else{
            i++;
        }
    }
    return largest;
}
int main()
{
    vector<int> input = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout<<"Length of the highest mountain is = "<<highest_peak(input)<<endl;
    return 0;
}