#include <bits/stdc++.h>
using namespace std;
string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void printPhoneKeypad(string input, string output, int i = 0)
{
    if (input[i] == '\0')
    {
        cout << output << endl;
        return;
    }
    // Recursive Case
    int current_digit = input[i] - '0';
    if (current_digit == 0 or current_digit == 1)
    {
        printPhoneKeypad(input, output, i + 1);
    }
    for (int k = 0; k < keypad[current_digit].size(); k++)
    {
        printPhoneKeypad(input, output + keypad[current_digit][k], i + 1);
    }
    return;
}
int main()
{
    string input,output;
    cin >> input;
    printPhoneKeypad(input, output);
    return 0;
}