#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // << - Insertion operator
    // >> - Extraction operator

    int x, y;

    cout << "Enter a number : ";
    cin >> x;
    cout << "Enter a number : ";
    cin >> y;

    int product = x * y;
    cout << "Product of x and y : " << product;

    return 0;
}
