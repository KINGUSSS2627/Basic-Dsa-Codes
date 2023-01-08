// Implementation of stack using linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *top = NULL;
void push(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    Node *t;
    int x = -1;
    if (top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}
void display()
{
    Node *p;
    p == top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    // push(40);
    display();
    cout << pop();
    return 0;
}
// One more display call is not showing result