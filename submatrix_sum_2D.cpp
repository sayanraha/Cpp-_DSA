#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, tli, tlj, rbi, rbj;
    cout << "ENTER THE NUMBER OF ROWS :" << endl;
    cin >> n;
    cout << "ENTER THE NUMBER OF COLUMNS :" << endl;
    cin >> m;
    int arr[n][m];
    cout << "------------------------------------------- " << endl;
    cout << "Enter elements in the matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Enter Row Number of top_left of query submatrix" << endl;
    cin >> tli;
    cout << "Enter Column Number of top_left of query submatrix" << endl;
    cin >> tlj;
    cout << "Enter Row Number of bottom_right of query submatrix" << endl;
    cin >> rbi;
    cout << "Enter Column Number of bottom_right of query submatrix" << endl;
    cin >> rbj;
    int sum = 0;
    for (int row = tli; row <= rbi; row++)
    {
        for (int col = tlj; col <= rbj; col++)
        {
            sum += arr[row][col];
        }
    }
    cout<<"--------------------------------------------";
    cout <<"Sum of the submatrix is = "<< sum << endl;
    return 0;
}