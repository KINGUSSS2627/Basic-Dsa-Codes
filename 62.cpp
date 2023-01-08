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
void Insert(Node *p, int index /*position*/, int data)
{

    if (index < 0 || index > length_of_linked_list(first))
    {
        return;
    }
    Node *t;
    t = new Node;
    t->data = data;
    if (index == 1)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}
int main()
{
    int A[] = {3, 5, 7};
    create_linkedlist(A, 3);
    display(first);
    cout << endl;
    Insert(first, 0, 10);
    display(first);
    cout << endl;
    Insert(first, 1, 2);
    display(first);
}
