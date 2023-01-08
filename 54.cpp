// Checking wheather two string is anagram or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "decimal";
    char B[] = "medical";
    int la = 0, lb = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        la++;
    }
    for (int i = 0; B[i] != '\0'; i++)
    {
        lb++;
    }
    if (la == lb)
    {
        int i, H[26] = {0};
        for (i = 0; A[i] != '\0'; i++)
        {
            H[A[i] - 97] += 1;
        }
        for (i = 0; B[i] != '\0'; i++)
        {
            H[B[i] - 97] -= 1;
            if (H[B[i] - 97] < 0)
            {
                cout << "Not anagram" << endl;
                break;
            }
        }
        if (B[i] == '\0')
        {
            cout << "Its anagram" << endl;
        }
    }
    else
    {
        cout << "Not anagram" << endl;
    }
    return 0;
}