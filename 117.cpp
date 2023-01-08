// This is basic prog of power function using recursion
#include <bits/stdc++.h>
using namespace std;
int power1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return power1(m, n - 1) * m;
}
int power2(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power2(m * m, n / 2);
    else
        return m * power2(m * m, n / 2);
}
int main()
{
    cout << power1(2, 3) << endl;
    cout << power2(4, 3) << endl;
    return 0;
}