#include <iostream>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    int age;
    cout << "Enter age : ";
    cin >> age;

    cout << age << endl;

    if (age >= 60) {
        cout << "Senior citizen";
    }
    else if (age >= 18) {
        cout << "Adult";
    }
    else if (age >= 13) {
        cout << "Teenager";
    }
    else {
        cout << "Kid";
    }

    cout << endl << endl;

    // Switch case
    char c;
    cout << "Do you wish to proceed ? Enter Y or N : ";
    cin >> c;

    cout << c << endl;

    switch (c) {
        case 'Y':
            cout << "Yes, proceed further";
            break;
        case 'N':
            cout << "No, do not proceed further";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}
