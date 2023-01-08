#include <bits/stdc++.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r1)
{
    r1.length = 20;
    // only value of r1 changes not r
    cout << "Length  " << r1.length << endl
         << "Breadth " << r1.breadth << endl;
}
int main()
{
    struct rectangle r = {10, 5};
    fun(r);
    // While calling a new copy of struct rectanglr r is copied to r1 and any changes in them will not be reflected in r
    cout << "Length " << r.length << endl
         << "Breadth " << r.breadth;
    return 0;
}