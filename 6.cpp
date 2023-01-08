#include <bits/stdc++.h>
using namespace std;
// Parameters used in fuction are called as formal parameter
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int num1 = 5, num2 = 10, sum;
    // Parameters used while calling a function is called as actual parameters
    sum = add(num1, num2);
    // Function calling
    cout << sum;
    return 0;
}