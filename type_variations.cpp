#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    cout << "Size of int is " << sizeof(int) << " bytes." << endl;
    cout << "Size of char is " << sizeof(char) << " bytes." << endl;
    cout << "Size of float is " << sizeof(float) << " bytes." << endl;
    cout << "Size of double is " << sizeof(double) << " bytes." << endl;
    cout << "Size of long is " << sizeof(long) << " bytes." << endl;
    cout << "Size of long double is " << sizeof(long double) << " bytes." << endl;
    cout << "Size of signed is " << sizeof(signed) << " bytes." << endl;
    cout << "Size of unsigned is " << sizeof(unsigned) << " bytes." << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes." << endl;

    cout << endl;

    float x = 56.89f, y = 87.83F;
    long double p = 983.987987l, q = 61.863323L;

    cout << "Size of " << x << " is " << sizeof(x) << endl;
    cout << "Size of " << y << " is " << sizeof(y) << endl;
    cout << "Size of " << p << " is " << sizeof(p) << endl;
    cout << "Size of " << q << " is " << sizeof(q) << endl;

    cout << endl;

    // Reference variables //

    int a1 = 5;
    int a2 = a1;
    int &a3 = a1;
    cout << a1 << a2 << a3 << endl;
    a1 = 7; // a3 will change but a2 will not change
    cout << a1 << a2 << a3 << endl;

    return 0;
}
