// Head and tail recursion
#include <bits/stdc++.h>
using namespace std;
// Tail recursion i.e. first call function recursively then print
void fun1(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        fun1(x - 1);
    }
}
// Head recursion i.e. first print then call function again recursively
void fun2(int x)
{
    if (x > 0)
    {
        fun2(x - 1);
        cout << x << " ";
    }
}
int main()
{
    fun1(5);
    cout << endl;
    fun2(5);
    return 0;
}