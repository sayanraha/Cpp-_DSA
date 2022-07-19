template <typename T>
class Stack;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T d)
    {
        data = d;
    }
};
template <typename T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(T item)
    {
        Node<T> *temp = new Node<T>(item);
        temp->next = head;
        head = temp;
    }
    bool empty()
    {
        return head == NULL;
    }
    T top()
    {
        return head->data;
    }
    void pop()
    {
        if(head!=NULL)
        {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }
    }
};