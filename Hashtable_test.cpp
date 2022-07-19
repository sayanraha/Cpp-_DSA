#include <iostream>
#include "hashtable.h"
using namespace std;
int main()
{
    Hashtable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 120);
    h.insert("Banana", 140);
    h.insert("Orange", 100);
    h.insert("Kiwi", 300);
    h.insert("Litchi", 200);
    h.print();
    cout << endl;
    string fruit;
    cin >> fruit;
    int *price = h.search(fruit);
    if (price != NULL)
    {
        cout << "Price of the fruit is = " << *price << endl;
    }
    else
    {
        cout << "Fruit not found!" << endl;
    }
    string t;
    cin >> t;
    h.erase(t);
    h.print();
    return 0;
}