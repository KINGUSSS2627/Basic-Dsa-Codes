// Sum of all element in nodes of linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *first = NULL;
// Here first is a global pointer
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
// Iterative way to print linked list
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
int Recursive_count(Node *p)
{
    if (p != NULL)
    {
        return Recursive_count(p->next) + 1;
    }
}
// Finding sum of data by iterative way
int sum(Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
// Recursive way to get sum of element at node
int Rsum(Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return Rsum(p->next) + p->data;
    }
}
int main()
{
    int A[] = {3, 5, 7, 10, 15, 8, 12, 20};
    create_linkedlist(A, 8);
    display(first);
    cout << "\n";
    cout << "No of nodes in linked list " << length_of_linked_list(first);
    cout << "\nNo of nodes in linked list " << Recursive_count(first);
    cout << "\nSum of all data part = " << sum(first);
    cout << "\nSum of all data part = " << Rsum(first);
    return 0;
}