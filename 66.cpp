// Removing duplicate from sorted linked list
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
void RemoveDuplicate(Node *p)
{
    Node *q = p->next; // pointer p precciding q
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
int main()
{
    int A[] = {10, 20, 20, 20, 30, 40, 50};
    create_linkedlist(A, 7);
    display(first);
    cout << endl;
    RemoveDuplicate(first);
    display(first);
    return 0;
}