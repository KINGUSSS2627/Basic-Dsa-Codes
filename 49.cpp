// Reversing a string m1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "LANGUAGE";
    char B[9];
    int i = 0, j = 0;
    for (i; A[i] != '\0'; i++)
    {
        // In this loop i will increase to length+1 , +1 for null character
    }
    // Reducing length equivalent to length of words
    i = i - 1;
    for (j; i >= 0; i--, j++)
    {
        B[j] = A[i];
        // In this loop j will increase to length+1 , +1 for null character
    }
    // Making final charater to be null character
    B[j] = '\0';
    cout << B;
    return 0;
}