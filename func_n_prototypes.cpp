#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// return-type function-name(args);
float area_of_triangle_herons_formula(int, int, int);

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int a = 7;
    int b = 7;
    int c = 7;

    // Actual parameters
    float area = area_of_triangle_herons_formula(a, b, c);
    cout << "Area of triangle = " << area << endl;

    return 0;
}

float area_of_triangle_herons_formula(int a, int b, int c) {
    // Formal parameters - a, b, c
    float s = (a + b + c) / 2;
    float n = s * (s - a) * (s - b) * (s - c);
    float area = sqrt(n);
    return area;
}
