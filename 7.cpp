#include <bits/stdc++.h>
using namespace std;
// PASSED BY VALUE
// Here a is copied to x and b is copied to y the original x and y are not affected
void swap(int x, int y)
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
    cout << a << " " << b;
    return 0;
}
