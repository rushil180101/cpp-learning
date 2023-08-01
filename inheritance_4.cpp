#include <iostream>
using namespace std;

// Multiple inheritance
/*
class Derived: {{visibility-mode}} Base1, {{visibility-mode}} Base2
{}
*/

class Admin
{
public:
    void check_system_health()
    {
        cout << "Checking system health ..." << endl;
        cout << "System health status : Green" << endl;
    }
};

class ITSupport
{
public:
    void shut_down_system()
    {
        cout << "Shutting down system..." << endl;
        cout << "Remote system has been shut down" << endl;
    }
};

class PowerUser: public Admin, public ITSupport // Multiple inheritance
{
public:
    void monitor()
    {
        check_system_health();
        shut_down_system();
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    PowerUser p1;
    p1.monitor();

    return 0;
}
