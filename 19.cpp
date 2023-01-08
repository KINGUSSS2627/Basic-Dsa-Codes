#include <bits/stdc++.h>
using namespace std;
template <class t>
class arithemetic
{
private:
    t a;
    t b;

public:
    arithemetic(t a, t b);
    t add();
    t sub();
};
// Function are declared outside the class hence they need to tell ther scope
template <class t>
arithemetic<t>::arithemetic(t a, t b)
{
    // this is used as pointer to class variables
    this->a = a;
    this->b = b;
}
template <class t>
t arithemetic<t>::add()
{
    t c;
    c = a + b;
    return c;
}
template <class t>
t arithemetic<t>::sub()
{
    t c;
    c = a - b;
    return c;
}
int main()
{
    arithemetic<int> ar(10, 5), ar2(15, 7);
    cout << "add " << ar.add() << endl;
    cout << "sub " << ar.sub() << endl;
    return 0;
}