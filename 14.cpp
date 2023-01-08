#include <bits/stdc++.h>
using namespace std;
// passing structure using dynamic memory allocation
struct rectangle
{
    int length;
    int breadth;
};
struct rectangle *fun()
{
    struct rectangle *p;
    p = new rectangle;
    p->length = 15;
    p->breadth = 7;
    return p;
}
int main()
{
    struct rectangle *ptr = fun();
    cout << " Length " << ptr->length << " breadth " << ptr->breadth;
    return 0;
}