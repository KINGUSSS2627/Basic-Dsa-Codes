// Changing case of string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "WeLcOmE";
    for (int i = 0; A[i] != '\0'; i++)
    {
        // Converting high to low
        if (A[i] >= 65 && A[i] <= 90)
        {
            A[i] = A[i] + 32;
        }
        // Converting low to high
        else if (A[i] >= 97 && A[i] <= 122)
        {
            A[i] = A[i] - 32;
        }
    }
    cout << A;
    return 0;
}