// Complete program for circular linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} * Head;
// Creating circular linked list
void create_circular_linkedlist(int A[], int n)
{
    Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
// To display circular linked list
void display(Node *h)
{
    do
    {
        cout << h->data << " ";
        h = h->next;
    } while (h != Head);
    cout << "\n";
}
// To display using recursion
void Rdisplay(Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        cout << h->data << " ";
        Rdisplay(h->next);
    }
    flag = 0;
}
// To find linked list
int length(Node *p)
{
    int length = 0;
    do
    {
        length++;
        p = p->next;
    } while (p != Head);
    return length;
}
void Insert(Node *p, int index, int data)
{
    if (index < 0 || index > length(Head))
    {
        cout << "Wrong index" << endl;
    }
    else
    {
        Node *t;
        if (index == 0)
        {
            t = new Node;
            t->data = data;
            if (Head == NULL)
            {
                Head = t;
                Head->next = Head;
            }
            else
            {
                while (p->next != Head)
                {
                    p = p->next;
                }
                p->next = t;
                t->next = Head;
                Head = t;
            }
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                p = p->next;
            }
            t = new Node;
            t->data = data;
            t->next = p->next;
            p->next = t;
        }
    }
}
int Delete(Node *p, int index)
{
    Node *q;
    int x;
    if (index < 0 || index > length(Head))
    {
        return -1;
    }
    if (index == 1)
    {
        while (p->next != Head)
            x = Head->data;
        if (Head == p)
        {
            delete Head;
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            delete Head;
            Head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create_circular_linkedlist(A, 5);
    display(Head);
    Insert(Head, 2, 10);
    Rdisplay(Head);
    cout << endl;
    Delete(Head, 4);
    display(Head);
    return 0;
}