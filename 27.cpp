#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
// this function will search linearly the key by simply comparing itn with other element
int LinearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])

        {
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << LinearSearch(arr, 6);
    return 0;
}