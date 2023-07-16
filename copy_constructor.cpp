#include <iostream>
using namespace std;

class CxAccount
{
public:
    int id;
    char acc_type;

    CxAccount() {}

    // Copy constructor.
    // When no copy constructor is provided, compiler provides its own copy constructor
    CxAccount(CxAccount &acc)
    {
        cout << "Copy constructor called" << endl;
        id = acc.id;
        acc_type = acc.acc_type;
    }

    void display_acc()
    {
        cout << "Account id   = " << id << endl;
        cout << "Account type = " << acc_type << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    CxAccount c1;
    c1.id = 1;
    c1.acc_type = 'A';
    c1.display_acc();

    CxAccount c2(c1); // Copy constructor invoked
    c2.display_acc();

    return 0;
}
