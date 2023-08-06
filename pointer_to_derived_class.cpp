#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    int age;
    string name;
    Person(string name, int age)
    {
        this -> name = name;
        this -> age = age;
    }
    void get_data()
    {
        cout << "Person -- Name = " << this -> name << ", Age = " << this -> age << endl;
    }
};

class Engineer: public Person
{
public:
    string engineer_type;
    int experience;
    Engineer(string name, int age, string engineer_type, int experience): Person(name, age)
    {
        this -> engineer_type = engineer_type;
        this -> experience = experience;
    }
    void get_data()
    {
        cout << "Engineer -- Name = " << this -> name << endl;
        cout << "Engineer -- Age = " << this -> age << endl;
        cout << "Engineer -- Engineer type = " << this -> engineer_type << endl;
        cout << "Engineer -- Experience = " << this -> experience << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    Person *person_ptr1;
    Engineer eng_obj1("Ramesh", 25, "Civil", 2);

    // Pointer of base class pointing to derived class object
    person_ptr1 = &eng_obj1;

    // Only base class members accessible via base class pointer
    cout << person_ptr1 -> name << endl;
    person_ptr1 -> get_data(); // Executes get_data of base class

    // Gives error because only base class members are accessible
    // cout << person_ptr1 -> engineer_type << endl;

    cout << endl;
    Engineer *eng_ptr1;
    Engineer eng_obj2("Xyz", 40, "Computer", 17);
    eng_ptr1 = &eng_obj2;
    cout << eng_ptr1 -> name << endl;
    cout << eng_ptr1 -> age << endl;
    cout << eng_ptr1 -> engineer_type << endl;
    cout << eng_ptr1 -> experience << endl;
    eng_ptr1 -> get_data(); // Will call get_data() of derived class because pointer is of derived class type

    // Which get_data() will be called is decided on run time - Late binding

    return 0;
}
