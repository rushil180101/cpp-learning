#include <iostream>
using namespace std;

int summation(int n) {
    if (n <= 1) {
        return 1;
    }
    return n + summation(n - 1);
}

int nth_fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
    // 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int n;
    cin >> n;

    int s = summation(n);
    cout << "Summation of first " << n << " natural numbers using recursion is " << s << endl;

    cin >> n;
    int f = nth_fibonacci(n);
    cout << "Number at position " << n << " in fibonacci series (starting from 1) is " << f << endl;

    return 0;
}
