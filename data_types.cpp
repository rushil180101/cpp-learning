#include <iostream>
#include <typeinfo>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int a = 5467;
    float b = -90.64;
    char c = 'c';
    double d = 987394.928309824038;
    bool e = false;

    cout << "Type of a = " << typeid(a).name() << endl;
    cout << "Type of b = " << typeid(b).name() << endl;
    cout << "Type of c = " << typeid(c).name() << endl;
    cout << "Type of d = " << typeid(d).name() << endl;
    cout << "Type of e = " << typeid(e).name() << endl;

    return 0;
}
