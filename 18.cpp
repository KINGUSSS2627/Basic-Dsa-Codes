#include <bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // This is a default constructor whch will invoke at the same time of calling class
    rectangle()
    {
        int length = 0;
        int breadth = 0;
    }
    // This is a parameterised constructor
    rectangle(int l, int b)
    {
        int length = l;
        int breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    // This is a destructor here we can destry the space occupied in dynamic memory allocation
    ~rectangle()
    {
    }
};
int main()
{
    rectangle r;
    r.getlength();
    cout << "area = " << r.area() << endl;
    cout << "perimeter = " << r.perimeter() << endl;
    return 0;
}