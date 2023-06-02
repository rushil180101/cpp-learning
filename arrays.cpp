#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int processed_ids[3] = {876, 547, 782};
    cout << processed_ids[0] << endl;
    cout << processed_ids[1] << endl;
    cout << processed_ids[2] << endl;

    cout << endl << endl;

    // Arrays and garbage values //

    // Just declaring array and not initializing it will set
    // all its indices to garbage values
    int a[3]; // All garbage values
    // Though, we can assign values outside index range
    a[10] = 56;
    a[53] = 29;
    // All other indices outside range are accessible and
    // hold garbage values
    for (int i=0; i<100; i++) {
        cout << "a[" << i << "] -- " << a[i] << endl;
    }

    // Initializing an array with elements less than or equal
    // to number of indices will result in filling up the
    // empty places with zeroes
    int b[5] = {23, 79}; // Values at indices 2, 3, 4 are set to 0
    for (int i=0; i<5; i++) {
        cout << "b[" << i << "] -- " << b[i] << endl;
    }

    // Initializing with more values gives error - too many initializers
    // int k[2] = {1, 2, 3, 4, 5};

    // ------------------------------------------ //

    // Pointers and arrays (Pointer arithmetic)
    cout << "\nPointers and arrays (Pointer arithmetic)\n" << endl;
    double c[4] = {73.74l, 94.43l, 87.14l, 63.04l};
    double *k = c;

    cout << c << endl; // Address of 0th element
    cout << k << endl; // Address of 0th element
    cout << *c << endl; // Value of 0th element
    cout << *k << endl; // Value of 0th element

    cout << "sizeof(double) = " << sizeof(double) << endl;

    // Value of i th element
    for (int i=0; i<4; i++) {
        cout << "Address = " << (k + i) << endl;
        cout << "Value   = " << *(k + i) << endl;
        // Suppose k points to memory location 1000
        // k + 1 points to --> 1008
        // k + 2 points to --> 1016
        // k + 3 points to --> 1024
        // ...
    }

    return 0;
}
