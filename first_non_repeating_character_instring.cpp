/*#include <bits/stdc++.h>
using namespace std;
const int n = 26;
vector<char> non_repeating(vector<char> str)
{
    queue<char> q;
    vector<char> v;
    int freq[n] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        q.push(str[i]);
        freq[str[i] - 'a']++;
        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                v.push_back(str[i]);
                break;
            }
        }
        if (q.empty())
        {
            v.push_back('0');
        }
    }
    return v;
}
int main()
{
    vector<char> v(4);char p;
    for(int i = 0;i<4;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    cout<<"Non repeating element of the string is ->", non_repeating(v);
    return 0;
}*/
// C++ program for a Queue based approach
// to find first non-repeating character
#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// function to find first non repeating
// character of sa stream
void firstnonrepeating(char str[])
{
	queue<char> q;
	int charCount[MAX_CHAR] = { 0 };

	// traverse whole stream
	for (int i = 0; str[i]; i++) {

		// push each character in queue
		q.push(str[i]);

		// increment the frequency count
		charCount[str[i] - 'a']++;

		// check for the non repeating character
		while (!q.empty()) {
			if (charCount[q.front() - 'a'] > 1)
				q.pop();
			else {
				cout << q.front() << " ";
				break;
			}
		}

		if (q.empty())
			cout << 0<< " ";
	}
	cout << endl;
}

// Driver function
int main()
{
	char str[] = "aabc";
	firstnonrepeating(str);
	return 0;
}
