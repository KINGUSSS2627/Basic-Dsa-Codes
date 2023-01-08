#include <bits/stdc++.h>
using namespace std;
// Modular programming-program is break down into program
int area(int length, int breadth)
{
    return length * breadth;
}
int peri(int length, int breadth)
{
    return 2 * (length + breadth);
}
int main()
{

    int length, breadth;
    cout << "Enter Length and Breadth" << endl;
    cin >> length >> breadth;
    cout << "Perimeter is " << peri(length, breadth) << endl;
    cout << "Area is " << area(length, breadth);
    return 0;
}