#include <iostream>
#include "list.h"
using namespace std;
int main()
{
    List x;
    int a, p;
    
    x.push_front(20);
    x.push_back(15);
    x.push_back(7);
    x.push_back(12);
   // x.insert_mid(66, 3);
     

    Node *head = x.begin();
    x.reverse(head);
    while (head != NULL)
    {
        cout << head->getdata() << " -> ";
        head = head->next;
    }
    cout << endl;
    x.reverse(head);
    cout<<"Reversed linked list is :- "<<endl;
   // Node *head = x.begin();
    while(head != NULL)
    {
        cout << head->getdata() << " -> ";
        head = head->next;
    }

    cout << "Enter element to be searched " << endl;
    cin >> a;
    cout << "Element found at index  = " << x.recursive_search(a) << endl;
    
    x.pop_front();
    cout << "Enter the position " << endl;
    cin >> p;
    x.pop_middle(p);
    
}
