#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    string key;
    T value;
    Node *next;
    Node(string key, T value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
template <typename T>
class Hashtable
{
    Node<T> **table;
    int cs; // Total entries that have been inserted
    int ts; // Total size of the table
    int hashFn(string key)
    {
        int idx = 0;
        int pow = 1;
        for (auto ch : key)
        {
            idx = (idx + ch * pow) % ts;
            pow = (pow * 29) % ts;
        }
        return idx;
    }
    void rehash()
    {
        // Save the ptr to the old table and we will do insertion in the new table
        Node<T> **oldtable = table;
        int oldts = ts;
        // Increase the table size
        cs = 0;
        ts = 2 * ts + 1;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
        // Copy elements from the old table to the new table
        for (int i = 0; i < oldts; i++)
        {
            Node<T> *temp = oldtable[i];
            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;
                insert(key, value);
                temp = temp->next;
            }
            if (oldtable[i] != NULL) // destroy the ith linked list
            {
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }

public:
    Hashtable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;
        table = new Node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, T value)
    {
        int idx = hashFn(key);
        Node<T> *n = new Node<T>(key, value);
        n->next = table[idx];
        table[idx] = n;
        cs++;
        float loadfactor = cs / float(ts);
        if (loadfactor > 0.7)
        {
            rehash();
        }
    }
    T *search(string key)
    {
        int idx = hashFn(key);
        Node<T> *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }
    void erase(string key)
    {
        int idx = hashFn(key);
        Node<T> *temp = table[idx];
        Node<T> *ptr = NULL;
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                if (ptr == NULL)
                {
                    table[idx] = temp->next;
                }
                else
                {
                    ptr->next = temp->next;
                }
                delete temp;
                return;
            }
            ptr = temp;
            temp = temp->next;
        }
        return;
    }
    void print()
    {
        // Iterate over the buckets
        for (int i = 0; i < ts; i++)
        {
            cout << "Bucket" << i << "->";
            Node<T> *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};