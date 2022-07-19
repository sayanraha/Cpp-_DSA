#include <bits/stdc++.h>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void num_spell(int k)
{
    if (k == 0)
    {
        return;
    }
    int last_digit = k % 10;
    num_spell(k / 10);
    cout << spell[last_digit] << "  ";
    //cout << endl;
}
int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    num_spell(num);
    return 0;
}