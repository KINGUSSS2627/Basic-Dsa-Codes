#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Monolithic programming-complete program in main only no use of function of class
    int length, breadth;
    cout << "Enter Length and Breadth of rectangle" << endl;
    cin >> length >> breadth;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    cout << area << endl;
    cout << peri << endl;
    return 0;
}