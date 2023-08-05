#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int *a = new int(15);
    float *b = new float(20.258);
    cout << a << ", " << b << endl;
    cout << *a << ", " << *b << endl;

    int *c = new int[5];
    c[0] = 1, c[1] = 2, c[2] = 3, c[3] = 4, c[4] = 5;
    for (int i=0; i<5; i++)
    {
        cout << *(c + i) << endl;
    }
    cout << endl;
    *(c + 0) = 10, *(c + 1) = 20, *(c + 2) = 30, *(c + 3) = 40, *(c + 4) = 50;
    for (int i=0; i<5; i++)
    {
        cout << c[i] << endl;
    }

    // delete
    delete a;
    delete b;
    delete[] c;

    cout << endl;
    for (int i=0; i<5; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
