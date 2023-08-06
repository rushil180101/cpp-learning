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
    // If we want to execute the get_data() of derived class if the object is of derived class, then use 'virtual' keyword
    virtual void get_data()
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
    person_ptr1 -> get_data(); // Executes get_data of derived class due to 'virtual' keyword

    cout << endl << endl;
    Person *a = new Person("P1", 20);
    Engineer *b = new Engineer("P2", 25, "Mechanical", 3);
    Person *c = new Engineer("P3", 23, "Electrical", 0);
    // Engineer *d = new Person("P4", 30); <-- Child class pointer CANNOT point to object of parent class

    a -> get_data();
    cout << endl;
    b -> get_data();
    cout << endl;
    c -> get_data();

    return 0;
}
