#include <iostream>
using namespace std;

struct UserProfile
{
    int user_id;
    char user_profile_url[50];
    char name[40];
    int followers;
};

typedef struct node
{
    int value; // 4 bytes
    int *next; // 4 bytes
} linked_list_node; // total = 8 bytes

union custom_data_type
{
    int v1; // 4 bytes
    int v2; // 4 bytes
    int v3; // 4 bytes
}; // total = max(4, 4, 4) = 4 bytes --> memory optimization


int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    struct UserProfile profile1;
    profile1.user_id = 1001;
    profile1.followers = 278;

    cout << "User ID   = " << profile1.user_id << endl;
    cout << "Followers = " << profile1.followers << endl;

    // Initializing data type declared using typedef
    linked_list_node n1;
    n1.value = 5;
    cout << n1.value << endl;

    cout << sizeof(n1) << endl;

    // Union - Shared memory
    cout << "Union" << endl;
    union custom_data_type c1;
    cout << sizeof(c1) << endl;

    c1.v1 = 32;
    cout << c1.v1 << endl;
    cout << c1.v2 << endl;
    cout << c1.v3 << endl;

    cout << "Changed" << endl;
    c1.v2 = 55;
    cout << c1.v1 << endl;
    cout << c1.v2 << endl;
    cout << c1.v3 << endl;

    // Enum
    cout << "Enum" << endl;
    enum transaction {
        input,
        process,
        balance_check,
        debit
    };
    cout << input << endl; // 0
    cout << balance_check << endl; // 2
    cout << process << endl; // 1
    cout << debit << endl; // 3

    // typedef
    typedef int integer;
    integer a = 193;
    cout << a;

    return 0;
}
