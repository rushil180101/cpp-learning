#include <iostream>
using namespace std;

class Parent
{
    int x, y;
public:
    int z;
    void set_attributes()
    {
        x = 5;
        y = 7;
        z = 10;
    }
    int get_x() { return x; }
    int get_y() { return y; }
};

class Child : public Parent
{
    int a, b;
public:
    int c;
    int process()
    {
        a = get_x() + 5;
        b = get_y() + 5;
        c = z + 5;
    }
    void display()
    {
        cout << "Parent" << endl;
        cout << "x = " << get_x() << endl;
        cout << "y = " << get_y() << endl;
        cout << "z = " << z << endl;

        cout << "Child" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    Child c1;
    c1.set_attributes();
    c1.process();
    c1.display();

    return 0;
}
