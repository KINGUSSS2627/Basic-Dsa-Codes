// Mearging from sorted linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;
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
// Create linked list 2
void create_linkedlist2(int A[], int n)
{
    Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;
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
// Finding length of linked list
int length_of_linked_list(Node *p)
{
    int len = 0;
    while (p != 0 /*NULL*/)
    {
        len++;
        p = p->next;
    }
    return len;
}
// In mearging we compare eaxh element so the result of mearge of two ordered linked list becomes an ordered link list
void Merge(Node *p, Node *q)
{
    Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p != NULL && q != NULL)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p != NULL)
    {
        last->next = p;
    }
    if (q != NULL)
    {
        last->next = q;
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    int B[] = {5, 15, 25, 35, 45};
    create_linkedlist2(B, 5);
    display(first);
    cout << endl;
    display(second);
    cout << endl;
    Merge(first, second);
    display(third);
    cout << endl;
    return 0;
}