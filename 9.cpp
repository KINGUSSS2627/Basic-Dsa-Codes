#include <bits/stdc++.h>
using namespace std;
// PASSED BY REFERENCE
// Here a is reffering to x and b is reffering to y the original x and y are affected
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 10, b = 20;
    swap(a, b);
    // The above function code is copied here during execution
    cout << a << " " << b;
    return 0;
}
