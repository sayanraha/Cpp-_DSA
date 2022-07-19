#include <iostream>
using namespace std;
class List; //Forward declaration
class Node
{
 int data;
public:
   
    Node *next;
    Node(int d) : data(d), next(NULL) {}
    int getdata()
    {
        return data;
    }
    friend class List;
    ~Node()
    {
        if (next != NULL)
        {
            delete next; //RECURSIVE CALL IS HAPPENING
        }
        cout << "Deleting node with data = " << data << endl;
    }
};

class List
{
    Node *head;
    Node *tail;

    int searchHelper(Node *start, int key)
    {
        if (start == NULL) //base case
        {
            return -1;
        }
        if (start->data == key)
        {
            return 0;
        }
        int subidx = searchHelper(start->next, key);
        if (subidx == -1)
        {
            return -1;
        }
        return subidx + 1;
    }

public:
    Node *begin()
    {
        return head;
    }
    List() : head(NULL), tail(NULL) {}
    void push_front(int data)
    {
        if (head == NULL) //Inserting in an empty list
        {
            Node *n = new Node(data); //Dynamic memory allocation
            head = tail = n;
            return;
        }
        else //Inserting at the beginning of the list
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data); //Dynamic memory allocation
            head = tail = n;
            return;
        }
        else //Inserting at the end of the list
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert_mid(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        Node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
    int search(int key) //ITERATIVE APPROACH
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }
    int recursive_search(int key)
    {
        int idx = searchHelper(head, key);
        return idx;
    }
    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(int a)
    {
        Node *temp, *ptr = head;
        while (ptr->next != NULL)
        {
            if (ptr->next->data == a)
            {
                temp = ptr->next;
                ptr->next = temp->next;
                temp->next = NULL;
                delete temp;
            }
            ptr = ptr->next;
        }
    }
    void pop_middle(int pos)
    {
        Node *temp = head;
        if (head == NULL)
        {
            return;
        }
        if (pos == 0)
        {
            head = head->next;
            free(temp);
            return;
        }
        for (int i = 0; temp != NULL && i < pos - 1; i++)
        {
            temp = temp->next;
        }
        // If position is more than number of nodes
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        else
        {
            Node *next = temp->next->next;
            free(temp->next);
            temp->next = next;
        }
    }
    void reverse(Node* &head)
    {
        Node * current,* n,*p;
        p = NULL;
        current = n = head;
        while(n!=NULL)
        {
            n = current -> next;
            current->next = p;
            p = current;
            current = n;
        } 
        head = p;
    }
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    
};
