#include <bits/stdc++.h>
using namespace std;
int main()
{
    // c commands can be used in c++
    // if some compiler gives any error we can use #include<stdio.h>
    // if we initialize array with few elements then rest of elements will automatically initialize to 0
    // assigning values to elements or initializing the array
    // Declaration of array
    // a[0] = 12;a[1] = 15;a[2] = 25;
    // Declaration of array
    int a[] = {1, 2, 3, 4, 5};
    // we can input variable size of array inside [] only if we have not initialized it
    cout << sizeof(a) << endl;
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    printf("%d\n", a[0]);
    // displaying complete array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    return 0;
}