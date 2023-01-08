// Fibonacci series
#include <bits/stdc++.h>
using namespace std;
int rec_fib(int n)
{
    if (n <= 1)
        return n;
    else
        return (rec_fib(n - 1) + rec_fib(n - 2));
}
int itr_fib(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int F[100];
int modified_fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = modified_fib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = modified_fib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    cout << rec_fib(4 + 1);
    return 0;
}
