// Length of string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S[] = "WELCOME";
    int len = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        len++;
    }
    cout << "Length of string is " << len << endl;
    // Length will be number of element in S
    return 0;
}