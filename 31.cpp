// Basic operation on array
#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
// To get a value at particular index of a given array
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
// Change the value at particular index
void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}
// Find max element of array
int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}
// Find Min element of array
int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}
// Find sum of element of an array
int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}
// Avg of element
float Avg(struct Array arr)
{
    return ((float)Sum(arr) / arr.length);
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
    cout << Get(arr, 2) << endl;
    ;
    cout << "Befor set" << endl;
    Display(arr);
    Set(&arr, 0, 15);
    cout << "After set" << endl;
    Display(arr);
    cout << "Max element = " << Max(arr) << endl;
    cout << "Min element = " << Min(arr) << endl;
    cout << "Sum is = " << Sum(arr) << endl;
    cout << "Avg is = " << Avg(arr) << endl;
    return 0;
}