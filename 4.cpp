#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    // this is a reference to a from r now r=a
    int &r = a;
    cout << r << endl;
    cout << a << endl;
    // if now we made int b=25;r=b; this will now imply thatr r is now referring to b this statement eill simply concert value of a to 25
    a = 25;
    cout << r << endl;
    cout << a << endl;
    // reference is not a pointer and also it does not consume any memory
    int b = 30;
    r = b;
    cout << r << endl;
    cout << a << endl;
    return 0;
}