// Find pair of element with sum k in unsorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int key = 10; // a+b=10
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[i] + A[j] == key)
            {
                cout << "(" << A[i] << "," << A[j] << ")" << endl;
            }
        }
    }

    return 0;
}