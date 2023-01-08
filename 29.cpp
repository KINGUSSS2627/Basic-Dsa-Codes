// Binary Search iterative
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        // to search left side of mid
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        // to search right side of mid
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << BinarySearch(arr, 3);
    return 0;
}