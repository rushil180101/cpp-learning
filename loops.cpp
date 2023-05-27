#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    /*
    Loops in C++
    1. For loop
    2. While loop
    3. Do-while loop
    */

   // For loop
   int n;
   cin >> n;
   for (int i=1; i<=n; i++) {
        cout << i << endl;
   }

   cout << endl << endl;

   // While loop
   char c;
   while (true) {
        cin >> c;
        cout << c << " ";
        if ((c == 'Q') || (c == 'q')) {
            break;
        }
   }

   cout << endl << endl;

   // Do-While loop
   int x = 1;
   do {
        cout << x << " ";
        x += 1;
   } while (x < 1);
   cout << endl;

   x = 1;
   while (x < 1) {
        cout << x << " ";
        x += 1;
   }

   cout << endl << endl;

   // Multiplication table
   int a;
   cin >> a;
   cout << "Multiplication table for " << a << endl;
   for (int i=1; i<=10; i++) {
        int p = a * i;
        cout << setw(3) << a << " * " << setw(3) << i << " = " << setw(3) << p << endl;
   }

    return 0;
}
