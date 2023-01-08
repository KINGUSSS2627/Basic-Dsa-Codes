// Finding duplicates in string using hass
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "finding";
    // If considering both csae same size = 26  , if both case considered different then size = 52;
    int H[26] = {0};
    for (int i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (H[i] >= 1)
        {
            cout << char(i + 97) << "  " << H[i] << " times" << endl;
        }
    }
    return 0;
}