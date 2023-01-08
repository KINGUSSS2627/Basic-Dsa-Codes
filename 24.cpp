#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int main()
{
    Array arr;
    int n;
    cout << "Enter size of array" << endl;
    cin >> arr.size;
    arr.A = new int[sizeof(int) * arr.size];
    arr.length = 0;
    cout << "Enter number of element " << endl;
    cin >> n;
    arr.length = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    Display(arr);
    return 0;
}