#include <bits/stdc++.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    char x;
};
// the above defination of structure dont consume any memory unless member is created
// member can be created with defination of struct
int main()
{
    // declaring a structure even it can be declared outside main
    struct rectangle r1;
    r1 = {10, 5}; // can put values
    cout << "size is " << sizeof(r1) << endl;
    /*this will give 12 as output (4+4)(int)+(4)(char) it is easy for machinr to read 4 bytes so it allocate 4 bytes to char but will utilise only 1 this is called as padding of structure later on it will discard rest of unutilized space*/
    cout << r1.breadth << endl;
    cout << r1.length << endl;
    // to access a member a dot operator is being used
    return 0;
}