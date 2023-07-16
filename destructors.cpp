#include <iostream>
using namespace std;

class DBConnection
{
public:
    DBConnection()
    {
        cout << "Setting up connection to DB" << endl;
    }

    // Destructor - Takes no args and does not return any value
    ~DBConnection()
    {
        cout << "Closing connection to DB" << endl;
        cout << "Clearing up cache memory" << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    DBConnection dbc1;

    return 0;
}
