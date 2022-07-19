#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> menu;
    menu["maggi"] = 15;
    menu["coldrinks"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["indian platter"] = 399;
    // update query O(log n)
    menu["dosa"] = (1 + 0.1) * menu["dosa"];
    // Deletion O(log n)
    menu.erase("dosa");
    // Searching inside a collection of key values pair(stored inspide a hashtable)
    string item;
    cin >> item;
    if (menu.count(item) == 0)
    {
        cout << item << " is not present" << endl;
    }
    else
    {
        cout << item << " is availbale and its price is = " << menu[item] << endl;
    }
    // We can iterate over all the key value pairs that are present
    for (pair<string, int> item : menu)
    {
        cout << item.first << "-" << item.second << endl;
    }
    return 0;
}
//Elements printed will be sorted in lexicographical order.