// All about doubly linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
} *first = NULL;
void create(int A[], int n)
{
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int length(Node *p)
{
    int length = 0;
    while (p != NULL)
    {
        length++;
        p = p->next;
    }
    return length;
}
void Insert(Node *p, int index, int x)
{
    Node *t;
    int i;
    if (index < 0 || index > length(first))
    {
        return;
    }
    if (index == 0)
    {
        t = new Node;
        t->data = x;
        p->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }

        t = new Node;
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if (p->data != NULL)
            p->next->prev = t;
        p->next = t;
    }
}
int Delete(Node *p, int index)
{
    Node *q;
    int x = -1;
    if (index < 0 || index > length(first))
        return -1;
    if (index == 1)
    {
        first = first->next;
        if (first != NULL)
        {
            first->prev = NULL;
        }
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next != NULL)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        delete p;
    }
}
void Reverse(Node *p)
{
    Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if (p != NULL && p->next == NULL)
        {
            first = p;
        }
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    cout << "\n";
    cout << "length of linked list = " << length(first);
    cout << "\n";
    Display(first);
    Insert(first, 3, 5);
    cout << "\n";
    Display(first);
    Delete(first, 3);
    cout << "\n";
    Display(first);
    Reverse(first);
    cout << "\n";
    Display(first);
    return 0;
}