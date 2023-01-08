// Permution of string using backtracking , bruteforce , trees
#include <bits/stdc++.h>
using namespace std;
void permutation(char S[], int k)
{
    static int A[10] = {0};
    static int Result[10];
    int i;
    // If we have reached till end of string then print string
    if (S[k] == '\0')
    {
        Result[k] = '\0';
        // For printing the string
        for (int i = 0; i < k; i++)
        {
            cout << char(Result[i]);
        }
        cout << endl;
    }
    else
    {
        for (i = 0; S[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                // A[i]= 0 or 1 act as switch
                // Result will take S[i] for i=0,1,2
                Result[k] = S[i];
                A[i] = 1;
                // Again calling permutation
                permutation(S, k + 1);
                A[i] = 0;
            }
        }
    }
}
int main()
{
    char S[] = "ABC";
    permutation(S, 0);
    return 0;
}