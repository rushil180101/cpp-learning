#include <iostream>
using namespace std;

// square
int perimeter(int l) {
    return l * 4;
}

// rectangle
int perimeter(int l, int b) {
    return 2 * (l + b);
}

// triangle
int perimeter(int a, int b, int c) {
    return a + b + c;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    cout << "Perimeter of square with sides of length 5 = " << perimeter(5) << endl;
    cout << "Perimeter of rectangle with sides of length 14, 9 = " << perimeter(14, 9) << endl;
    cout << "Perimeter of triangle with sides of length 8, 8, 8 = " << perimeter(8, 8, 8) << endl;

    return 0;
}
