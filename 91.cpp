// Lower triangular matrix - coloumn major
// For crow major use index=(n*(i-1)-(i-2)*(i-1)/2)+(i-j)
#include <bits/stdc++.h>
using namespace std;
class Upper_triangular_Matrix
{
private:
    int n;
    int *A;

public:
    Upper_triangular_Matrix()
    {
        cout << "Enter value of n " << endl;
        cin >> this->n;
        A = new int[(n * (n + 1)) / 2];
    }
    void set(int i, int j, int data);
    int get(int i, int j);
    void display();
    ~Upper_triangular_Matrix() { delete[] A; }
};
void Upper_triangular_Matrix::set(int i, int j, int data)
{
    if (i <= j)
    {
        int index = (((j * (j - 1)) / 2) + (i - 1));
        A[index] = data;
    }
}
int Upper_triangular_Matrix::get(int i, int j)
{
    if (i <= j)
    {
        int index = (((j * (j - 1)) / 2) + (i - 1));
        return A[index];
    }
    else
    {
        return 0;
    }
}
void Upper_triangular_Matrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                int index = (((j * (j - 1)) / 2) + (i - 1));
                cout << A[index] << " ";
            }
            else
                cout << "0"
                     << " ";
        }
        cout << endl;
    }
}

int main()
{
    Upper_triangular_Matrix m;
    m.set(1, 1, 2);
    m.set(1, 2, 3);
    m.set(2, 2, 4);
    m.set(1, 3, 4);
    m.set(2, 3, 5);
    m.set(3, 3, 6);
    m.display();
    return 0;
}