// Counting words and vowels in a string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[] = "HOW ARE YOU";
    int v_count = 0, gap_count = 0, consonent_count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
        {
            v_count++;
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            consonent_count++;
        }
        else if (A[i] == ' ')
        {
            gap_count++;
        }
    }
    cout << " Vowel count " << v_count << "\n"
         << " Consonent count " << consonent_count << "\n"
         << " Gap count " << gap_count << "\n";
    return 0;
}