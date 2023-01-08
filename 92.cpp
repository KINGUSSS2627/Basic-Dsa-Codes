// Lower singular matrix
#include <bits/stdc++.h>
using namespace std;
class Symmtric_Matrix
{
private:
    int n;
    int *A;

public:
    Symmtric_Matrix()
    {
        cout << "Enter value of n " << endl;
        cin >> this->n;
        A = new int[(n * (n + 1)) / 2];
    }
    void set(int i, int j, int data);
    int get(int i, int j);
    void display();
    ~Symmtric_Matrix() { delete[] A; }
};
void Symmtric_Matrix::set(int i, int j, int data)
{
    if (j >= i)
    {
        int index = (((j * (j - 1)) / 2) + (i - 1));
        A[index] = data;
    }
}
int Symmtric_Matrix::get(int i, int j)
{
    int index = (((j * (j - 1)) / 2) + (i - 1));
    return A[index];
}
void Symmtric_Matrix::display()
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
            {
                int index = (((i * (i - 1)) / 2) + (j - 1));
                cout << A[index] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    Symmtric_Matrix m;
    m.set(1, 1, 2);
    m.set(1, 2, 3);
    m.set(2, 2, 4);
    m.set(1, 3, 4);
    m.set(2, 3, 5);
    m.set(3, 3, 6);
    m.display();
    return 0;
}