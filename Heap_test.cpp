#include <iostream>
#include "Heap.h"
using namespace std;
int main()
{
    int marks[] = {90, 80, 12, 13, 15, 56, 94};
    Heap h;
    for (int x : marks)
    {
        h.push(x);
    }
    while (!h.empty())
    {
        cout << h.top() << endl;
        h.pop();
    }
    return 0;
}