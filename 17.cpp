#include <bits/stdc++.h>
using namespace std;
// CLASS instead of struct
class Rectangle
{
    // Generally all members of class are private so we must use keyword public if we need to use them publically
public:
    int length;
    int breadth;
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};
int main()
{
    Rectangle r;
    int l, b;
    cout << "Enter l and b" << endl;
    cin >> l >> b;
    r.initialize(l, b);
    int a = r.area();
    int peri = r.perimeter();
    cout << "Area = " << a << "\nPerimeter = " << peri << endl;
    return 0;
}