// Operation of diagonal matrix
#include <bits/stdc++.h>
using namespace std;
class Diagonal_Matrix
{
private:
    int n;
    int *A;

public:
    Diagonal_Matrix()
    {
        cout << "Enter value of n " << endl;
        cin >> this->n;
        A = new int[this->n];
    }
    void set(int i, int j, int data);
    int get(int i, int j);
    void display();
    ~Diagonal_Matrix() { delete[] A; }
};
void Diagonal_Matrix::set(int i, int j, int data)
{
    if (i == j)
        A[i - 1] = data;
}
int Diagonal_Matrix::get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}
void Diagonal_Matrix::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    Diagonal_Matrix m;
    m.set(1, 1, 1);
    m.set(2, 2, 2);
    m.set(3, 3, 3);
    m.set(4, 4, 4);
    m.set(5, 5, 5);
    m.display();
    cout << m.get(5, 5);
    return 0;
}