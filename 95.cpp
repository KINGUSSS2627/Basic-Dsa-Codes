// polynomial implementaion using array
#include <bits/stdc++.h>
using namespace std;
class term
{
private:
    int coff;
    int exp;

public:
    friend class polynomial;
};
class polynomial
{
private:
    int num_terms;
    term *t;

public:
    polynomial()
    {
    }
    polynomial(int num)
    {
        // cout << "Enter number of terms" << endl;
        // cin >> num_terms;
        t = new term[num];
        num_terms = num;
    }
    void create_poly()
    {
        for (int i = 0; i < num_terms; i++)
        {
            cout << "Enter " << i + 1 << "th of polynomial in coff exponential way " << endl;
            cin >> t[i].coff >> t[i].exp;
        }
    }
    void display()
    {

        for (int i = 0; i < num_terms; i++)
        {
            if (i < num_terms - 1)
            {
                cout << t[i].coff << "x^" << t[i].exp << "+";
            }
            else
            {
                cout << t[i].coff << "x^" << t[i].exp;
            }
        }
        cout << endl;
    }
    polynomial *add(polynomial *p1, polynomial *p2)
    {
        polynomial *sum;
        sum = new polynomial;
        sum->t = new term[p1->num_terms + p2->num_terms];
        int i = 0, k = 0, j = 0;
        while (i < p1->num_terms && j < p2->num_terms)
        {
            if (p1->t[i].exp > p2->t[j].exp)
            {
                sum->t[k].coff = p1->t[i].coff;
                sum->t[k++].exp = p1->t[i++].exp;
            }
            else if (p1->t[i].exp < p2->t[j].exp)
            {
                sum->t[k].coff = p2->t[j].coff;
                sum->t[k++].exp = p2->t[j++].exp;
            }
            else
            {
                sum->t[k].exp = p1->t[i].exp;
                sum->t[k++].coff = p1->t[i++].coff + p2->t[j++].coff;
            }
        }
        for (; i < p1->num_terms; i++)
        {
            sum->t[k].exp = p1->t[i].exp;
            sum->t[k++].coff = p1->t[i].coff;
        }
        for (; j < p1->num_terms; j++)
        {
            sum->t[k].exp = p2->t[j].exp;
            sum->t[k++].coff = p2->t[j].coff;
        }
        sum->num_terms = k;
        return sum;
    }
    ~polynomial() { delete[] t; }
};

int main()
{

    int n, m;
    cout << "Enter number of terms" << endl;
    cin >> n;
    polynomial p1(n);
    p1.create_poly();
    p1.display();
    cout << "Enter number of terms" << endl;
    cin >> m;
    polynomial p2(m);
    p2.create_poly();
    p2.display();
    polynomial p3, *p4;
    p4 = p3.add(&p1, &p2);
    p4->display();
    return 0;
}