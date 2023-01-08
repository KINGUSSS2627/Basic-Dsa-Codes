#include <bits/stdc++.h>
using namespace std;
// PASSED BY ADDRESS
// Here a is used as x and b is used as y the original x and y are affected
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    a = 10, b = 20;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}
