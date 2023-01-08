#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;
    Rectangle *p = &r;
    // To access a member through pointer we shold use arrow(->) instead of dot(.)
    cout << p->length << endl;
    cout << p->breadth << endl;
    // creatinga object in heap using pointer
    Rectangle *p1;
    p = new Rectangle;
    p1->length = 15;
    p1->breadth = 7;
    cout << p1->length << endl;
    cout << p1->breadth << endl;
    return 0;
}