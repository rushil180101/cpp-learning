#include <iostream>
#include <string>
using namespace std;

// Without static member, interest rate will differ for each account
class Account
{
    int account_id;
    float balance;
    string account_holder_name;
    int account_holder_age;
    float interest_per_annum = 7.5;

public:
    void set_data(
        int param_account_id,
        float param_balance,
        string param_account_holder_name,
        int param_account_holder_age,
        float param_interest_per_annum
    )
    {
        account_id = param_account_id;
        balance = param_balance;
        account_holder_name = param_account_holder_name;
        account_holder_age = param_account_holder_age;
        interest_per_annum = param_interest_per_annum;
    }

    void display_data()
    {
        cout << "Account id   = " << account_id << endl;
        cout << "Balance      = " << balance << endl;
        cout << "Name         = " << account_holder_name << endl;
        cout << "Age          = " << account_holder_age << endl;
        cout << "Interest P/A = " << interest_per_annum << endl;
    }
};

// With static member, interest rate will remain same for each account
class AccountStaticDemo
{
    int account_id;
    float balance;
    string account_holder_name;
    int account_holder_age;
    static float interest_per_annum; // Static member remains common across all objs
    // It is compulsory to declare static variable outside the class

public:
    void set_data(
        int param_account_id,
        float param_balance,
        string param_account_holder_name,
        int param_account_holder_age,
        float param_interest_per_annum
    )
    {
        account_id = param_account_id;
        balance = param_balance;
        account_holder_name = param_account_holder_name;
        account_holder_age = param_account_holder_age;
        interest_per_annum = param_interest_per_annum;
    }

    void display_data()
    {
        cout << "Account id   = " << account_id << endl;
        cout << "Balance      = " << balance << endl;
        cout << "Name         = " << account_holder_name << endl;
        cout << "Age          = " << account_holder_age << endl;
        cout << "Interest P/A = " << interest_per_annum << endl;
    }

    // Static function accesses only other static members
    static void set_interest_per_annum(float param_interest_per_annum)
    {
        interest_per_annum = param_interest_per_annum;
        // account_id = 1; <-- Accessing non-static member generates error
    }
};

// This declaration for static member outside of the class is necessary, 
// else program will generate error.
float AccountStaticDemo :: interest_per_annum = 7.5;

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    Account a1;
    a1.set_data(1, 300, "Ramesh", 21, 5.3);

    Account a2;
    a2.set_data(2, 6500, "Vicky", 25, 7.5);

    Account a3;
    a3.set_data(3, 4390, "Nick", 24, 6.2);

    a1.display_data();
    cout << endl;

    a2.display_data();
    cout << endl;

    a3.display_data();
    cout << endl;

    ///////////////////////////////////////////////////////////
    cout << "Static members demo (interest rate)" << endl;

    AccountStaticDemo a1_new;
    a1_new.set_data(1, 300, "Ramesh", 21, 5.3);

    AccountStaticDemo a2_new;
    a2_new.set_data(2, 6500, "Vicky", 25, 7.5);

    AccountStaticDemo a3_new;
    a3_new.set_data(3, 4390, "Nick", 24, 6.2);

    a1_new.display_data();
    cout << endl;

    a2_new.display_data();
    cout << endl;

    a3_new.display_data();
    cout << endl;

    cout << endl << "Use of static function to update static member (interest rate)" << endl;
    // Use of static member function
    AccountStaticDemo::set_interest_per_annum(9.3);

    a1_new.display_data();
    cout << endl;

    a2_new.display_data();
    cout << endl;

    a3_new.display_data();
    cout << endl;

    return 0;
}
