// Finding min and max in linked list
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
// Iterative way to find max element in linked list
int max(Node *p)
{
    int m = first->data /*-pow(2, 30)*/;
    while (p != NULL)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}
// Recursive way to find max element of the linked list
int Rmax(Node *p)
{
    if (p->next == NULL)
    {
        return p->data;
    }
    else
    {
        int x = Rmax(p->next);
        if (x > p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
}
// Iterative way to find min element in linked list
int min(Node *p)
{
    int m = pow(2, 31) - 1 /*first->data is also used*/;
    while (p != NULL)
    {
        if (p->data < m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}
int main()
{
    int A[] = {-3, -5, -7, -10, -15, -8, -12, -20};
    create_linkedlist(A, 8);
    display(first);
    cout << "\nMax element is = " << max(first);
    cout << "\nMin element is = " << min(first);
    cout << "\nMax element is = " << Rmax(first);
    return 0;
}