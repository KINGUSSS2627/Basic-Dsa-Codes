#include <bits/stdc++.h>
using namespace std;
// Array can be passed only by address
void fun(int a[], int n)
{
    // Ths will give size of a pointer not an array
    cout << sizeof(a) / sizeof(int) << endl;
    // The array is passed by address therefore changes made in array inside this also affects the array
}
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(a, 5);
    // this for each loop cant be used for pointers
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << sizeof(a) / sizeof(int) << endl;
    return 0;
}
