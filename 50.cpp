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
    for (int j = 0; j < i; j++, i--)
    {
        // Swapiing
        char t;
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    cout << A;
    return 0;
}