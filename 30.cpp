// Binary search recursive
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
int recuBinarSearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return recuBinarSearch(a, l, mid - 1, key);
        }
        else
        {
            return recuBinarSearch(a, mid + 1, h, key);
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << recuBinarSearch(arr.A, 0, arr.length, 3);
    return 0;
}