// ncr=n!/(n-r)!*r!
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}
int combination(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}
int rec_combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else
        return (rec_combination(n - 1, r - 1) + rec_combination(n - 1, r));
}
int main()
{
    cout << combination(5, 2) << endl;
    cout << rec_combination(5, 2);
    return 0;
}