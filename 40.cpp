// Counting reoccourance of duplicate element ins sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == A[i + 1])
        {
            int j = i + 1;
            while (A[j] == A[i])
            {
                j++;
            }
            cout << A[i] << " appers " << j - i << " times " << endl;
            i = j - 1;
        }
    }
    return 0;
}