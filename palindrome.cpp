#include <iostream>
#include <string>
using namespace std;

// Use of "string" data type and its corresponding functions (at, length)
bool is_palindrome(string s) {
    int m = int(s.length() / 2);
    for (int i=0; i<=m; i++) {
        if (s.at(i) != s.at(s.length() - 1 - i)) {
            return false;
        }
    }
    return true;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    string s1 = "abcdedcba";
    string s2 = "pqqp";

    string s3 = "abcde";
    string s4 = "pqrs";

    cout << s1 << " --> " << is_palindrome(s1) << endl;
    cout << s2 << " --> " << is_palindrome(s2) << endl;
    cout << s3 << " --> " << is_palindrome(s3) << endl;
    cout << s4 << " --> " << is_palindrome(s4) << endl;

    return 0;
}
