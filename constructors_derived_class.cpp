#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int p) { a = p; }
};

class B: public A
{
public:
    int b;
    B(int p, int q): A(p)
    {
        b = q;
    }
};

class C: public B
{
public:
    int c;
    C(int p, int q, int r): B(p, q)
    {
        c = r;
    }
};

class P
{
public:
    int p;
    P(int x)
    {
        cout << "P constructor called" << endl;
        p = x;
    }
};

class Q
{
public:
    int q;
    Q(int y)
    {
        cout << "Q constructor called" << endl;
        q = y;
    }
};

class R: public P, public Q
{
public:
    int r;
    R(int x, int y, int z): P(x), Q(y)
    {
        cout << "R constructor called" << endl;
        r = z;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    C c1(10, 20, 30);
    cout << c1.a << endl;
    cout << c1.b << endl;
    cout << c1.c << endl;

    cout << endl << endl;

    R r1(25, 35, 45);
    cout << r1.p << endl;
    cout << r1.q << endl;
    cout << r1.r << endl;

    return 0;
}
