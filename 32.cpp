// Reverse , shift , rotate
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
void Reverse(struct Array *arr)
{
    int *B;
    B = new int[arr->length * sizeof(int)];
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}
void Reverse2(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}
// Display element of an array
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
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);
    Reverse(&arr);
    Display(arr);
    Reverse2(&arr);
    Display(arr);
    return 0;
}