// Finding missing element in this unsorted array
// Using hass table
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Given unsorted array , to find missing element we will create another of length = max element and will initialize it to zero , then if we found any number equivalent to index i increament value of index i now if any index is having still 0 as it value it means this element is missing
    int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    // Finding max element
    int max = A[0];
    for (int i = 0; i < 10; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    int high = max;
    int min = A[0];
    for (int i = 0; i < 10; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    int low = min;
    int *H;
    H = new int(max);
    for (int k = 0; k < max; k++)
    {
        H[k] = 0;
    }
    for (int j = 0; j < 10; j++)
    {
        H[A[j]]++;
    }
    cout << "missing elements= " << endl;
    for (int i = low; i < high; i++)
    {
        if (H[i] == 0)
        {
            cout << i << " ";
        }
    }
    delete[] H;
    return 0;
}