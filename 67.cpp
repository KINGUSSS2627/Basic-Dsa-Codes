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
// Reversing using a pointer q to traverse and reach the end and from end we can trace back the address to prev pointer
void Reverse1(Node *p)
{
    int *A;
    Node *q = p; // Pointer to traverse
    A = new int[length_of_linked_list(first)];
    int i = 0;
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}
void Reverse2(Node *p)
{
    Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void Reverse3(Node *q, Node *p)
{
    if (p != NULL)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    display(first);
    cout << endl;
    Reverse1(first);
    display(first);
    cout << endl;
    Reverse2(first);
    display(first);
    cout << endl;
    Reverse3(NULL, first);
    display(first);
    return 0;
}