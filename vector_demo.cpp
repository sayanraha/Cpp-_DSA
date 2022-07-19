# include<bits/stdc++.h>
using namespace std;
int main()
{
    //DEMO VECTOR CODE FOR 1D ARRAY
    vector<int>arr = {1,2,3,4,5};
    arr.pop_back();
    arr.push_back(10);
    cout<<arr.size()<<endl;//prints the number of elements present
    cout<<arr.capacity()<<endl;//prints the actul memory allocated by the vector 
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;

}