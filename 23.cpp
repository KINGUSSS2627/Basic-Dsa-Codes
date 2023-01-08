#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Methode 1. to declare a static 2D array in stack
    int a[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};
    // To declare a part of 2D array as pointer in stack and the ramaining in heap
    int *b[3];
    b[0] = new int[4];
    b[1] = new int[4];
    b[2] = new int[4];
    // Complete 2 D array inside heap
    int **c;
    c = (int **)malloc(3 * sizeof(int));
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}