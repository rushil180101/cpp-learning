#include <iostream>
#include <string>
using namespace std;

// Class templates with default parameters
template <class T1=int, class T2=int, class T3=string>
class TestCollector
{
public:
    T1 uid;
    T2 pid;
    T3 desc;
    TestCollector(T1 uid, T2 pid, T3 desc)
    {
        this->uid = uid;
        this->pid = pid;
        this->desc = desc;
    }
    void display()
    {
        cout << "UID  = " << this->uid << endl;
        cout << "PID  = " << this->pid << endl;
        cout << "DESC = " << this->desc << endl;
    }
};

// Templates can also be used with functions - Function templates
template <class T>
void swap_generic(T &a, T &b)
{
    b = a + b;
    a = b - a;
    b = b - a;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    TestCollector<> t1(5, 73, "xyz");
    t1.display();

    cout << endl;

    TestCollector<char, char, double> t2('y', 'w', 74.62);
    t2.display();

    cout << endl << "Function templates" << endl;
    int a = 7, b = 3;
    cout << "Before swap --> a = " << a << ", b = " << b << endl;
    swap_generic(a, b);
    cout << "After swap  --> a = " << a << ", b = " << b << endl;

    double p = 745.06308, q = 688.970;
    cout << "Before swap --> p = " << p << ", q = " << q << endl;
    swap_generic(p, q);
    cout << "After swap  --> p = " << p << ", q = " << q << endl;

    char x = 'm', y = 'n';
    cout << "Before swap --> x = " << x << ", y = " << y << endl;
    swap_generic(x, y);
    cout << "After swap  --> x = " << x << ", y = " << y << endl;

    return 0;
}
