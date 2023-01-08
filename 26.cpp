// This prog is about deleting element at ith index
#include <bits/stdc++.h>
using namespace std;
// Constructing array with parameters
struct Array
{
    int A[10];
    int size;
    int length;
};
// func to display
void Display(struct Array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}
// function to delete
int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i <= arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
            arr->length--;
        }
        return x;
    }
    return 0;
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr1);
    Delete(&arr1, 3);
    Display(arr1);
    return 0;
}