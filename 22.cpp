#include <bits/stdc++.h>
using namespace std;
int main()
{
    // To increase size of dynamic array we need to make 1 more pointer of greater size and assign value to it
    int *p, *q;
    p = new int[5];
    p[0] = 1, p[1] = 3, p[2] = 5, p[3] = 7, p[4] = 9;
    q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = NULL;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}