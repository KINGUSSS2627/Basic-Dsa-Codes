// Example of a tree recursion
#include <bits/stdc++.h>
using namespace std;
void fun1(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        fun1(x - 1);
        fun1(x - 1);
    }
}
int main()
{
    fun1(3);
    return 0;
}