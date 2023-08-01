#include <iostream>
using namespace std;

class A
{
private:
    int a;
protected:
    int b;
public:
    int c;
};

class C1: private A // Private inheritance
{
    // a - Not inherited
    // private
    //    - b, c
};

class C2: protected A // Protected inheritance
{
    // a - Not inherited
    // protected
    //    - b, c
};

class C3: public A // Public inheritance
{
    // a - Not inherited
    // protected
    //    - b
    // public
    //    - c
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Main code here ...

    return 0;
}
