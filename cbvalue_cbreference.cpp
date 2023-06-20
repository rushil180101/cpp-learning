#include <iostream>
using namespace std;

// Call by value
void swapper_cbv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference
void swapper_cbr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Call by value
    cout << "Call by value" << endl;
    int x = 25, y = 36;
    cout << x << ", " << y << endl;
    swapper_cbv(x, y);
    cout << x << ", " << y << endl;

    // Call by reference - passes memory address
    cout << "Call by reference" << endl;
    cout << x << ", " << y << endl;
    swapper_cbr(&x, &y);
    cout << x << ", " << y << endl;

    return 0;
}
