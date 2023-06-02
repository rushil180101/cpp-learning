#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int opening_balance = 520354;

    // & --> Address Of operator
    int *p = &opening_balance;

    cout << "&opening_balance = " << &opening_balance << endl;
    cout << "*p = " << &opening_balance << endl;

    // * --> Dereferencing operator
    int value = *p;
    cout << "Value at address " << p << " = " << value << endl;

    // Pointer to pointer
    float x = 333.333;
    float *i = &x;
    float **j = &i;

    cout << "x = " << x << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "**j = " << **j << endl;

    return 0;
}
