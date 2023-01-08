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
// Delete an element at any index
int Delete(Node *p, int index)
{
    Node *q;
    int x = -1;
    if (index < 1 || index > length_of_linked_list(p))
    {
        return -1;
    }
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    display(first);
    cout << endl;
    Delete(first, 3);
    display(first);
    return 0;
}