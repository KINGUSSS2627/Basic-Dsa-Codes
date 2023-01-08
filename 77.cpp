// Parenthesis matching
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
};
Stack::Stack()
{
    top = nullptr;
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
    if (t == nullptr)
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
    if (top == nullptr)
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
int isBalanced(char *exp)
{
    Stack stk;

    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
        {
            stk.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (stk.isEmpty())
            {
                return false;
            }
            else
            {
                stk.pop();
            }
        }
    }
    return stk.isEmpty() ? true : false;
}
int main()
{
    char E[] = "((a+b)*(c-d))";
    cout << isBalanced(E) << endl;
    char F[] = "((a+b)*(c-d)))";
    cout << isBalanced(F) << endl;
    char G[] = "(((a+b)*(c-d))";
    cout << isBalanced(G) << endl;
    return 0;
}