// Comparing two string and considering upper case and lower case as different
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    int i = 0, j = 0;
    for (i, j; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }
    if (A[i] == B[j])
        cout << "Equal";
    else if (A[i] > B[i])
        cout << "Greater";
    else
        cout << "Smaller";
    return 0;
}