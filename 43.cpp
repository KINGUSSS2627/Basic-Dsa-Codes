// Find pair of element with sum k in unsorted array using hass table
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int key = 10;
    // a+b=10 , Finding maximum in an array
    int max = A[0];
    for (int i = 0; i < 10; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    // Creating an array of size equal to max in heap
    int *H;
    H = new int[max];
    // Initializing element of array H to 0
    for (int i = 0; i < max; i++)
    {
        H[i] = 0;
    }
    // For element at index A[i] we will made H[a[i]] as 1
    for (int i = 0; i < 10; i++)
    {
        H[A[i]] = 1;
    }
    // Checking if key-A[i]>=0 and H[key-A[i]] is not zero
    for (int i = 0; i < max; i++)
    {
        if (H[key - A[i]] != 0 && key - A[i] >= 0)
        {
            cout << A[i] << " " << key - A[i] << endl;
        }
        A[i]++;
    }
    delete[] H;
    return 0;
}