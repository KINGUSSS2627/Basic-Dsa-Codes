// Class for stack through linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
};
class Stack
{
private:
    Node *top;

public:
    Stack();
    ~Stack();
    void push(char x);
    char pop();
    int isEmpty();
    int stackTop();
    void display()
    {
        Node *p;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
} st;
Stack::Stack()
{
    top = NULL;
}
Stack::~Stack()
{
    Node *p = top;
    while (top)
    {
        top = top->next;
        delete p;
        p = top;
    }
}
void Stack::push(char x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char Stack::pop()
{
    Node *p;
    char x = -1;
    if (top == NULL)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}
int Stack::isEmpty()
{
    return top ? 0 : 1;
}
int Stack::stackTop()
{
    if (top)
    {
        return top->data;
    }
    return -1;
}
int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}
int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}
char *infix_postfix(char *infix)
{
    char *postfix;
    int len = strlen(infix);

    postfix = new char((len + 2) * sizeof(char));
    char i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (pre(infix[i]) > pre(st.stackTop()))
            {
                st.push(infix[i++]);
            }
            else
            {
                postfix[j++] = st.pop();
            }
        }
    }
    while (st.stackTop() != /*-1 This also shows hash*/ '#')
    {
        postfix[j++] = st.pop();
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "a+b*c+d/e";
    st.push('#');
    char *postfix = infix_postfix(infix);
    cout << postfix;
    return 0;
}