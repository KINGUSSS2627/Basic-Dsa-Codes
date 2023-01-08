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
// Insert an element at sorted position in an sorted array
void InsertSort(struct Array *arr, int x)
{
    if (arr->length == arr->size)
    {
        return;
    }
    int i = arr->length - 1;
    while (arr->A[i] > x && i >= 0)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int ChechSort(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void Rearrange(struct Array *arr)
{
    int i = 0, j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}
void Display(struct Array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}
int main()
{
    struct Array arr = {{2, 3, 5, 10, 15}, 10, 5};
    Display(arr);
    InsertSort(&arr, 12);
    Display(arr);
    InsertSort(&arr, 7);
    Display(arr);
    cout << "The array is  sorted if output is 1 and unsorted if output is 0 the output is " << ChechSort(arr) << endl;
    struct Array arr2 = {{2, -3, 5, 10, -15, -7}, 10, 6};
    Rearrange(&arr2);
    Display(arr2);
    return 0;
}