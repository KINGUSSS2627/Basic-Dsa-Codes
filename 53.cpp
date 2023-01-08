// Using masking to find repetation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "finding";
    int H = 0, x = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        // Taking x as another variable make it as 1 as we can use anding to find wheather a bit is on  or off
        x = 1;
        // left Shifting x by A[i]-97
        x = x << (A[i] - 91);
        // Anding H and x
        if ((x & H) > 0)
        {
            cout << A[i] << " is duplicate " << endl;
        }
        // Or-ing will not affact the status of bit
        else
        {
            H = x | H;
        }
    }
    return 0;
}