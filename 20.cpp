#include <bits/stdc++.h>
using namespace std;
int main()
{
    // different ways to declare and initialize an array
    int a[5];
    int b[5] = {1, 2, 3, 4, 5};
    int c[5] = {2, 4, 6};
    int d[5] = {0};
    int e[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] << " ";
    }
    return 0;
}