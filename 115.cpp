// Sum of n natural number using recursion
#include <bits/stdc++.h>
using namespace std;
int sum_natural_no(int n)
{
    if (n > 0)
        return (n + sum_natural_no(n - 1));
    else if (n == 0)
        return 0;
}
int main()
{
    cout << sum_natural_no(10);
    return 0;
}