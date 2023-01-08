// Checking sorted status of linked list
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
int isSorted(Node *p)
{
    int x = -65536; // min int valve in environment
    while (p != NULL)
    {
        if (p->data < x)
        {
            return 0;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return 1;
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create_linkedlist(A, 5);
    display(first);
    cout << endl;
    int flag = isSorted(first);
    if (flag != 0)
    {
        cout << "Sorted linked list" << endl;
    }
    else
    {
        cout << "Not a sorted linked list" << endl;
    }

    return 0;
}