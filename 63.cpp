// Inserted in sorted array
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;
// Create linked list
void create_linkedlist(int A[], int n)
{
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// To print linked list
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
};
void sorted_insert(Node *p, int x)
{
    Node *t, *q = NULL /* q will follow p*/;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        // After checking in we need to insert at first
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    display(first);
    cout << endl;
    sorted_insert(first, 35);
    display(first);
    return 0;
}