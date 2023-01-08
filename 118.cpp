// Taylor series
#include <bits/stdc++.h>
using namespace std;
float taylor_rec(int x, int n)
{
    static int p = 1, f = 1;
    float r;
    if (n == 0)
        return 1;
    else
    {
        r = taylor_rec(x, n - 1);
        p = p * x;
        f = f * n;
        return r + (float)p / f;
    }
}
float modified_taylor_iterative(int x, int n)
{
    float s = 1;
    for (; n > 0; n--)
    {
        s = 1 + ((float)x / n) * s;
    }
    return s;
}
float modified_taylor_rec(float x, float n)
{
    static float s = 1;
    if (n == 0)
        return s;
    else
    {
        s = 1 + ((float)x / n);
        return modified_taylor_rec(x, n - 1);
    }
}
int main()
{
    cout << taylor_rec(1, 3) << endl;
    cout << modified_taylor_iterative(1, 3) << endl;
    cout << modified_taylor_rec(1, 3) << endl;
    return 0;
}