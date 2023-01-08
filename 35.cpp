// Set operation on array i.e. union , intersection , set difference
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->length && j < arr2->length)
    {
        // If element of A is less take from it
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        // If element of B is less take from it
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        // If element of both A and B are equal take 1 of them but increrament both
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    // Copying element from A
    for (i; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    // Copying element from B
    for (j; j < arr1->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    // coping common element of A and B
    arr3->length = k;
    arr3->size = arr2->size + arr1->size;
    return arr3;
}
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->length && j < arr2->length)
    {
        // If element of A is less take from it
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        // If element of B is less take from it
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        // If element of both A and B are equal take 1 of them but increrament both
        else if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = arr2->size + arr1->size;
    return arr3;
}
struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;
    while (i < arr1->length && j < arr2->length)
    {
        // If element of A is less take from it
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        // Only elemnt in set 1 need to be selected but for comparison purpose we need to increase j
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        // If element of both A and B are equal then we will not copy anything but will have to increase i and j
        else
        {
            i++, j++;
        }
    }
    // Copying element from A
    for (i; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    arr3->length = k;
    arr3->size = arr1->size + arr2->size;
    return arr3;
}
void Display(struct Array arr)
{
    int i;
    cout << " " << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}
int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
    // As above two array are soreted thts why we can use merge logic
    struct Array *arr3, *arr4, *arr5;
    arr3 = Union(&arr1, &arr2);
    cout << "Union elements are ";
    Display(*arr3);
    cout << endl;
    cout << "Intersection elements are ";
    arr4 = Intersection(&arr1, &arr2);
    Display(*arr4);
    cout << endl;
    cout << "Difference elements are ";
    arr5 = Difference(&arr1, &arr2);
    Display(*arr5);
    cout << endl;
    return 0;
}