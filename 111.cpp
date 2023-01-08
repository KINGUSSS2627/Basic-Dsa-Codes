// Static and global variable in recursive call
#include <bits/stdc++.h>
using namespace std;
// General recursion
int fun(int x)
{
    if (x > 0)
    {
        return fun(x - 1) + x;
    }
    return 0;
}
// recursion with static
int fun1(int x)
{
    static int a = 4;
    if (x > 0)
    {
        a++;
        return fun1(x - 1) + a;
    }
    return 0;
}
// recursion with global
int a = 6;
int fun2(int x)
{
    if (x > 0)
    {
        a++;
        return fun2(x - 1) + a;
    }
    return 0;
}
int main()
{
    cout << fun(5);
    cout << endl;
    cout << fun1(5);
    cout << endl;
    cout << fun2(5);
    cout << endl;
    cout << fun2(5);
    return 0;
}