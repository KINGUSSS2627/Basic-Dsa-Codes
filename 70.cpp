// Removing duplicate from sorted linked list
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
int isLoop(Node *f)
{
    Node *p, *q;
    p = q = first;
    do
    {
        p = p->next;
        q = q->next;
        if (q != NULL)
        {
            q = q->next;
        }
        else
        {
            q = NULL;
        }

    } while (p != NULL && q != NULL && p != q);
    if (p == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    Node *t1, *t2;
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    // By above 3 steps a loop is created through which last part of link list point on 3rd node
    int z = isLoop(first);
    if (z == 1)
    {
        cout << "LOOP is there" << endl;
    }
    else
    {
        cout << "LOOP is not there" << endl;
    }
    return 0;
}