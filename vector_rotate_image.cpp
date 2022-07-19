#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows and columns" << endl;
    cin >> n;
    vector<vector<int>> arr(n);
    int p;
    cout << "Enter elements into the matrix :-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> p;
            arr[i].push_back(p); //Insertion of elements in 2D vectors
        }
        cout << endl;
    }
    cout << "Original Image is:-" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (auto s : arr[i])
        {
            cout << s << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Rotated image by 90 degrees is :-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
