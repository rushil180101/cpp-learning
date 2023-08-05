#include <iostream>
#include <string>
using namespace std;

class DataCollector
{
public:
    int access_key;
    int secret_key;
    string table_name;
    DataCollector(int ak, int sk, string tn)
    {
        access_key = ak;
        secret_key = sk;
        table_name = tn;
        cout << "Data collector called, table name = " << table_name << endl;
    }
    void display()
    {
        cout << access_key << ", " << secret_key << ", " << table_name << endl;
    }
};

static int node_id = 1;
class Node
{
public:
    int id;
    Node *next;
    Node()
    {
        id = node_id;
        node_id++;
    }
    void display() { cout << "Node - " << id << endl; }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Pointers to objects
    DataCollector d1(10, 15, "table1");
    DataCollector *ptr1 = &d1;

    DataCollector *ptr2 = new DataCollector(20, 25, "table2");

    // Accessing data members using dot operator
    (*ptr1).display();
    (*ptr2).display();

    // Arrow operator
    DataCollector *ptr3 = new DataCollector(30, 35, "table3");
    ptr3->display();
    ptr3 -> display(); // Having white space around arrow operator does not cause any issues

    cout << ptr3 -> access_key << endl;
    cout << ptr3 -> secret_key << endl;
    cout << ptr3 -> table_name << endl;

    cout << endl;
    // Pointer to array of objects
    Node *n1 = new Node[3];
    (n1 + 0) -> display();
    (n1 + 1) -> display();
    (n1 + 2) -> display();

    return 0;
}
