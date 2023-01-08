#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// this function will search linearly the key by simply comparing itn with other element
int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])

        {
            // This swap fuction will take our key one step closer to index 0 which will eventually reduces time complexity ,this is known as tranposition
            swap(&arr->A[i], &arr->A[i - 1]);
            return i - 1;
            // One more way is that we can change a[i] with a[0] which will reduce repetative search tc from   O(n) to O(1) in 1st step itself
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    cout << LinearSearch(&arr, 6);
    return 0;
}