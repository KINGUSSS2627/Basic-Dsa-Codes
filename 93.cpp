// Implementation of sparse matrix
#include <bits/stdc++.h>
using namespace std;
class element
{
private:
public:
    int i;
    int j;
    int x;
};
class sparse
{
private:
    int m;
    int n;
    int num;

public:
    void set_m()
    {
        cout << "Enter value of M" << endl;
        cin >> m;
    }
    void set_n()
    {
        cout << "Enter value of N" << endl;
        cin >> n;
    }
    void set_num()
    {
        cout << "Enter value of number of non zero terms " << endl;
        cin >> num;
    }
    int get_num()
    {
        return num;
    }
    int get_n()
    {
        return n;
    }
    int get_m()
    {
        return m;
    }
    element *e = new element[get_num()];
};
void create(sparse *s)
{
    s->set_m();
    s->set_n();
    s->set_num();
    for (int i = 0; i < s->get_num(); i++)
    {
        cout << "Enter value Of " << i << " element" << endl;
        cin >> s->e[i].i >> s->e[i].j >> s->e[i].x;
    }
}
void display(sparse s)
{
    int k = 0;
    for (int i = 0; i < s.get_m(); i++)
    {
        for (int j = 0; j < s.get_n(); j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
            {
                cout << s.e[k].x << " ";
                k++;
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
    sparse s;
    create(&s);
    display(s);
    return 0;
}