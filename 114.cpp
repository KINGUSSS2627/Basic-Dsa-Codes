// Example of nested recursion
#include <bits/stdc++.h>
using namespace std;
int fun1(int x)
{
    if (x > 100)
    {
        return (x - 10);
    }
    else
    {
        return fun1(fun1(x + 11));
    }
}
int main()
{
    cout << fun1(95);
    return 0;
}