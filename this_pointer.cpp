#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    int age;
    string name;
    Person(int age, string name)
    {
        // 'this' pointer points to the current object
        // Similar to 'self' in python
        this -> age = age;
        this -> name = name;
    }
    void display()
    {
        cout << "Age = " << this -> age << ", Age = " << (*this).age << endl;
        cout << "Name = " << this -> name << ", Name = " << (*this).name << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    Person *p1 = new Person(20, "Xyz");
    p1 -> display();

    return 0;
}
