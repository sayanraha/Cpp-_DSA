//Sort Cartesian pair
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of pairs" << endl;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
            else if (x[j] == x[j + 1] && y[j] > y[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }
    cout<<"SORTED PAIRS ARE :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<"("<< x[i] << "," << y[i] <<")"<< endl;
    }
    cout << endl;
    return 0;
}