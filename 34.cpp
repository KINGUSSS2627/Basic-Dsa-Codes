#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
// This mearge will take 2 array as parameter then will merge them in ascending order
struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr1->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = arr2->size + arr1->size;
    return arr3;
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
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    Display(arr1);
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    Display(arr2);
    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);
    return 0;
}