#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> books;
    books.push("C++");
    books.push("JAVA");
    books.push("PYTHON");
    books.push("OS");
    cout << "STACK OF BOOKS ARE :-" << endl;
    while (!books.empty())
    {
        cout << books.top() << endl;
        books.pop();
    }
    return 0;
}