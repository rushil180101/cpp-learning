#include <iostream>
using namespace std;

class Demo
{
    int a, b;
public:
    // Constructor should always be declared in public section, else will raise errors
    // Default constructor
    Demo()
    {
        cout << "Default - Demo constructor" << endl;
    }

    // Parameterized constructor
    Demo(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized - Demo constructor" << endl;
    }
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    Demo d1, d2, d3;
    Demo d4(1, 2), d5(6, 7);

    return 0;
}
