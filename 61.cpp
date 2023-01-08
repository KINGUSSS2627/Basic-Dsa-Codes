#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;
// Here first is a global pointer
void create_linkedlist(int A[], int n)
{
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1 /*As first element already created*/; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// Iterative way to print linked list
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
};
// Linear search to find the key in linked list (iterative)
Node *linear_search(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}
// Linear search to find the key in linked list (Recursive)
Node *Rlinear_search(Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    else
    {
        return Rlinear_search(p->next, key);
    }
}
// Modified linear search i.e head shift for multiple call
Node *modified_linear_search(Node *p, int key)
{
    Node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            if (p == first)
            {
                return p;
            }
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
int main()
{
    int A[] = {3, 5, 7, 10, 15, 8, 12, 20};
    create_linkedlist(A, 8);
    display(first);
    cout << endl;
    // Using liner_search
    Node *temp = linear_search(first, 10);
    if (temp != 0)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    // Using Rlinear_search
    Node *temp1 = Rlinear_search(first, 11);
    if (temp1 != 0)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    // Using modofied_linear_search
    Node *temp2 = modified_linear_search(first, 3);
    if (temp2 != 0)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    display(first);
    return 0;
}