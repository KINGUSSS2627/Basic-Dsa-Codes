// Tower of hanoi
#include <bits/stdc++.h>
using namespace std;
void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        // Transfer a to cb using c
        TOH(n - 1, a, c, b);
        // print this operation i.e a , c
        cout << "( " << a << " , " << c << " )"
             << " ";
        // Transfer this operation fron b to c using a
        TOH(n - 1, b, a, c);
    }
}
int main()
{
    TOH(3, 1, 2, 3);
    return 0;
}