// Finding missing element in sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18};
    int low = A[0];
    // In a sorted array difference between element between at index i and index is constant
    int diff = low - 0;
    for (int i = 0; i < 11; i++)
    {
        // If difference is not equal to A[i]-i
        if (A[i] - i != diff)
        {
            // If diff is less than difference between element between at index i and index i
            // Till this diff is less this loop should work
            while (diff < A[i] - i)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
    return 0;
}
