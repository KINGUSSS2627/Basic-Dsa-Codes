#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    cout << a << endl;
    // declaration of pointer
    int *p;
    // assigning p the address of a
    p = &a;
    // printing a with help of derefrencing a pointer
    cout << *p << endl;
    // address of a
    cout << p << endl;
    int A[5] = {2, 4, 6, 8, 10};
    int *p1;
    p1 = A;
    // name of an array itself acts as a address or we can also write &A[0] insteasd of A
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
        // we can even use p[i] , i.e. p can act as array
    }
    cout << endl;
    // this is a code to generate a array in the heap section of the memory
    int *p2;
    // dynamic allocation of pointer p2
    p2 = new int[5];
    p2[0] = 10, p2[1] = 15, p2[2] = 14, p2[3] = 21, p2[4] = 31;
    for (int i = 0; i < 5; i++)
    {
        cout << p2[i] << " ";
    }
    cout << endl;
    // in c++ we use delete to free dynamically occupied memory also in case of deleting am array we have to use [] in between delete and pointer name
    delete[] p2;
    int *p3;
    char *p4;
    float *p5;
    double *p6;
    cout << "size used by differnt pointers " << sizeof(p2) << " " << sizeof(p3) << " " << sizeof(p4) << " " << sizeof(p5) << " " << sizeof(p6) << endl;
    // from above statement we can say size occupied by pointer is always fix in this case it is 4
    return 0;
}