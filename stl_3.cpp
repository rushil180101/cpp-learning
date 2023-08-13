#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Map - Associative container - Similar to dict in python
    map<int, string> emps1;
    map<int, string> :: iterator map_iter1;

    emps1[1] = "Name1";
    emps1[2] = "Name2";
    emps1[3] = "Name3";
    emps1[4] = "Name4";
    emps1[5] = "Name5";

    for (map_iter1=emps1.begin(); map_iter1!=emps1.end(); map_iter1++)
    {
        cout << (*map_iter1).first << " = " << (*map_iter1).second << endl;
    }

    // Insert new key-value pairs
    cout << endl;
    cout << "Inserted new elements" << endl;
    emps1.insert(
        {
            {6, "Hello world"},
            {7, "ABCDefgh"}
        }
    );
    for (map_iter1=emps1.begin(); map_iter1!=emps1.end(); map_iter1++)
    {
        cout << (*map_iter1).first << " = " << (*map_iter1).second << endl;
    }

    return 0;
}
