// Implementation of stack using linked list
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int size;
    int top;
    int *S;
};
void Create_stack(Stack *st)
{
    cout << "Enter size of stack" << endl;
    cin >> st->size;
    st->top = -1; // Initializing the top before index 0
    st->S = new int[st->size];
}
void Display_Stack(Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}
void push_in_stack(Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow " << endl;
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop_from_stack(Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "Stack Underflow " << endl;
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int peek_in_stack(Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        cout << "Invalid index" << endl;
    else
    {
        x = st.S[st.top - index + 1];
        return x;
    }
}
int isEmpty(Stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}
int isFull(Stack st)
{
    if (st.top == st.size - 1)
        return 1;
    else
        return 0;
}
int Stacktop(Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];
    else
        return -1;
}
int main()
{
    Stack st;
    Create_stack(&st);
    push_in_stack(&st, 10);
    push_in_stack(&st, 20);
    push_in_stack(&st, 30);
    push_in_stack(&st, 40);
    push_in_stack(&st, 50);
    Display_Stack(st);
    pop_from_stack(&st);
    Display_Stack(st);
    cout << peek_in_stack(st, 2) << endl;
    return 0;
}