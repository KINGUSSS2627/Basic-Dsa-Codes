// Finding duplicate in sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    // As it is sorted we will compare i with i+1 if same then print it But in case of 15 15 15 , 2 times or more repetation we need to store lastduplicate and and esure to dont print it two times
    int last_duplicate = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == A[i + 1] && A[i] != last_duplicate)
        {
            cout << A[i] << " ";
            last_duplicate = A[i];
        }
    }
    cout << " are the missing element" << endl;
    return 0;
}