#include <iostream>
using namespace std;

inline int next_calc(int a, int b, int c) {
    return ((a * b) / c + 5 - 3 * a) * (c * b % 7);
}

void static_demo() {
    static int x = 0;
    // This is initialized one time on first function call and then value
    // is preserved and updated on every function call
    x += 1;
    cout << x << endl;
}

// Default arguments - If value is passed while calling, passed value is used. Otherwise default value is used
int new_admission(int student_id, int standard=1) {
    cout << "Student " << student_id << " enrolled and granted admission in std " << standard << endl;
    return student_id * standard;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    cout << next_calc(89, 54, 76) << endl;

    static_demo();
    static_demo();
    static_demo();
    static_demo();

    // Default args
    cout << new_admission(2914) << endl;
    cout << new_admission(2908, 5) << endl;
    cout << new_admission(1390, 3) << endl;
    cout << new_admission(1563) << endl;

    return 0;
}
