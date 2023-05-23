#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Constants //
    const int a = 5;
    const float b = 4.3;
    // a = 7; --> Generates error

    // Manipulators //
    // Manipulators are used for output formatting, e.g. setw()
    int x = 987987, y = 98, z = 98203980;
    cout << "Value of x " << x << endl;
    cout << "Value of y " << y << endl;
    cout << "Value of z " << z << endl;
    cout << "Using setw()" << endl; // Right aligns output in 13 available spaces
    cout << "Value of x " << setw(13) << x << endl;
    cout << "Value of y " << setw(13) << y << endl;
    cout << "Value of z " << setw(13) << z << endl;

    return 0;
}
