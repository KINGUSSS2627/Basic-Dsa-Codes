// Creating linked list and displaying it through recursive call
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;
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
// Recursive way to display linked list
void Rdisplay(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        Rdisplay(p->next);
    }
};
int main()
{

    int A[] = {3, 5, 7, 10, 15};
    create_linkedlist(A, 5);
    Rdisplay(first);
    return 0;
}