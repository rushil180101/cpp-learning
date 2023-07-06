#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;
    Complex add(Complex c)
    {
        Complex s;
        s.a = a + c.a;
        s.b = b + c.b;
        return s;
    }
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    Complex c1, c2;
    c1.a = 5;
    c1.b = 7;

    c2.a = 3;
    c2.b = 1;

    Complex s = c1.add(c2);
    cout << s.a << " + " << s.b << "i" << endl;

    return 0;
}
