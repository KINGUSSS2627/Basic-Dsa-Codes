// Permutation of string using swap
#include <bits/stdc++.h>
using namespace std;
void perm(char S[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << S << endl;
    }
    else
    {
        for (int i = l; i < h; i++)
        {
            // Exchanging places of element
            swap(S[l], S[i]);
            // Again calling perm for smaller part
            perm(S, l + 1, h);
            // Swap back for back tracking
            swap(S[l], S[i]);
        }
    }
}
int main()
{
    char S[] = "ABC";
    perm(S, 0, 3);
    return 0;
}