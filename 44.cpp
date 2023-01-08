// Find pair of element with sum k in sorted array using hass table
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // As array is sorted end of array contain big and start contains small element therefor if it excceds we will reduce j if it is less we will increse 1 and if they are equal i++ ,j--
    int A[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int i = 0, j = 10 - 1, key = 10;
    while (i < j)
    {
        if (A[i] + A[j] == key)
        {
            cout << A[i] << " " << A[j] << endl;
            i++, j--;
        }
        if (A[i] + A[j] > key)
        {
            j--;
        }
        if (A[i] + A[j] < key)
        {
            i++;
        }
    }
    return 0;
}